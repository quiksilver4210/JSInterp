#include <iostream>

#include "antlr4-runtime.h"
#include "JavaScriptLexer.h"
#include "JavaScriptParser.h"
#include "JavaScriptParserBaseVisitor.h"

using namespace antlr4;

int main(int, const char **) {
  ANTLRFileStream inputFile("../example/test.js");
  JavaScriptLexer lexer(&inputFile);
  CommonTokenStream tokens(&lexer);

  tokens.fill();

  JavaScriptParser parser(&tokens);

  JavaScriptParserBaseVisitor visitor;
  auto ctx = parser.block();
  visitor.visitBlock(ctx);
  std::cout << ctx->toStringTree(true) << std::endl;

  return 0;
}
