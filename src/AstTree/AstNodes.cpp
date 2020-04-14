//
// Created by quiks on 12.04.2020.
//

#ifndef JSINTERP_ASTNODES_CPP
#define JSINTERP_ASTNODES_CPP
#include "AstNodes.h"
#include <string>
#include <vector>
#include "AstVisitor.h"

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

// class AssignmentExpressionNode : public ExpressionNode {
// public:
//  IdentifierNode* left;
//  ExpressionNode* right;
//};
//

class NullLiteral : public ExpressionNode {
 public:
  NullLiteral() {
    type = NullLiteralType;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit((NullLiteral*)this);
  }
};

class StringLiteral : public ExpressionNode {
 public:
  StringLiteral() {
    type = StringLiteralType;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit((StringLiteral*)this);
  }
};
class NumericLiteral : public ExpressionNode {
 public:
  NumericLiteral() {
    type = NumericLiteralType;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit((NumericLiteral*)this);
  }
};
class BooleanLiteral : public ExpressionNode {
 public:
  BooleanLiteral() {
    type = BooleanLiteralType;
  }
  std::string value;
  void accept(AstVisitor* visitor) override {
    return visitor->visit((BooleanLiteral*)this);
  }
};
class FunctionNode : public AstNode {
 public:
  IdentifierNode* id;
  std::vector<IdentifierNode*> params;
  FunctionBodyNode* body;
  FunctionNode() {
    type = NodeType::FunctionType;
  }
};
class FunctionBody : public BlockStatementNode {
 public:
  FunctionBody() {
    type = FunctionBodyType;
  }
};

#endif  // JSINTERP_ASTNODES_CPP
