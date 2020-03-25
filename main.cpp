#include <iostream>

#include "antlr4-runtime.h"
#include "JavaScriptLexer.h"
#include "JavaScriptParser.h"


using namespace antlr4;

int main(int , const char **) {
  ANTLRFileStream inputFile("../example/test.js");
  JavaScriptLexer lexer(&inputFile);
  CommonTokenStream tokens(&lexer);

  tokens.fill();

  JavaScriptParser parser(&tokens);
  std::cout<<parser.block()->toStringTree(true);

  return 0;
}
