//
// Created by quiks on 13.04.2020.
//

#include "AstVisitor.h"
#include <iomanip>
#include "AstNodes.cpp"
typedef Constants C;

template <typename T>
std::vector<AstNode*> convertToBase(std::vector<T*>& vec) {
  std::vector<AstNode*> res;
  if (vec.empty()) {
    return res;
  }
  if (dynamic_cast<AstNode*>(vec[0]) == nullptr) {
    return res;
  }
  for (auto i : vec) {
    res.emplace_back(i);
  }
  return res;
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
  visitNewNode("params", convertToBase(node->params));
  visitNewNode("body", {node->body});
}
void AstVisitor::visit(FunctionBodyNode* node) {
  for (auto i : node->statementNodes) {
    visitNewNode(i);
  }
}
void AstVisitor::visit(CallExpressionNode* node) {
  visitNewNode("callee", {node->callee});
  visitNewNode("args", convertToBase(node->args));
}
void AstVisitor::visit(ExpressionStatementNode* node) {
  visitNewNode(node->expression);
}
void AstVisitor::visit(WhileStatementNode* node) {
  visitNewNode("condition", {node->cond});
  visitNewNode("body", {node->body});
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
  printArgs({{"operator", C::opName[node->anOperator]}});
  visitNewNode("right", {node->right});
}

void AstVisitor::visit(IfStatementNode* node) {
  visitNewNode("condition", {node->cond});
  visitNewNode("consequence", {node->cons});
  visitNewNode("alternative", {node->alter});
}
void AstVisitor::visit(AssignmentExpressionNode* node) {
  visitNewNode("left", {node->left});
  printArgs({{"operator", C::assignName[node->operation]}});
  visitNewNode("right", {node->right});
}
void AstVisitor::visit(UnaryExpressionNode* node) {
  printArgs({{"operator", C::opName[node->anOperator]}});
  visitNewNode(node->arg);
}
void AstVisitor::visit(MemberExpressionNode* node) {
  visitNewNode("object", {node->obj});
  visitNewNode("property", {node->property});
}
void AstVisitor::visit(PropertyExpressionNode* node) {
  visitNewNode("key", {node->key});
  visitNewNode("value", {node->val});
}
void AstVisitor::visit(ArrayExpressionNode* node) {
  visitNewNode("elements", convertToBase(node->elements));
}
void AstVisitor::visit(EmptyExpressionNode* node) {
}

void AstVisitor::visit(ObjectExpressionNode* node) {
  visitNewNode("props", convertToBase(node->props));
}

void AstVisitor::visitNewNode(AstNode* node) {
  if (node == nullptr) {
    return;
  }
  printNodeName(node->type);
  printPosition(node->position);
  node->accept(this);
  lastOffset_ -= step;
  --tabCount_;
}

void AstVisitor::visitNewNode(const std::string& fieldName, const std::vector<AstNode*>& nodes) {
  printLine();
  astTextTree_ << fieldName << ": " << std::endl;
  lastOffset_ += step;
  ++tabCount_;
  for (auto i : nodes) {
    if (i == nullptr) {
      continue;
    }

    printNodeName(i->type);
    if (i->type == NodeType::Undefined) {
      lastOffset_ -= step;
      --tabCount_;
      continue;
    }
    printPosition(i->position);
    i->accept(this);
    lastOffset_ -= step;
    --tabCount_;
  }
  --tabCount_;
}

std::string AstVisitor::getTextTree() {
  return astTextTree_.str();
}

void AstVisitor::printNodeName(NodeType type) {
  printLine(1);
  lastOffset_ += step;
  ++tabCount_;
  astTextTree_ << "+ " << C::nodeName[type] << std::endl;
}

void AstVisitor::printLine(int flag) {
  if (tabCount_ == 0) {
    return;
  }
  for (auto i = 0; i < tabCount_ - 1; ++i) {
    astTextTree_ << std::setfill(' ') << std::setw(step) << "|";
  }
  if (flag) {
    astTextTree_ << std::setfill(' ') << std::setw(step - 1) << "";
  } else {
    astTextTree_ << std::setfill(' ') << std::setw(step) << "|";
  }
}

void AstVisitor::printArgs(const std::vector<std::pair<std::string, std::string>>& args) {
  for (const auto& arg : args) {
    printLine(0);
    astTextTree_ << arg.first << ": " << arg.second << std::endl;
  }
}

void AstVisitor::printPosition(Position position) {
  printLine(0);
  astTextTree_ << "pos: [" << position.line << ":" << position.column << "]" << std::endl;
}
void AstVisitor::visit(UndefinedNode* node) {
}
