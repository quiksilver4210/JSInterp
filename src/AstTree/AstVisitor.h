//
// Created by quiks on 13.04.2020.
//

#ifndef JSINTERP_ASTVISITOR_H
#define JSINTERP_ASTVISITOR_H

#include <iostream>
#include <sstream>
#include <stack>
#include <vector>

#include "AstNodes.h"

class AstVisitor {
  std::vector<int> offset;
  int lastOffset = 0;
  void printArgs(const std::vector<std::pair<std::string, std::string>>& args);
  void printLine();
  void printNodeName(NodeType type);
  std::stringstream tree;

 public:
  AstNode* root;
  explicit AstVisitor(AstNode* r) : root(r) {
    lastOffset = 0;
    visitNewNode(root);
  }

  std::string getTextTree();
  void visitNewNode(AstNode* node);
  void visit(ProgramNode* node);
  void visit(BlockStatementNode* node);
  void visit(VarDeclarationNode* node);
  void visit(VarDeclaratorNode* node);
  void visit(IdentifierNode* node);
  void visit(NullLiteral* node);
  void visit(NumericLiteral* node);
  void visit(BooleanLiteral* node);
  void visit(StringLiteral* node);
};

#endif  // JSINTERP_ASTVISITOR_H
