#include <gtest/gtest.h>
#include "TestUtils.h"

TEST(AST_TREE_TEST, STATEMENT_TEST) {
  TestUtils::compareIn("statements");
}

TEST(AST_TREE_TEST, EXPRESSION_TEST) {
  //  TestUtils::compareIn("expressions");
}

TEST(AST_TREE_TEST, DECLARATION_TEST) {
  //  TestUtils::compareIn("declarations");
}