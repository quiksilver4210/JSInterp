
#include "JavaScriptParserBaseVisitor.h"
#include "JavaScriptBaseParser.h"

#define setPos(node) node->setPosition(ctx->start->getStartIndex(), ctx->stop->getStopIndex())

antlrcpp::Any JavaScriptParserBaseVisitor::visitSwitchStatement(JavaScriptParser::SwitchStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitYieldStatement(JavaScriptParser::YieldStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitWithStatement(JavaScriptParser::WithStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitCaseBlock(JavaScriptParser::CaseBlockContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitCaseClauses(JavaScriptParser::CaseClausesContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitCaseClause(JavaScriptParser::CaseClauseContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitDefaultClause(JavaScriptParser::DefaultClauseContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitThrowStatement(JavaScriptParser::ThrowStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitTryStatement(JavaScriptParser::TryStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitCatchProduction(JavaScriptParser::CatchProductionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFinallyProduction(JavaScriptParser::FinallyProductionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitDebuggerStatement(JavaScriptParser::DebuggerStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitClassDeclaration(JavaScriptParser::ClassDeclarationContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitClassTail(JavaScriptParser::ClassTailContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitClassElement(JavaScriptParser::ClassElementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitMethodDefinition(JavaScriptParser::MethodDefinitionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFormalParameterList(JavaScriptParser::FormalParameterListContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();

  std::cerr << ctx->start->getText() << std::endl;
  return size;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitLastFormalParameterArg(JavaScriptParser::LastFormalParameterArgContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitForStatement(JavaScriptParser::ForStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitForInStatement(JavaScriptParser::ForInStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitForOfStatement(JavaScriptParser::ForOfStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitDoStatement(JavaScriptParser::DoStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitTernaryExpression(JavaScriptParser::TernaryExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitPreIncrementExpression(JavaScriptParser::PreIncrementExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitPreDecreaseExpression(JavaScriptParser::PreDecreaseExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitPostDecreaseExpression(JavaScriptParser::PostDecreaseExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitPostIncrementExpression(JavaScriptParser::PostIncrementExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitYieldExpression(JavaScriptParser::YieldExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitImportStatement(JavaScriptParser::ImportStatementContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitImportFromBlock(JavaScriptParser::ImportFromBlockContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitModuleItems(JavaScriptParser::ModuleItemsContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitImportDefault(JavaScriptParser::ImportDefaultContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitImportNamespace(JavaScriptParser::ImportNamespaceContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitImportFrom(JavaScriptParser::ImportFromContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitAliasName(JavaScriptParser::AliasNameContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitExportDeclaration(JavaScriptParser::ExportDeclarationContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitExportDefaultDeclaration(JavaScriptParser::ExportDefaultDeclarationContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitExportFromBlock(JavaScriptParser::ExportFromBlockContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitAnoymousFunctionDecl(JavaScriptParser::AnoymousFunctionDeclContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitArrowFunction(JavaScriptParser::ArrowFunctionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitArrowFunctionParameters(JavaScriptParser::ArrowFunctionParametersContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitArrowFunctionBody(JavaScriptParser::ArrowFunctionBodyContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitCoalesceExpression(JavaScriptParser::CoalesceExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitAwaitExpression(JavaScriptParser::AwaitExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitVoidExpression(JavaScriptParser::VoidExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitPropertyGetter(JavaScriptParser::PropertyGetterContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitPropertySetter(JavaScriptParser::PropertySetterContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitLabelledStatement(JavaScriptParser::LabelledStatementContext *) {
  throw std::logic_error("Not realised");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitProgram(JavaScriptParser::ProgramContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto program = new ProgramNode();
  setPos(program);
  s.popTo(program->statementNodes, size);
  s.push(program);
  return 1U;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBlock(JavaScriptParser::BlockContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto block = new BlockStatementNode();
  setPos(block);
  s.popTo(block->statementNodes, size);
  s.push(block);
  return 1U;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitVariableDeclarationList(JavaScriptParser::VariableDeclarationListContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto node = new VarDeclarationNode();
  node->kind = ctx->start->getText();
  setPos(node);
  s.popTo(node->declarations, size);
  s.push(node);
  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitVariableDeclaration(JavaScriptParser::VariableDeclarationContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto declarator = new VarDeclaratorNode();
  setPos(declarator);
  if (size == 2) {
    s.popTo(declarator->expressionNode);
  }
  s.popTo(declarator->identifierNode);

  s.push(declarator);

  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitLiteralExpression(JavaScriptParser::LiteralExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  if (ctx->literal()->numericLiteral() != nullptr) {
    auto lit = new NumericLiteral();
    lit->value = ctx->start->getText();

    setPos(lit);
    s.push(lit);
  }
  if (ctx->literal()->NullLiteral() != nullptr) {
    auto lit = new NullLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    s.push(lit);
  }
  if (ctx->literal()->StringLiteral() != nullptr) {
    auto lit = new StringLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    s.push(lit);
  }
  if (ctx->literal()->BooleanLiteral() != nullptr) {
    auto lit = new BooleanLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    s.push(lit);
  }
  return 1U;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto func = new FunctionDeclarationNode();
  s.popTo(func->body);
  s.popTo(func->params, size - 1);
  func->id = new IdentifierNode();
  func->id->name = ctx->Identifier()->getText();
  s.push(func);
  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFormalParameterArg(JavaScriptParser::FormalParameterArgContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  return size;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionBody(JavaScriptParser::FunctionBodyContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto body = new FunctionBodyNode();
  s.popTo(body->statementNodes, size);
  s.push(body);
  return 1U;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitWhileStatement(JavaScriptParser::WhileStatementContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto while_node = new WhileStatementNode();
  s.popTo(while_node->body);
  s.popTo(while_node->cond);
  //  std::cerr << size << std::endl;
  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitIfStatement(JavaScriptParser::IfStatementContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto ifStatement = new IfStatementNode();

  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitContinueStatement(JavaScriptParser::ContinueStatementContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto statement = new ContinueStatementNode();
  setPos(statement);
  s.push(statement);
  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitBreakStatement(JavaScriptParser::BreakStatementContext *ctx) {
  auto statement = new BreakStatementNode();
  setPos(statement);
  s.push(statement);
  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitReturnStatement(JavaScriptParser::ReturnStatementContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto statement = new ReturnStatementNode();
  if (size > 0) {
    s.popTo(statement->arg);
  }
  s.push(statement);
  return 1U;
}
AstNode *JavaScriptParserBaseVisitor::getAstRoot() {
  AstNode *root;
  s.popTo(root);
  return root;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitAssignable(JavaScriptParser::AssignableContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto node = new IdentifierNode();
  node->name = ctx->start->getText();
  setPos(node);
  s.push(node);
  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitExpressionStatement(JavaScriptParser::ExpressionStatementContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto exp = new ExpressionStatementNode();
  s.popTo(exp->expression);
  s.push(exp);
  return 1U;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitAssignmentExpression(JavaScriptParser::AssignmentExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto statement = new AssignmentExpressionNode();
  statement->operation = ctx->Assign()->toString();
  setPos(statement);
  s.popTo(statement->right);
  s.popTo(statement->left);
  s.push(statement);
  return 1U;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitIdentifierExpression(JavaScriptParser::IdentifierExpressionContext *ctx) {
  auto children = visitChildren(ctx);
  auto node = new IdentifierNode();
  node->name = ctx->start->getText();
  setPos(node);
  s.push(node);
  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitArgumentsExpression(JavaScriptParser::ArgumentsExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto exp = new CallExpressionNode();
  s.popTo(exp->args, size - 1);
  s.popTo(exp->callee);
  s.push(exp);
  return 1U;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitExpressionSequence(JavaScriptParser::ExpressionSequenceContext *ctx) {
  auto size = visitChildren(ctx).as<unsigned int>();
  auto exp = new ExpressionSequenceNode();
  s.popTo(exp->expressions, size);
  s.push(exp);
  return 1U;
}
