
#include "JavaScriptParserBaseVisitor.h"
#include "../Ast/AstBase.h"
#include "JavaScriptBaseParser.h"

typedef Constants C;
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
  auto size = visitChildren(ctx).as<int>();
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
antlrcpp::Any JavaScriptParserBaseVisitor::visitImportExpression(JavaScriptParser::ImportExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitNewExpression(JavaScriptParser::NewExpressionContext *) {
  throw std::logic_error("Not realised");
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitSuperExpression(JavaScriptParser::SuperExpressionContext *) {
  throw std::logic_error("Not realised");
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitProgram(JavaScriptParser::ProgramContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto program = new ProgramNode();
  setPos(program);
  auto v = &program->statementNodes;
  v->resize(size);
  for (size -= 1; size >= 0; --size) {
    nodeStack.popTo((*v)[size]);
  }
  nodeStack.push(program);
  return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBlock(JavaScriptParser::BlockContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto block = new BlockStatementNode();
  setPos(block);
  auto v = &block->statementNodes;
  v->resize(size);
  for (size -= 1; size >= 0; --size) {
    nodeStack.popTo((*v)[size]);
  }
  nodeStack.push(block);
  return 1;
}

antlrcpp::Any
JavaScriptParserBaseVisitor::visitVariableDeclarationList(JavaScriptParser::VariableDeclarationListContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto node = new VarDeclarationNode();
  node->kind = ctx->start->getText();
  setPos(node);
  auto v = &node->declarations;
  v->resize(size);
  for (size -= 1; size >= 0; --size) {
    nodeStack.popTo((*v)[size]);
  }
  nodeStack.push(node);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitVariableDeclaration(JavaScriptParser::VariableDeclarationContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto declarator = new VarDeclaratorNode();
  setPos(declarator);
  if (size == 2) {
    nodeStack.popTo(declarator->expressionNode);
  }
  nodeStack.popTo(declarator->identifierNode);
  nodeStack.push(declarator);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitLiteralExpression(JavaScriptParser::LiteralExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  if (ctx->literal()->numericLiteral() != nullptr) {
    auto lit = new NumericLiteral();
    lit->value = ctx->start->getText();

    setPos(lit);
    nodeStack.push(lit);
  }
  if (ctx->literal()->NullLiteral() != nullptr) {
    auto lit = new NullLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    nodeStack.push(lit);
  }
  if (ctx->literal()->StringLiteral() != nullptr) {
    auto lit = new StringLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    nodeStack.push(lit);
  }
  if (ctx->literal()->BooleanLiteral() != nullptr) {
    auto lit = new BooleanLiteral();
    lit->value = ctx->start->getText();
    setPos(lit);
    nodeStack.push(lit);
  }
  return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto func = new FunctionDeclarationNode();
  func->id = new IdentifierNode();
  func->id->name = ctx->Identifier()->getText();
  nodeStack.popTo(func->body);
  auto v = &func->params;
  v->resize(--size);
  for (size -= 1; size >= 0; --size) {
    nodeStack.popTo((*v)[size]);
  }
  nodeStack.push(func);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFormalParameterArg(JavaScriptParser::FormalParameterArgContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  return size;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionBody(JavaScriptParser::FunctionBodyContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto body = new FunctionBodyNode();
  auto v = &body->statementNodes;
  v->resize(size);
  for (size -= 1; size >= 0; --size) {
    nodeStack.popTo((*v)[size]);
  }
  nodeStack.push(body);
  return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitWhileStatement(JavaScriptParser::WhileStatementContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto while_node = new WhileStatementNode();
  nodeStack.popTo(while_node->body);
  nodeStack.popTo(while_node->cond);
  nodeStack.push(while_node);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitIfStatement(JavaScriptParser::IfStatementContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto ifStatement = new IfStatementNode();
  if (size == 3) {
    nodeStack.popTo(ifStatement->alter);
  }
  nodeStack.popTo(ifStatement->cons);
  nodeStack.popTo(ifStatement->cond);
  nodeStack.push(ifStatement);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitContinueStatement(JavaScriptParser::ContinueStatementContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto statement = new ContinueStatementNode();
  setPos(statement);
  nodeStack.push(statement);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitBreakStatement(JavaScriptParser::BreakStatementContext *ctx) {
  auto statement = new BreakStatementNode();
  setPos(statement);
  nodeStack.push(statement);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitReturnStatement(JavaScriptParser::ReturnStatementContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto statement = new ReturnStatementNode();
  if (size > 0) {
    nodeStack.popTo(statement->arg);
  }
  nodeStack.push(statement);
  return 1;
}
AstNode *JavaScriptParserBaseVisitor::getAstRoot() {
  AstNode *root;
  nodeStack.popTo(root);
  return root;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitAssignable(JavaScriptParser::AssignableContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto node = new IdentifierNode();
  node->name = ctx->start->getText();
  setPos(node);
  nodeStack.push(node);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitExpressionStatement(JavaScriptParser::ExpressionStatementContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new ExpressionStatementNode();
  nodeStack.popTo(exp->expression);
  nodeStack.push(exp);
  return 1;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitAssignmentExpression(JavaScriptParser::AssignmentExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto statement = new AssignmentExpressionNode();
  statement->operation = ctx->Assign()->toString();
  setPos(statement);
  nodeStack.popTo(statement->right);
  nodeStack.popTo(statement->left);
  nodeStack.push(statement);
  return 1;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitIdentifierExpression(JavaScriptParser::IdentifierExpressionContext *ctx) {
  auto children = visitChildren(ctx);
  auto node = new IdentifierNode();
  node->name = ctx->start->getText();
  setPos(node);
  nodeStack.push(node);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitArgumentsExpression(JavaScriptParser::ArgumentsExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new CallExpressionNode();
  auto v = &exp->args;
  v->resize(--size);
  for (size -= 1; size >= 0; --size) {
    nodeStack.popTo((*v)[size]);
  }
  nodeStack.popTo(exp->callee);
  nodeStack.push(exp);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitExpressionSequence(JavaScriptParser::ExpressionSequenceContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new ExpressionSequenceNode();
  auto v = &exp->expressions;
  v->resize(size);
  for (size -= 1; size >= 0; --size) {
    nodeStack.popTo((*v)[size]);
  }
  nodeStack.push(exp);
  return 1;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitLogicalAndExpression(JavaScriptParser::LogicalAndExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->And()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitPowerExpression(JavaScriptParser::PowerExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->Power()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitBitXOrExpression(JavaScriptParser::BitXOrExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->BitXOr()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitMultiplicativeExpression(JavaScriptParser::MultiplicativeExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->Multiply(), ctx->Divide(), ctx->Modulus()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitBitShiftExpression(JavaScriptParser::BitShiftExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->RightShiftLogical(), ctx->RightShiftArithmetic(),
                                                        ctx->LeftShiftArithmetic()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitAdditiveExpression(JavaScriptParser::AdditiveExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->Plus(), ctx->Minus()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitBitNotExpression(JavaScriptParser::BitNotExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->BitNot()})];
  nodeStack.push(binaryExpression);
  return 1;
}

antlrcpp::Any JavaScriptParserBaseVisitor::visitBitAndExpression(JavaScriptParser::BitAndExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->BitAnd()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitBitOrExpression(JavaScriptParser::BitOrExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->BitOr()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitLogicalOrExpression(JavaScriptParser::LogicalOrExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->Or()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitAssignmentOperator(JavaScriptParser::AssignmentOperatorContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  return size;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitAssignmentOperatorExpression(JavaScriptParser::AssignmentOperatorExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto statement = new AssignmentExpressionNode();
  auto op = ctx->assignmentOperator();
  statement->operation = getOperator({op->BitAndAssign(), op->BitOrAssign(), op->BitXorAssign(), op->DivideAssign(),
                                      op->MultiplyAssign(), op->ModulusAssign(), op->PlusAssign(), op->MinusAssign(),
                                      op->PowerAssign(), op->LeftShiftArithmeticAssign(),
                                      op->RightShiftArithmeticAssign(), op->RightShiftLogicalAssign()});
  setPos(statement);
  nodeStack.popTo(statement->right);
  nodeStack.popTo(statement->left);
  nodeStack.push(statement);
  return 1;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitUnaryMinusExpression(JavaScriptParser::UnaryMinusExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new UnaryExpressionNode();
  exp->anOperator = C::opType[ctx->Minus()->getText()];
  nodeStack.popTo(exp->arg);
  nodeStack.push(exp);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitUnaryPlusExpression(JavaScriptParser::UnaryPlusExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new UnaryExpressionNode();
  exp->anOperator = C::opType[ctx->Plus()->getText()];
  nodeStack.popTo(exp->arg);
  nodeStack.push(exp);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitEqualityExpression(JavaScriptParser::EqualityExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->NotEquals(), ctx->Equals_(), ctx->IdentityEquals(),
                                                        ctx->IdentityNotEquals()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitRelationalExpression(JavaScriptParser::RelationalExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto binaryExpression = new BinaryExpressionNode();
  nodeStack.popTo(binaryExpression->right);
  nodeStack.popTo(binaryExpression->left);
  binaryExpression->anOperator = C::opType[getOperator({ctx->MoreThan(), ctx->LessThan(), ctx->LessThanEquals(),
                                                        ctx->GreaterThanEquals()})];
  nodeStack.push(binaryExpression);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitEmptyStatement(JavaScriptParser::EmptyStatementContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new EmptyExpressionNode();
  nodeStack.push(exp);
  return 1;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitPropertyExpressionAssignment(JavaScriptParser::PropertyExpressionAssignmentContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new PropertyExpressionNode();
  nodeStack.popTo(exp->val);
  nodeStack.popTo(exp->key);
  nodeStack.push(exp);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitFunctionExpression(JavaScriptParser::FunctionExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto func = new FunctionDeclarationNode();
  func->id;
  nodeStack.popTo(func->body);
  auto v = &func->params;
  v->resize(--size);
  for (size -= 1; size >= 0; --size) {
    nodeStack.popTo((*v)[size]);
  }
  nodeStack.push(func);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitNotExpression(JavaScriptParser::NotExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new UnaryExpressionNode();
  exp->anOperator = C::opType[ctx->Not()->getText()];
  nodeStack.popTo(exp->arg);
  nodeStack.push(exp);
  return 1;
}
antlrcpp::Any
JavaScriptParserBaseVisitor::visitMemberIndexExpression(JavaScriptParser::MemberIndexExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new MemberExpressionNode();
  nodeStack.popTo(exp->property);
  nodeStack.popTo(exp->obj);
  nodeStack.push(exp);
  return 1;
}
antlrcpp::Any JavaScriptParserBaseVisitor::visitMemberDotExpression(JavaScriptParser::MemberDotExpressionContext *ctx) {
  auto size = visitChildren(ctx).as<int>();
  auto exp = new MemberExpressionNode();
  nodeStack.popTo(exp->property);
  nodeStack.popTo(exp->obj);
  nodeStack.push(exp);
  return 1;
}
