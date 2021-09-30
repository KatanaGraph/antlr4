#include <iostream>

#include "antlr4-runtime.h"
#include "CypherLexer.h"
#include "CypherParser.h"
#include "visitor.h"
#include "name_visitor.h"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "./bin <cypher query>\n";
    exit(1);
  }
  antlr4::ANTLRInputStream input(argv[1]);

  CypherLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);

  //tokens.fill();
  //for (auto token : tokens.getTokens()) {
  //  std::cout << token->toString() << std::endl;
  //}

  CypherParser parser(&tokens);
  //antlr4::tree::ParseTree* tree = parser.oC_Cypher();
  CypherParser::OC_CypherContext* tree = parser.oC_Cypher();

  // NameVisitor n;
  // tree->accept(&n);

  OutputVisitor visitor;
  tree->accept(&visitor);



  //std::cout << tree->toStringTree(&parser, true) << std::endl << std::endl;

  return 0;
}
