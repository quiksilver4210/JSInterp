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
    type = IdentifierType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit((IdentifierNode*)this);
  }
};

class ProgramNode : public AstNode {
 public:
  std::vector<StatementNode*> statementNodes;
  ProgramNode() {
    type = ProgramType;
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
    type = BlockStatementType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit((BlockStatementNode*)this);
  }
};

class ExpressionNode : public StatementNode {
 public:
  ExpressionNode() {
    type = ExpressionType;
  }
};

class VarDeclarationNode : public StatementNode {
 public:
  std::string kind;
  std::vector<VarDeclaratorNode*> declarations;
  VarDeclarationNode() {
    type = VarDeclarationType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit((VarDeclarationNode*)this);
  }
};
class VarDeclaratorNode : public AstNode {
 public:
  VarDeclaratorNode() {
    type = VarDeclaratorType;
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
    type = ArrayExpressionType;
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
    type = AssignmentExpressionType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class NullLiteral : public ExpressionNode {
 public:
  NullLiteral() {
    type = NullLiteralType;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class StringLiteral : public ExpressionNode {
 public:
  StringLiteral() {
    type = StringLiteralType;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class NumericLiteral : public ExpressionNode {
 public:
  NumericLiteral() {
    type = NumericLiteralType;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class BooleanLiteral : public ExpressionNode {
 public:
  BooleanLiteral() {
    type = BooleanLiteralType;
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
    type = NodeType::FunctionDeclarationType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class FunctionBodyNode : public BlockStatementNode {
 public:
  FunctionBodyNode() {
    type = FunctionBodyType;
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
    type = WhileStatementType;
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
    type = IfStatementType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class BreakStatementNode : public StatementNode {
 public:
  BreakStatementNode() {
    type = BreakStatementType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class ContinueStatementNode : public StatementNode {
 public:
  ContinueStatementNode() {
    type = ContinueStatementType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class ReturnStatementNode : public StatementNode {
 public:
  ExpressionNode* arg = nullptr;
  ReturnStatementNode() {
    type = ReturnStatementType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};

class ExpressionStatementNode : public StatementNode {
 public:
  ExpressionStatementNode() {
    type = ExpressionStatementType;
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
    type = CallExpressionType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class ExpressionSequenceNode : public ExpressionNode {
 public:
  std::vector<ExpressionNode*> expressions;
  ExpressionSequenceNode() {
    type = ExpressionSequenceType;
  }
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
class BinaryExpressionNode : public ExpressionNode {
 public:
  BinaryExpressionNode() {
    type = BinaryExpressionType;
  }
  ExpressionNode* left;
  ExpressionNode* right;
  std::string anOperator;
  void accept(AstVisitor* visitor) override {
    return visitor->visit(this);
  }
};
#endif  // JSINTERP_ASTNODES_CPP
