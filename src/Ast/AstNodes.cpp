//
// Created by quiks on 12.04.2020.
//

#ifndef JSINTERP_ASTNODES_CPP
#define JSINTERP_ASTNODES_CPP

#include <string>
#include <vector>
#include "AstBase.h"
#include "AstVisitor.h"

class IdentifierNode : public AstNode {
 public:
  std::string name;
  IdentifierNode() {
    type = NodeType::Identifier;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit((IdentifierNode*)this);
  }
};

class ProgramNode : public AstNode {
 public:
  std::vector<StatementNode*> statementNodes;
  ProgramNode() {
    type = NodeType::Program;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit((ProgramNode*)this);
  }
};

class StatementNode : public AstNode {};

class BlockStatementNode : public StatementNode {
 public:
  std::vector<StatementNode*> statementNodes;
  BlockStatementNode() {
    type = NodeType::BlockStatement;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit((BlockStatementNode*)this);
  }
};

class ExpressionNode : public StatementNode {
 public:
  ExpressionNode() {
    type = NodeType::Expression;
  }
};

class EmptyExpressionNode : public ExpressionNode {
 public:
  EmptyExpressionNode() {
    type = NodeType::EmptyExpression;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class VarDeclarationNode : public StatementNode {
 public:
  std::string kind;
  std::vector<VarDeclaratorNode*> declarations;
  VarDeclarationNode() {
    type = NodeType::VarDeclaration;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit((VarDeclarationNode*)this);
  }
};

class VarDeclaratorNode : public AstNode {
 public:
  IdentifierNode* identifierNode{};
  ExpressionNode* expressionNode{};
  VarDeclaratorNode() {
    type = NodeType::VarDeclarator;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit((VarDeclaratorNode*)this);
  }
};

class ArrayExpressionNode : public ExpressionNode {
 public:
  std::vector<ExpressionNode*> elements;
  ArrayExpressionNode() {
    type = NodeType::ArrayExpression;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class AssignmentExpressionNode : public ExpressionNode {
 public:
  ExpressionNode* left{};
  ExpressionNode* right{};
  AssignmentOperator operation;
  AssignmentExpressionNode() {
    type = NodeType::AssignmentExpression;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class NullLiteral : public ExpressionNode {
 public:
  std::string value;
  NullLiteral() {
    type = NodeType::NullLiteral;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class StringLiteral : public ExpressionNode {
 public:
  std::string value;
  StringLiteral() {
    type = NodeType::StringLiteral;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class NumericLiteral : public ExpressionNode {
 public:
  std::string value;
  NumericLiteral() {
    type = NodeType::NumericLiteral;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class BooleanLiteral : public ExpressionNode {
 public:
  std::string value;
  BooleanLiteral() {
    type = NodeType::BooleanLiteral;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class FunctionDeclarationNode : public AstNode {
 public:
  IdentifierNode* id{};
  std::vector<IdentifierNode*> params;
  FunctionBodyNode* body{};
  FunctionDeclarationNode() {
    type = NodeType::FunctionDeclaration;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class FunctionBodyNode : public BlockStatementNode {
 public:
  FunctionBodyNode() {
    type = NodeType::FunctionBody;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class WhileStatementNode : public StatementNode {
 public:
  ExpressionNode* cond{};
  StatementNode* body{};
  WhileStatementNode() {
    type = NodeType::WhileStatement;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class IfStatementNode : public StatementNode {
 public:
  ExpressionNode* cond{};
  StatementNode* cons{};
  StatementNode* alter{};
  IfStatementNode() {
    type = NodeType::IfStatement;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class BreakStatementNode : public StatementNode {
 public:
  BreakStatementNode() {
    type = NodeType::BreakStatement;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class ContinueStatementNode : public StatementNode {
 public:
  ContinueStatementNode() {
    type = NodeType::ContinueStatement;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class ReturnStatementNode : public StatementNode {
 public:
  ExpressionNode* arg{};
  ReturnStatementNode() {
    type = NodeType::ReturnStatement;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class ExpressionStatementNode : public StatementNode {
 public:
  ExpressionNode* expression{};
  ExpressionStatementNode() {
    type = NodeType::ExpressionStatement;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class CallExpressionNode : public ExpressionNode {
 public:
  ExpressionNode* callee{};
  std::vector<ExpressionNode*> args;
  CallExpressionNode() {
    type = NodeType::CallExpression;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class ExpressionSequenceNode : public ExpressionNode {
 public:
  std::vector<ExpressionNode*> expressions;
  ExpressionSequenceNode() {
    type = NodeType::ExpressionSequence;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class BinaryExpressionNode : public ExpressionNode {
 public:
  ExpressionNode* left{};
  ExpressionNode* right{};
  BinaryOperator anOperator;
  BinaryExpressionNode() {
    type = NodeType::BinaryExpression;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class UnaryExpressionNode : public ExpressionNode {
 public:
  ExpressionNode* arg{};
  BinaryOperator anOperator;
  UnaryExpressionNode() {
    type = NodeType::UnaryExpression;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class MemberExpressionNode : public ExpressionNode {
 public:
  ExpressionNode* obj{};
  ExpressionNode* property{};
  std::string kind;
  MemberExpressionNode() {
    type = NodeType::MemberExpression;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class PropertyExpressionNode : public AstNode {
 public:
  ExpressionNode* key{};
  ExpressionNode* val{};
  PropertyExpressionNode() {
    type = NodeType::PropertyExpression;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class ObjectExpressionNode : public ExpressionNode {
 public:
  std::vector<PropertyExpressionNode*> props;
  ObjectExpressionNode() {
    type = NodeType::ObjectExpresion;
  }
  void accept(AstBaseVisitor* visitor) override {
    return visitor->visit(this);
  }
};
#endif  // JSINTERP_ASTNODES_CPP
