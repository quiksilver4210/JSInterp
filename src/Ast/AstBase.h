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

enum class NodeType {
  Program,
  VarDeclaration,
  VarDeclarator,
  Statement,
  BlockStatement,
  Identifier,
  Expression,
  ArrayExpression,
  Function,
  FunctionDeclaration,
  FunctionBody,
  FunctionExpression,
  UnaryExpression,
  BinaryExpression,
  AssignmentExpression,
  CallExpression,
  NullLiteral,
  StringLiteral,
  NumericLiteral,
  BooleanLiteral,
  WhileStatement,
  IfStatement,
  BreakStatement,
  ReturnStatement,
  ContinueStatement,
  ExpressionStatement,
  ExpressionSequence
};
enum class BinaryOperator {
  Plus,
  Minus,
  BitNot,
  Not,
  Multiply,
  Divide,
  Modulus,
  Power,
  NullCoalesce,
  RightShiftArithmetic,
  LeftShiftArithmetic,
  RightShiftLogical,
  LessThan,
  MoreThan,
  LessThanEquals,
  GreaterThanEquals,
  Equals,
  NotEquals,
  IdentityEquals,
  IdentityNotEquals,
  BitAnd,
  BitXOr,
  BitOr,
  And,
  Or
};

class Constants {
 public:
  inline static std::map<NodeType, std::string> nodeName = {{NodeType::Program, "Program"},
                                                            {NodeType::VarDeclaration, "VarDeclaration"},
                                                            {NodeType::VarDeclarator, "VarDeclarator"},
                                                            {NodeType::Statement, "Statement"},
                                                            {NodeType::BlockStatement, "BlockStatement"},
                                                            {NodeType::Identifier, "Identifier"},
                                                            {NodeType::Expression, "Expression"},
                                                            {NodeType::NullLiteral, "NullLiteral"},
                                                            {NodeType::StringLiteral, "StringLiteral"},
                                                            {NodeType::NumericLiteral, "NumericLiteral"},
                                                            {NodeType::BooleanLiteral, "BooleanLiteral"},
                                                            {NodeType::Function, "Function"},
                                                            {NodeType::FunctionDeclaration, "FunctionDeclaration"},
                                                            {NodeType::FunctionBody, "FunctionBodyNode"},
                                                            {NodeType::FunctionExpression, "FunctionExpression"},
                                                            {NodeType::WhileStatement, "WhileStatement"},
                                                            {NodeType::IfStatement, "IfExpression"},
                                                            {NodeType::ReturnStatement, "ReturnStatement"},
                                                            {NodeType::BreakStatement, "BreakStatement"},
                                                            {NodeType::ContinueStatement, "ContinueStatement"},
                                                            {NodeType::ExpressionStatement, "ExpressionStatement"},
                                                            {NodeType::AssignmentExpression, "AssignmentExpression"},
                                                            {NodeType::CallExpression, "CallExpression"},
                                                            {NodeType::ExpressionSequence, "ExpressionSequence"},
                                                            {NodeType::BinaryExpression, "BinaryExpression"},
                                                            {NodeType::UnaryExpression, "UnaryExpression"}};

  inline static std::map<std::string, BinaryOperator> opType = {{"+", BinaryOperator::Plus},
                                                                {"-", BinaryOperator::Minus},
                                                                {"~", BinaryOperator::BitNot},
                                                                {"!", BinaryOperator::Not},
                                                                {"*", BinaryOperator::Multiply},
                                                                {"/", BinaryOperator::Divide},
                                                                {"%", BinaryOperator::Modulus},
                                                                {"**", BinaryOperator::Power},
                                                                {">>", BinaryOperator::RightShiftArithmetic},
                                                                {"<<", BinaryOperator::LeftShiftArithmetic},
                                                                {">>>", BinaryOperator::RightShiftLogical},
                                                                {"<", BinaryOperator::LessThan},
                                                                {">", BinaryOperator::MoreThan},
                                                                {"<=", BinaryOperator::LessThanEquals},
                                                                {"=>", BinaryOperator::GreaterThanEquals},
                                                                {"==", BinaryOperator::Equals},
                                                                {"!=", BinaryOperator::NotEquals},
                                                                {"===", BinaryOperator::IdentityEquals},
                                                                {"!==", BinaryOperator::IdentityNotEquals},
                                                                {"&", BinaryOperator::BitAnd},
                                                                {"^", BinaryOperator::BitXOr},
                                                                {"|", BinaryOperator::BitOr},
                                                                {"&&", BinaryOperator::And},
                                                                {"||", BinaryOperator::Or}};

  inline static std::map<BinaryOperator, std::string> opName = {{BinaryOperator::Plus, "Plus"},
                                                                {BinaryOperator::Minus, "Minus"},
                                                                {BinaryOperator::BitNot, "BitNot"},
                                                                {BinaryOperator::Not, "Not"},
                                                                {BinaryOperator::Multiply, "Multiply"},
                                                                {BinaryOperator::Divide, "Divide"},
                                                                {BinaryOperator::Modulus, "Modulus"},
                                                                {BinaryOperator::Power, "Power"},
                                                                {BinaryOperator::RightShiftArithmetic,
                                                                 "RightShiftArithmetic"},
                                                                {BinaryOperator::LeftShiftArithmetic,
                                                                 "LeftShiftArithmetic"},
                                                                {BinaryOperator::RightShiftLogical,
                                                                 "RightShiftLogical"},
                                                                {BinaryOperator::LessThan, "LessThan"},
                                                                {BinaryOperator::MoreThan, "MoreThan"},
                                                                {BinaryOperator::LessThanEquals, "LessThanEquals"},
                                                                {BinaryOperator::GreaterThanEquals,
                                                                 "GreaterThanEquals"},
                                                                {BinaryOperator::Equals, "Equals"},
                                                                {BinaryOperator::NotEquals, "NotEquals"},
                                                                {BinaryOperator::IdentityEquals, "IdentityEquals"},
                                                                {BinaryOperator::IdentityNotEquals,
                                                                 "IdentityNotEquals"},
                                                                {BinaryOperator::BitAnd, "BitAnd"},
                                                                {BinaryOperator::BitXOr, "BitXOr"},
                                                                {BinaryOperator::BitOr, "BitOr"},
                                                                {BinaryOperator::And, "And"},
                                                                {BinaryOperator::Or, "Or"}};
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
};
#endif  // JSINTERP_ASTBASE_H
