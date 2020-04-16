//
// Created by quiks on 12.04.2020.
//

#ifndef JSINTERP_ASTNODES_CPP
#define JSINTERP_ASTNODES_CPP

#include <string>
#include <vector>
#include "AstBase.h"
#include "AstVisitor.h"

class AstNode {
 public:
  NodeType type;
  int start;
  int stop;
  void setPosition(int st, int sp) {
    start = st;
    stop = sp;
  }
  virtual void accept(AstVisitor* visitor){};
};

class IdentifierNode : public AstNode {
 public:
  std::string name;
  IdentifierNode() {
    type = NodeType::Identifier;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit((IdentifierNode*)this);
  }
};

class ProgramNode : public AstNode {
 public:
  std::vector<StatementNode*> statementNodes;
  ProgramNode() {
    type = NodeType::Program;
  }
  void accept(AstVisitor* visitor) override {
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
  void accept(AstVisitor* visitor) override {
    return visitor->visit((BlockStatementNode*)this);
  }
};

class ExpressionNode : public StatementNode {
 public:
  ExpressionNode() {
    type = NodeType::Expression;
  }
};

class VarDeclarationNode : public StatementNode {
 public:
  std::string kind;
  std::vector<VarDeclaratorNode*> declarations;
  VarDeclarationNode() {
    type = NodeType::VarDeclaration;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit((VarDeclarationNode*)this);
  }
};
class VarDeclaratorNode : public AstNode {
 public:
  VarDeclaratorNode() {
    type = NodeType::VarDeclarator;
  }
  IdentifierNode* identifierNode = nullptr;
  ExpressionNode* expressionNode = nullptr;
  void accept(AstVisitor* visitor) override {
    return visitor->visit((VarDeclaratorNode*)this);
  }
};

class ArrayExpression : public ExpressionNode {
 public:
  std::vector<ExpressionNode*> elements;
  ArrayExpression() {
    type = NodeType::ArrayExpression;
  }
  void accept(AstVisitor* visitor) override {
    //    return visitor->visit((ArrayExpression*)this);
  }
};

class AssignmentExpressionNode : public ExpressionNode {
 public:
  ExpressionNode* left;
  ExpressionNode* right;
  std::string operation;
  AssignmentExpressionNode() {
    type = NodeType::AssignmentExpression;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class NullLiteral : public ExpressionNode {
 public:
  NullLiteral() {
    type = NodeType::NullLiteral;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class StringLiteral : public ExpressionNode {
 public:
  StringLiteral() {
    type = NodeType::StringLiteral;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class NumericLiteral : public ExpressionNode {
 public:
  NumericLiteral() {
    type = NodeType::NumericLiteral;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class BooleanLiteral : public ExpressionNode {
 public:
  BooleanLiteral() {
    type = NodeType::BooleanLiteral;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class FunctionDeclarationNode : public AstNode {
 public:
  IdentifierNode* id;
  std::vector<IdentifierNode*> params;
  FunctionBodyNode* body;
  FunctionDeclarationNode() {
    type = NodeType::FunctionDeclaration;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class FunctionBodyNode : public BlockStatementNode {
 public:
  FunctionBodyNode() {
    type = NodeType::FunctionBody;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class WhileStatementNode : public StatementNode {
 public:
  ExpressionNode* cond;
  StatementNode* body;
  WhileStatementNode() {
    type = NodeType::WhileStatement;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class IfStatementNode : public StatementNode {
 public:
  ExpressionNode* cond = nullptr;
  StatementNode* cons = nullptr;
  StatementNode* alter = nullptr;
  IfStatementNode() {
    type = NodeType::IfStatement;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class BreakStatementNode : public StatementNode {
 public:
  BreakStatementNode() {
    type = NodeType::BreakStatement;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class ContinueStatementNode : public StatementNode {
 public:
  ContinueStatementNode() {
    type = NodeType::ContinueStatement;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class ReturnStatementNode : public StatementNode {
 public:
  ExpressionNode* arg = nullptr;
  ReturnStatementNode() {
    type = NodeType::ReturnStatement;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class ExpressionStatementNode : public StatementNode {
 public:
  ExpressionStatementNode() {
    type = NodeType::ExpressionStatement;
  }
  ExpressionNode* expression;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class CallExpressionNode : public ExpressionNode {
 public:
  ExpressionNode* callee;
  std::vector<ExpressionNode*> args;
  CallExpressionNode() {
    type = NodeType::CallExpression;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class ExpressionSequenceNode : public ExpressionNode {
 public:
  std::vector<ExpressionNode*> expressions;
  ExpressionSequenceNode() {
    type = NodeType::ExpressionSequence;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class BinaryExpressionNode : public ExpressionNode {
 public:
  BinaryExpressionNode() {
    type = NodeType::BinaryExpression;
  }
  ExpressionNode* left;
  ExpressionNode* right;
  std::string anOperator;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class UnaryExpressionNode : public ExpressionNode {
 public:
  UnaryExpressionNode() {
    type = NodeType::UnaryExpression;
  }
  ExpressionNode* arg;
  std::string anOperator;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
#endif  // JSINTERP_ASTNODES_CPP
