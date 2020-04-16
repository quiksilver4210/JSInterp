//
// Created by quiks on 13.04.2020.
//

#include "AstVisitor.h"
#include <iomanip>
#include "AstNodes.cpp"
typedef Constants C;

std::string AstVisitor::getTextTree() {
  return tree.str();
}

void AstVisitor::printNodeName(NodeType type) {
  printLine(1);
  lastOffset += 4;
  ++tabCount;
  tree << "+ " << C::nodeName[type] << std::endl;
}

void AstVisitor::printLine(int flag = 0) {
  if (tabCount == 0) {
    return;
  }
  for (auto i = 0; i < tabCount - 1; ++i) {
    tree << std::setfill(' ') << std::setw(4) << "|";
  }
  if (flag) {
    tree << std::setfill(' ') << std::setw(3) << "";
  } else {
    tree << std::setfill(' ') << std::setw(4) << "|";
  }
}

void AstVisitor::printArgs(const std::vector<std::pair<std::string, std::string>>& args) {
  for (const auto& arg : args) {
    printLine(0);
    tree << arg.first << ": " << arg.second << std::endl;
  }
}

void AstVisitor::visitNewNode(AstNode* node) {
  if (node == nullptr) {
    return;
  }
  printNodeName(node->type);
  node->accept(this);
  lastOffset -= 4;
  --tabCount;
}

void AstVisitor::visit(ProgramNode* node) {
  for (auto i : node->statementNodes) {
    visitNewNode(i);
  }
}

void AstVisitor::visit(VarDeclaratorNode* node) {
  visitNewNode("id", {node->identifierNode});
  visitNewNode("expression", {node->expressionNode});
}
void AstVisitor::visit(IdentifierNode* node) {
  printArgs({{"name", node->name}});
}

void AstVisitor::visit(VarDeclarationNode* node) {
  printArgs({{"kind", node->kind}});
  for (auto i : node->declarations) {
    visitNewNode(i);
  }
}

void AstVisitor::visit(NullLiteral* node) {
  printArgs({{"value", node->value}});
}

void AstVisitor::visit(NumericLiteral* node) {
  printArgs({{"value", node->value}});
}

void AstVisitor::visit(BooleanLiteral* node) {
  printArgs({{"value", node->value}});
}

void AstVisitor::visit(StringLiteral* node) {
  printArgs({{"value", node->value}});
}

void AstVisitor::visit(BlockStatementNode* node) {
  for (auto i : node->statementNodes) {
    visitNewNode(i);
  }
}
void AstVisitor::visit(FunctionDeclarationNode* node) {
  visitNewNode("id", {node->id});
  std::vector<AstNode*> nodes;
  for (auto i : node->params) {
    nodes.emplace_back(i);
  }
  visitNewNode("params", nodes);
  visitNewNode("body", {node->body});
}
void AstVisitor::visit(FunctionBodyNode* node) {
  for (auto i : node->statementNodes) {
    visitNewNode(i);
  }
}
void AstVisitor::visit(CallExpressionNode* node) {
  visitNewNode("callee", {node->callee});
  std::vector<AstNode*> nodes;
  for (auto i : node->args) {
    nodes.emplace_back(i);
  }
  visitNewNode("args", nodes);
}
void AstVisitor::visit(ExpressionStatementNode* node) {
  visitNewNode(node->expression);
}
void AstVisitor::visit(WhileStatementNode* node) {
  visitNewNode(node->cond);
  visitNewNode(node->body);
}
void AstVisitor::visit(BreakStatementNode* node) {
}
void AstVisitor::visit(ContinueStatementNode* node) {
}
void AstVisitor::visit(ReturnStatementNode* node) {
  visitNewNode("arg", {node->arg});
}
void AstVisitor::visit(ExpressionSequenceNode* node) {
  for (auto i : node->expressions) {
    visitNewNode(i);
  }
}
void AstVisitor::visit(BinaryExpressionNode* node) {
  visitNewNode("left", {node->left});
  printArgs({{"operator", node->anOperator}});
  visitNewNode("right", {node->right});
}
void AstVisitor::visitNewNode(const std::string& fieldName, const std::vector<AstNode*>& nodes) {
  printLine();
  tree << fieldName << ": " << std::endl;
  lastOffset += 4;
  ++tabCount;
  for (auto i : nodes) {
    if (i == nullptr) {
      continue;
    }
    printNodeName(i->type);
    i->accept(this);
    lastOffset -= 4;
    --tabCount;
  }
  --tabCount;
}
void AstVisitor::visit(IfStatementNode* node) {
  visitNewNode("condition", {node->cond});
  visitNewNode("consequence", {node->cons});
  visitNewNode("alternative", {node->alter});
}
void AstVisitor::visit(AssignmentExpressionNode* node) {
  visitNewNode("left", {node->left});
  printArgs({{"operator", node->operation}});
  visitNewNode("right", {node->right});
}
void AstVisitor::visit(UnaryExpressionNode* node) {
  printArgs({{"operator", node->anOperator}});
  visitNewNode(node->arg);
}
