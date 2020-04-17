#include <gtest/gtest.h>
#include <filesystem>
#include <string>
#include "AstNodes.cpp"
#include "AstVisitor.h"
#include "JavaScriptLexer.h"
#include "JavaScriptParser.h"
#include "JavaScriptParserBaseVisitor.h"
#include "antlr4-runtime.h"
using namespace antlr4;
using namespace std::filesystem;

#define GENERATE 0

std::string TEST_DIR = "../../Tests/TestFiles/";

class TestUtils {
 public:
  static std::string deleteSpaces(std::string str);

  static std::string getAstFromFile(const std::string& fileName);

  static std::string buildAst(const std::string& fileName);

  static void compareIn(const std::string& dir);

  static void generateAst(std::string fileName);
};
