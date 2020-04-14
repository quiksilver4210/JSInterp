
#include "JavaScriptBaseParser.h"

// Generated from JavaScriptParser.g4 by ANTLR 4.8

#include "JavaScriptParserBaseVisitor.h"
#define setPos(node) node->setPosition(ctx->start->getStartIndex(), ctx->stop->getStopIndex())

antlrcpp::Any JavaScriptParserBaseVisitor::visitSwitchStatement(JavaScriptParser::SwitchStatementContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitYieldStatement(JavaScriptParser::YieldStatementContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitWithStatement(JavaScriptParser::WithStatementContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitCaseBlock(JavaScriptParser::CaseBlockContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitCaseClauses(JavaScriptParser::CaseClausesContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitCaseClause(JavaScriptParser::CaseClauseContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitDefaultClause(JavaScriptParser::DefaultClauseContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitThrowStatement(JavaScriptParser::ThrowStatementContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitTryStatement(JavaScriptParser::TryStatementContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitCatchProduction(JavaScriptParser::CatchProductionContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFinallyProduction(JavaScriptParser::FinallyProductionContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitDebuggerStatement(JavaScriptParser::DebuggerStatementContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitClassDeclaration(JavaScriptParser::ClassDeclarationContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitClassTail(JavaScriptParser::ClassTailContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitClassElement(JavaScriptParser::ClassElementContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitMethodDefinition(JavaScriptParser::MethodDefinitionContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFormalParameterList(JavaScriptParser::FormalParameterListContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFormalParameterArg(JavaScriptParser::FormalParameterArgContext *ctx) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitLastFormalParameterArg(JavaScriptParser::LastFormalParameterArgContext *ctx) {
  throw std::logic_error("Not realised");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitProgram(JavaScriptParser::ProgramContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto program = new ProgramNode();
  setPos(program);
  for (int i = 0; i < size; ++i) {
    program->statementNodes.emplace_back((VarDeclarationNode *)unprocessed.top());
    unprocessed.pop();
  }
  std::reverse(program->statementNodes.begin(), program->statementNodes.end());
  astTree.emplace_back(program);
  return 1U;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBlock(JavaScriptParser::BlockContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto block = new BlockStatementNode();
  setPos(block);
  for (int i = 0; i < size; ++i) {
    block->statementNodes.emplace_back((VarDeclarationNode *)unprocessed.top());
    unprocessed.pop();
  }
  std::reverse(block->statementNodes.begin(), block->statementNodes.end());
  unprocessed.push(block);
  return 1U;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitVariableDeclarationList(JavaScriptParser::VariableDeclarationListContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto varDeclarationNode = new VarDeclarationNode();
  varDeclarationNode->kind = ctx->start->getText();
  setPos(varDeclarationNode);
  for (int i = 0; i < size; ++i) {
    varDeclarationNode->declarations.emplace_back((VarDeclaratorNode *)unprocessed.top());
    unprocessed.pop();
  }
  std::reverse(varDeclarationNode->declarations.begin(), varDeclarationNode->declarations.end());
  unprocessed.push(varDeclarationNode);
  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitVariableDeclaration(JavaScriptParser::VariableDeclarationContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto declarator = new VarDeclaratorNode();
  setPos(declarator);
  auto id = new IdentifierNode();
  setPos(id);
  id->name = ctx->start->getText();
  declarator->identifierNode = id;
  if (size != 0) {
    declarator->expressionNode = (ExpressionNode *)unprocessed.top();
    unprocessed.pop();
  }
  unprocessed.push(declarator);

  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitLiteralExpression(JavaScriptParser::LiteralExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  if (ctx->literal()->numericLiteral() != nullptr) {
    auto lit = new NumericLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    unprocessed.push(lit);
  }
  if (ctx->literal()->NullLiteral() != nullptr) {
    auto lit = new NullLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    unprocessed.push(lit);
  }
  if (ctx->literal()->StringLiteral() != nullptr) {
    auto lit = new StringLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    unprocessed.push(lit);
  }
  if (ctx->literal()->BooleanLiteral() != nullptr) {
    auto lit = new BooleanLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    unprocessed.push(lit);
  }
  return 1U;
}
