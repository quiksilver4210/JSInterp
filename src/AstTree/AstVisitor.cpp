//
// Created by quiks on 13.04.2020.
//

#include "AstVisitor.h"
#include <iomanip>
#include "Utils.cpp"
std::string AstVisitor::getTextTree() {
  return tree.str();
}

void AstVisitor::printNodeName(NodeType type) {
  printLine();
  lastOffset += 4;
  offset.emplace_back(lastOffset);
  tree << "+ " << nodeName[type] << std::endl;
}

void AstVisitor::printLine() {
  for (auto i : offset) {
    tree << std::setfill(' ') << std::setw(4) << "|";
  }
}

void AstVisitor::printArgs(const std::vector<std::pair<std::string, std::string>>& args) {
  for (const auto& arg : args) {
    printLine();
    tree << arg.first << " : " << arg.second << std::endl;
  }
}

void AstVisitor::visitNewNode(AstNode* node) {
  if (node == nullptr) {
    return;
  }
  printNodeName(node->type);

  switch (node->type) {
    case ProgramType:
      visit((ProgramNode*)node);
      break;
    case VarDeclarationType:
      visit((VarDeclarationNode*)node);
      break;
    case VarDeclaratorType:
      visit((VarDeclaratorNode*)node);
      break;
    case IdentifierType:
      visit((IdentifierNode*)node);
      break;
    case StatementType:
      break;
    case BlockStatementType:
      visit((BlockStatementNode*)node);
      break;
    case ExpressionType:
      break;
    case ArrayExpressionType:
      break;
    case FunctionExpressionType:
      break;
    case UnaryExpressionType:
      break;
    case UpdateExpressionType:
      break;
    case BinaryExpressionType:
      break;
    case AssignmentExpressionType:
      break;
    case LogicalExpressionType:
      break;
    case ConditionalExpressionType:
      break;
    case CallExpressionType:
      break;
    case NullLiteralType:
      visit((NullLiteral*)node);
      break;
    case StringLiteralType:
      visit((StringLiteral*)node);
      break;
    case NumericLiteralType:
      visit((NumericLiteral*)node);
      break;
    case BooleanLiteralType:
      visit((BooleanLiteral*)node);
      break;
  }
  lastOffset -= 4;
  offset.pop_back();
}

void AstVisitor::visit(ProgramNode* node) {
  for (auto i : node->statementNodes) {
    visitNewNode(i);
  }
}

void AstVisitor::visit(VarDeclaratorNode* node) {
  visitNewNode(node->identifierNode);
  visitNewNode(node->expressionNode);
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
