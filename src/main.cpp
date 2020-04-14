#include <iostream>

#include "AstTree/AstNodes.cpp"
#include "AstTree/AstVisitor.h"
#include "JavaScriptLexer.h"
#include "JavaScriptParser.h"
#include "JavaScriptVisitor/JavaScriptParserBaseVisitor.h"
#include "antlr4-runtime.h"
using namespace antlr4;

int main(int, const char **) {
  ANTLRFileStream inputFile("../example/test.js");
  JavaScriptLexer lexer(&inputFile);
  CommonTokenStream tokens(&lexer);

  tokens.fill();

  JavaScriptParser parser(&tokens);

  JavaScriptParserBaseVisitor visitor;
  auto ctx = parser.program();
  visitor.visitProgram(ctx);
  AstVisitor astVisitor(visitor.astTree[visitor.astTree.size() - 1]);
  std::cout << astVisitor.getTextTree();

  return 0;
}
