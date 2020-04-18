//
// Created by quiks on 13.04.2020.
//

#ifndef JSINTERP_ASTVISITOR_H
#define JSINTERP_ASTVISITOR_H

#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include "AstBase.h"

class AstVisitor : public AstBaseVisitor {
  const int step = 4;
  int tabCount_ = 0;
  int lastOffset_ = 0;
  void printArgs(const std::vector<std::pair<std::string, std::string>>& args);
  void printLine(int flag = 0);
  void printNodeName(NodeType type);
  void printPosition(Position position);
  std::stringstream astTextTree_;

 public:
  AstNode* root;
  explicit AstVisitor(AstNode* r) : root(r) {
    lastOffset_ = 0;
    visitNewNode(root);
  }

  std::string getTextTree();
  void visitNewNode(AstNode* node);
  void visitNewNode(const std::string& fieldName, const std::vector<AstNode*>& nodes);
  void visit(ProgramNode* node) override;
  void visit(BlockStatementNode* node) override;
  void visit(VarDeclarationNode* node) override;
  void visit(VarDeclaratorNode* node) override;
  void visit(IdentifierNode* node) override;
  void visit(NullLiteral* node) override;
  void visit(NumericLiteral* node) override;
  void visit(BooleanLiteral* node) override;
  void visit(StringLiteral* node) override;
  void visit(FunctionDeclarationNode* node) override;
  void visit(FunctionBodyNode* node) override;
  void visit(CallExpressionNode* node) override;
  void visit(ExpressionStatementNode* node) override;
  void visit(WhileStatementNode* node) override;
  void visit(BreakStatementNode* node) override;
  void visit(ContinueStatementNode* node) override;
  void visit(ReturnStatementNode* node) override;
  void visit(ExpressionSequenceNode* node) override;
  void visit(BinaryExpressionNode* node) override;
  void visit(IfStatementNode* node) override;
  void visit(AssignmentExpressionNode* node) override;
  void visit(UnaryExpressionNode* node) override;
  void visit(MemberExpressionNode* node) override;
  void visit(PropertyExpressionNode* node) override;
  void visit(ArrayExpressionNode* node) override;
  void visit(EmptyExpressionNode* node) override;
  void visit(ObjectExpressionNode* node) override;
  void visit(UndefinedNode* node) override;
};

#endif  // JSINTERP_ASTVISITOR_H
