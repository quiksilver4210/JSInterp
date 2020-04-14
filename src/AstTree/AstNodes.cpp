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
};

class ProgramNode : public AstNode {
 public:
  std::vector<StatementNode*> statementNodes;
  ProgramNode() {
    type = ProgramType;
  }
};
class StatementNode : public AstNode {};

class BlockStatementNode : public StatementNode {
 public:
  std::vector<StatementNode*> statementNodes;
  BlockStatementNode() {
    type = BlockStatementType;
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
};
class VarDeclaratorNode : public AstNode {
 public:
  VarDeclaratorNode() {
    type = VarDeclaratorType;
  }
  IdentifierNode* identifierNode = nullptr;
  ExpressionNode* expressionNode = nullptr;
};

class ArrayExpression : public ExpressionNode {
 public:
  std::vector<ExpressionNode*> elements;
  ArrayExpression() {
    type = ArrayExpressionType;
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
};

class StringLiteral : public ExpressionNode {
 public:
  StringLiteral() {
    type = StringLiteralType;
  }
  std::string value;
};
class NumericLiteral : public ExpressionNode {
 public:
  NumericLiteral() {
    type = NumericLiteralType;
  }
  std::string value;
};
class BooleanLiteral : public ExpressionNode {
 public:
  BooleanLiteral() {
    type = BooleanLiteralType;
  }
  std::string value;
};

#endif  // JSINTERP_ASTNODES_CPP
