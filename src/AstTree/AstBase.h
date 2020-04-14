//
// Created by quiks on 14.04.2020.
//

#ifndef JSINTERP_ASTBASE_H
#define JSINTERP_ASTBASE_H

#include <map>
class AstNode;
class ProgramNode;
class BlockStatementNode;
class StatementNode;

class IdentifierNode;
class VarDeclarationNode;
class VarDeclaratorNode;
class StatementNode;

class ExpressionNode;
class ArrayExpressionNode;
class FunctionNode;
class FunctionBodyNode;
class FunctionExpressionNode;
class UnaryExpressionNode;
class UpdateExpressionNode;
class BinaryExpressionNode;
class AssignmentExpressionNode;
class LogicalExpressionNode;
class ConditionalExpressionNode;
class CallExpressionNode;
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
  FunctionBodyType,
  FunctionExpressionType,
  UnaryExpressionType,
  UpdateExpressionType,
  BinaryExpressionType,
  AssignmentExpressionType,
  LogicalExpressionType,
  ConditionalExpressionType,
  CallExpressionType,
  NullLiteralType,
  StringLiteralType,
  NumericLiteralType,
  BooleanLiteralType
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
                                                            {NodeType::FunctionBodyType, "FunctionBody"},
                                                            {NodeType::FunctionExpressionType, "FunctionExpression"}};
};
#endif  // JSINTERP_ASTBASE_H
