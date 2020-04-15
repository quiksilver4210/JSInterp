//
// Created by quiks on 14.04.2020.
//

#ifndef JSINTERP_ASTBASE_H
#define JSINTERP_ASTBASE_H

#include <map>
#include <stack>
#include <vector>
class AstNode;
class ProgramNode;
class BlockStatementNode;
class StatementNode;

class IdentifierNode;
class VarDeclarationNode;
class VarDeclaratorNode;
class StatementNode;

class ExpressionNode;
class FunctionDeclarationNode;
class FunctionBodyNode;
class ReturnStatementNode;

class ArrayExpressionNode;

class WhileStatementNode;
class IfStatementNode;
class BreakStatementNode;
class ContinueStatementNode;

class ExpressionStatementNode;
class FunctionExpressionNode;
class UnaryExpressionNode;
class BinaryExpressionNode;
class AssignmentExpressionNode;
class LogicalExpressionNode;
class ConditionalExpressionNode;
class CallExpressionNode;
class ExpressionSequenceNode;
class NullLiteral;
class StringLiteral;
class NumericLiteral;
class BooleanLiteral;

enum NodeType {
  ProgramType,
  VarDeclarationType,
  VarDeclaratorType,
  StatementType,
  BlockStatementType,
  IdentifierType,
  ExpressionType,
  ArrayExpressionType,
  FunctionType,
  FunctionDeclarationType,
  FunctionBodyType,
  FunctionExpressionType,
  UnaryExpressionType,
  BinaryExpressionType,
  AssignmentExpressionType,
  LogicalExpressionType,
  ConditionalExpressionType,
  CallExpressionType,
  NullLiteralType,
  StringLiteralType,
  NumericLiteralType,
  BooleanLiteralType,
  WhileStatementType,
  IfStatementType,
  BreakStatementType,
  ReturnStatementType,
  ContinueStatementType,
  ExpressionStatementType,
  ExpressionSequenceType

};

class Constants {
 public:
  inline static std::map<NodeType, std::string> nodeName = {{NodeType::ProgramType, "Program"},
                                                            {NodeType::VarDeclarationType, "VarDeclaration"},
                                                            {NodeType::VarDeclaratorType, "VarDeclarator"},
                                                            {NodeType::StatementType, "Statement"},
                                                            {NodeType::BlockStatementType, "BlockStatement"},
                                                            {NodeType::IdentifierType, "Identifier"},
                                                            {NodeType::ExpressionType, "Expression"},
                                                            {NodeType::NullLiteralType, "NullLiteral"},
                                                            {NodeType::StringLiteralType, "StringLiteral"},
                                                            {NodeType::NumericLiteralType, "NumericLiteral"},
                                                            {NodeType::BooleanLiteralType, "BooleanLiteral"},
                                                            {NodeType::FunctionType, "Function"},
                                                            {NodeType::FunctionDeclarationType, "FunctionDeclaration"},
                                                            {NodeType::FunctionBodyType, "FunctionBodyNode"},
                                                            {NodeType::FunctionExpressionType, "FunctionExpression"},
                                                            {NodeType::WhileStatementType, "WhileStatement"},
                                                            {NodeType::IfStatementType, "IfExpression"},
                                                            {NodeType::ReturnStatementType, "ReturnStatement"},
                                                            {NodeType::BreakStatementType, "BreakStatement"},
                                                            {NodeType::ContinueStatementType, "ContinueStatement"},
                                                            {NodeType::ExpressionStatementType, "ExpressionStatement"},
                                                            {NodeType::AssignmentExpressionType,
                                                             "AssignmentExpression"},
                                                            {CallExpressionType, "CallExpression"},
                                                            {ExpressionSequenceType, "ExpressionSequence"}};
};

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
  template <typename T>
  void popTo(std::vector<T*>& nodes, size_t size) {
    nodes.resize(size);
    for (int i = size - 1; i >= 0; --i) {
      popTo(nodes[i]);
    }
  }
};
#endif  // JSINTERP_ASTBASE_H
