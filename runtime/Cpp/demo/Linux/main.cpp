/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>

#include "antlr4-runtime.h"
#include "CypherLexer.h"
#include "CypherParser.h"
#include "visitor.h"

using namespace antlrcpptest;
//using namespace antlr4;

int main(int argc, char **argv) {
  //ANTLRInputStream input(u8"🍴 = 🍐 + \"😎\";(((x * π))) * µ + ∰; a + (x * (y ? 0 : 1) + z);");
  if (argc != 2) {
    std::cerr << "./bin <cypher query>\n";
    exit(1);
  }
  antlr4::ANTLRInputStream input(argv[1]);

  CypherLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  CypherParser parser(&tokens);
  //antlr4::tree::ParseTree* tree = parser.oC_Cypher();
  CypherParser::OC_CypherContext* tree = parser.oC_Cypher();

  OutputVisitor visitor;
  tree->accept(&visitor);

  //std::cout << tree->toStringTree(&parser, true) << std::endl << std::endl;

  return 0;
}
