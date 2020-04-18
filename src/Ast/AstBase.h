//
// Created by quiks on 14.04.2020.
//

#ifndef JSINTERP_ASTBASE_H
#define JSINTERP_ASTBASE_H

#include <map>
#include <stack>
#include <vector>
#include "Constants.h"
class AstBaseVisitor;
class AstNode;
class ProgramNode;
class StatementNode;
class BlockStatementNode;
class WhileStatementNode;
class IfStatementNode;
class BreakStatementNode;
class ContinueStatementNode;
class ReturnStatementNode;
class ExpressionStatementNode;

class IdentifierNode;
class VarDeclarationNode;
class VarDeclaratorNode;

class ExpressionNode;
class FunctionDeclarationNode;
class FunctionBodyNode;
class FunctionExpressionNode;
class UnaryExpressionNode;
class BinaryExpressionNode;
class AssignmentExpressionNode;
class CallExpressionNode;
class ExpressionSequenceNode;
class MemberExpressionNode;
class PropertyExpressionNode;
class NullLiteral;
class StringLiteral;
class NumericLiteral;
class BooleanLiteral;
class EmptyExpressionNode;
class ArrayExpressionNode;
class ObjectExpressionNode;

class NodeStack {
  std::stack<AstNode*> stack_;

 public:
  void push(AstNode* node) {
    stack_.push(node);
  }
  template <typename T>
  void popTo(T*& node) {
    node = (T*)stack_.top();
    stack_.pop();
  }
};

struct Position {
  size_t line = 0;
  size_t column = 0;
};

class AstNode {
 public:
  NodeType type;
  Position position;
  void setPosition(int line, int column) {
    position.line = line;
    position.column = column;
  }
  virtual void accept(AstBaseVisitor* visitor){};
};

class AstBaseVisitor {
 public:
  virtual void visit(ProgramNode* node) = 0;
  virtual void visit(BlockStatementNode* node) = 0;
  virtual void visit(VarDeclarationNode* node) = 0;
  virtual void visit(VarDeclaratorNode* node) = 0;
  virtual void visit(IdentifierNode* node) = 0;
  virtual void visit(NullLiteral* node) = 0;
  virtual void visit(NumericLiteral* node) = 0;
  virtual void visit(BooleanLiteral* node) = 0;
  virtual void visit(StringLiteral* node) = 0;
  virtual void visit(FunctionDeclarationNode* node) = 0;
  virtual void visit(FunctionBodyNode* node) = 0;
  virtual void visit(CallExpressionNode* node) = 0;
  virtual void visit(ExpressionStatementNode* node) = 0;
  virtual void visit(WhileStatementNode* node) = 0;
  virtual void visit(BreakStatementNode* node) = 0;
  virtual void visit(ContinueStatementNode* node) = 0;
  virtual void visit(ReturnStatementNode* node) = 0;
  virtual void visit(ExpressionSequenceNode* node) = 0;
  virtual void visit(BinaryExpressionNode* node) = 0;
  virtual void visit(IfStatementNode* node) = 0;
  virtual void visit(AssignmentExpressionNode* node) = 0;
  virtual void visit(UnaryExpressionNode* node) = 0;
  virtual void visit(MemberExpressionNode* node) = 0;
  virtual void visit(PropertyExpressionNode* node) = 0;
  virtual void visit(ArrayExpressionNode* node) = 0;
  virtual void visit(EmptyExpressionNode* node) = 0;
  virtual void visit(ObjectExpressionNode* node) = 0;
};
#endif  // JSINTERP_ASTBASE_H
