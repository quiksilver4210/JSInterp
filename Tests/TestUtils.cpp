#include "TestUtils.h"

std::string TestUtils::getAstFromFile(const std::string& fileName) {
  std::ifstream file(TEST_DIR + fileName);
  if (!file.is_open()) {
    return "File doesnt exists";
  }
  std::stringstream stream;
  stream << file.rdbuf();
  return stream.str();
}
std::string TestUtils::deleteSpaces(std::string str) {
  for (int i = 0; i < str.length(); ++i) {
    if (str[i] == ' ') {
      str.erase(i, 1);
      i--;
    }
  }
  return str;
}

std::string TestUtils::buildAst(const std::string& fileName) {
  ANTLRFileStream inputFile(TEST_DIR + fileName);
  JavaScriptLexer lexer(&inputFile);
  CommonTokenStream tokens(&lexer);
  tokens.fill();
  JavaScriptParser parser(&tokens);
  JavaScriptParserBaseVisitor visitor;
  auto ctx = parser.program();
  visitor.visitProgram(ctx);
  AstVisitor astVisitor(visitor.getAstRoot());
  return astVisitor.getTextTree();
}
void TestUtils::compareIn(const std::string& dir) {
  std::vector<std::string> jsFiles;
  std::vector<std::string> astFiles;
  for (const auto& file : recursive_directory_iterator(TEST_DIR + dir)) {
    if (file.is_directory()) {
      continue;
    }
    auto p = file.path().string();

    if (p.find(".js") != std::string::npos) {
      jsFiles.emplace_back(file.path());
    }
    if (p.find(".ast") != std::string::npos) {
      astFiles.emplace_back(file.path());
    }
  }

  if (GENERATE) {
    for (const auto& name : jsFiles) {
      generateAst(name);
    }
  }

  if (jsFiles.size() != astFiles.size()) {
    std::__throw_logic_error("Test files doesnt match");
  }

  std::sort(jsFiles.begin(), jsFiles.end());
  std::sort(astFiles.begin(), astFiles.end());

  for (int i = 0; i < jsFiles.size(); ++i) {
    ASSERT_EQ(buildAst(jsFiles[i]), getAstFromFile(astFiles[i]));
  }
}

void TestUtils::generateAst(std::string fileName) {
  auto jsFile = fileName;
  fileName.erase(fileName.rfind('.'));
  fileName += ".ast";
  std::ofstream file(fileName, std::ios::trunc | std::ios::out);
  file << buildAst(jsFile);
  file.close();
}
