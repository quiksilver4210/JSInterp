//
// Created by quiks on 14.04.2020.
//

#ifndef JSINTERP_BASEAST_H
#define JSINTERP_BASEAST_H

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

#endif  // JSINTERP_BASEAST_H
