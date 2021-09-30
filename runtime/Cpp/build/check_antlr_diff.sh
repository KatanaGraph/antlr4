#!/bin/bash

function abort_on_error() {
    echo "mismatch on: $1"
    echo
    echo "      cypher-lint:"
    cat cypherlint_out
    echo
    echo "      antlr:"
    cat antlr_out
    echo
    echo "      diff:"
    diff cypherlint_out antlr_out
    exit 1
}

matches=0
mismatches=0
cypher_lint_failures=0
antlr_failures=0
both_failures=0

> antlr_failed_queries
> cypher_lint_failed_queries

tck_queries="./tck_expression.txt"
while read -r line
do
    echo  "${line}" > temp

    cl_out="$(timeout 2 cypher-lint --ast temp 2>&1)"
    cl_exit="$?"
    if  [ "$cl_exit" -ne 0 ]; then
        cypher_lint_success=false
    else
        if grep -q error <<<"${cl_out}" ; then
            cypher_lint_success=false
        else
            cypher_lint_success=true
            ./filter_ast.py <<<"${cl_out}" > cypherlint_out
        fi
    fi
    
    an_out="$(timeout 2 ./demo/antlr4-demo "${line}" 2>&1)"
    an_exit="$?"
    if  [ "$an_exit" -ne 0 ] || grep -q "^line" <<<"${an_out}"; then #timeout 2 ./demo/antlr4-demo "$line" 2>&1| grep -q line; then
        antlr_success=false
    else
        antlr_success=true
        # timeout 2 ./demo/antlr4-demo "$line" > antlr_out
        printf "%s\n" "${an_out}" > antlr_out
    fi

    if [ "$cypher_lint_success" = true ]; then
        if [ "$antlr_success" = true ]; then
            if diff cypherlint_out antlr_out >/dev/null; then
                echo "these match"
                ((matches=matches+1))
            else
                ((mismatches=mismatches+1))
                #abort_on_error "${line}"
            fi
        else
            ((antlr_failures=antlr_failures+1))
            echo "antlr query - ${line}"
            echo "antlr failed"
            echo "$line" >> antlr_failed_queries
            #abort_on_error "${line}"
        fi
    else
        if [ $antlr_success = true ]; then
            ((cypher_lint_failures=cypher_lint_failures+1))
            echo "cypher-lint query - ${line}"
            echo "cypher-lint failed"
            echo "$line" >> cypher_lint_failed_queries
        else
            ((both_failures=both_failures+1))
            echo "both failed"
        fi
    fi
        
done < $tck_queries

echo "matches: $matches"
echo "mismatches: $mismatches"
echo "cypher_lint_failures: $cypher_lint_failures"
echo "antlr_failures: $antlr_failures"
echo "both_failures: $both_failures"
echo "total: $(wc -l $tck_queries)"
