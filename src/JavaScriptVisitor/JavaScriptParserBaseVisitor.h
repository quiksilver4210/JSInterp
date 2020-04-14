
#include "JavaScriptBaseParser.h"

#pragma once

#include "../AstTree/AstNodes.cpp"
#include "JavaScriptParserVisitor.h"
#include "antlr4-runtime.h"

class JavaScriptParserBaseVisitor : public JavaScriptParserVisitor {
  antlrcpp::Any defaultResult() override {
    return 0U;
  }
  antlrcpp::Any aggregateResult(antlrcpp::Any result, const antlrcpp::Any &nextResult) override {
    return result.as<unsigned int>() + nextResult.as<unsigned int>();
  };

 public:
  std::stack<AstNode *> unprocessed;
  std::vector<AstNode *> astTree;

  antlrcpp::Any visitProgram(JavaScriptParser::ProgramContext *ctx) override;

  antlrcpp::Any visitSourceElement(JavaScriptParser::SourceElementContext *ctx) override {
    auto children = visitChildren(ctx);
    return children.as<unsigned int>();
  }

  antlrcpp::Any visitStatement(JavaScriptParser::StatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitBlock(JavaScriptParser::BlockContext *ctx) override;

  antlrcpp::Any visitStatementList(JavaScriptParser::StatementListContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitImportStatement(JavaScriptParser::ImportStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitImportFromBlock(JavaScriptParser::ImportFromBlockContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitModuleItems(JavaScriptParser::ModuleItemsContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitImportDefault(JavaScriptParser::ImportDefaultContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitImportNamespace(JavaScriptParser::ImportNamespaceContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitImportFrom(JavaScriptParser::ImportFromContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitAliasName(JavaScriptParser::AliasNameContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitExportDeclaration(JavaScriptParser::ExportDeclarationContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitExportDefaultDeclaration(JavaScriptParser::ExportDefaultDeclarationContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitExportFromBlock(JavaScriptParser::ExportFromBlockContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitDeclaration(JavaScriptParser::DeclarationContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitVariableStatement(JavaScriptParser::VariableStatementContext *ctx) override {
    auto children = visitChildren(ctx);
    return children.as<unsigned int>();
  }

  antlrcpp::Any visitVariableDeclarationList(JavaScriptParser::VariableDeclarationListContext *ctx) override;

  antlrcpp::Any visitVariableDeclaration(JavaScriptParser::VariableDeclarationContext *ctx) override;

  antlrcpp::Any visitEmptyStatement(JavaScriptParser::EmptyStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitExpressionStatement(JavaScriptParser::ExpressionStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitIfStatement(JavaScriptParser::IfStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitDoStatement(JavaScriptParser::DoStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitWhileStatement(JavaScriptParser::WhileStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitForStatement(JavaScriptParser::ForStatementContext *ctx) override {
    auto children = visitChildren(ctx);
    std::cerr << "TYT" << std::endl;
    return children.as<unsigned int>();
  }

  antlrcpp::Any visitForInStatement(JavaScriptParser::ForInStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitForOfStatement(JavaScriptParser::ForOfStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitVarModifier(JavaScriptParser::VarModifierContext *ctx) override {
    auto children = visitChildren(ctx);

    return 0U;
  }

  antlrcpp::Any visitContinueStatement(JavaScriptParser::ContinueStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitBreakStatement(JavaScriptParser::BreakStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitReturnStatement(JavaScriptParser::ReturnStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitYieldStatement(JavaScriptParser::YieldStatementContext *ctx) override;
  antlrcpp::Any visitWithStatement(JavaScriptParser::WithStatementContext *ctx) override;
  antlrcpp::Any visitSwitchStatement(JavaScriptParser::SwitchStatementContext *ctx) override;
  antlrcpp::Any visitCaseBlock(JavaScriptParser::CaseBlockContext *ctx) override;
  antlrcpp::Any visitCaseClauses(JavaScriptParser::CaseClausesContext *ctx) override;
  antlrcpp::Any visitCaseClause(JavaScriptParser::CaseClauseContext *ctx) override;
  antlrcpp::Any visitDefaultClause(JavaScriptParser::DefaultClauseContext *ctx) override;
  antlrcpp::Any visitClassDeclaration(JavaScriptParser::ClassDeclarationContext *ctx) override;
  antlrcpp::Any visitClassTail(JavaScriptParser::ClassTailContext *ctx) override;
  antlrcpp::Any visitClassElement(JavaScriptParser::ClassElementContext *ctx) override;
  antlrcpp::Any visitMethodDefinition(JavaScriptParser::MethodDefinitionContext *ctx) override;
  antlrcpp::Any visitFormalParameterList(JavaScriptParser::FormalParameterListContext *ctx) override;
  antlrcpp::Any visitFormalParameterArg(JavaScriptParser::FormalParameterArgContext *ctx) override;
  antlrcpp::Any visitLastFormalParameterArg(JavaScriptParser::LastFormalParameterArgContext *ctx) override;

  antlrcpp::Any visitLabelledStatement(JavaScriptParser::LabelledStatementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitThrowStatement(JavaScriptParser::ThrowStatementContext *ctx) override;

  antlrcpp::Any visitTryStatement(JavaScriptParser::TryStatementContext *ctx) override;

  antlrcpp::Any visitCatchProduction(JavaScriptParser::CatchProductionContext *ctx) override;

  antlrcpp::Any visitFinallyProduction(JavaScriptParser::FinallyProductionContext *ctx) override;

  antlrcpp::Any visitDebuggerStatement(JavaScriptParser::DebuggerStatementContext *ctx) override;

  antlrcpp::Any visitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) override {
    auto children = visitChildren(ctx);
    return children.as<unsigned int>();
  }

  antlrcpp::Any visitFunctionBody(JavaScriptParser::FunctionBodyContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitSourceElements(JavaScriptParser::SourceElementsContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitArrayLiteral(JavaScriptParser::ArrayLiteralContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitElementList(JavaScriptParser::ElementListContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitArrayElement(JavaScriptParser::ArrayElementContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitObjectLiteral(JavaScriptParser::ObjectLiteralContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPropertyExpressionAssignment(JavaScriptParser::PropertyExpressionAssignmentContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any
  visitComputedPropertyExpressionAssignment(JavaScriptParser::ComputedPropertyExpressionAssignmentContext *ctx)
                                                                                                      override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitFunctionProperty(JavaScriptParser::FunctionPropertyContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPropertyGetter(JavaScriptParser::PropertyGetterContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPropertySetter(JavaScriptParser::PropertySetterContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPropertyShorthand(JavaScriptParser::PropertyShorthandContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPropertyName(JavaScriptParser::PropertyNameContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitArguments(JavaScriptParser::ArgumentsContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitArgument(JavaScriptParser::ArgumentContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitExpressionSequence(JavaScriptParser::ExpressionSequenceContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitTemplateStringExpression(JavaScriptParser::TemplateStringExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitTernaryExpression(JavaScriptParser::TernaryExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitLogicalAndExpression(JavaScriptParser::LogicalAndExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPowerExpression(JavaScriptParser::PowerExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPreIncrementExpression(JavaScriptParser::PreIncrementExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitObjectLiteralExpression(JavaScriptParser::ObjectLiteralExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitMetaExpression(JavaScriptParser::MetaExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitInExpression(JavaScriptParser::InExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitLogicalOrExpression(JavaScriptParser::LogicalOrExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitNotExpression(JavaScriptParser::NotExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPreDecreaseExpression(JavaScriptParser::PreDecreaseExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitArgumentsExpression(JavaScriptParser::ArgumentsExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitAwaitExpression(JavaScriptParser::AwaitExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitThisExpression(JavaScriptParser::ThisExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitFunctionExpression(JavaScriptParser::FunctionExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitUnaryMinusExpression(JavaScriptParser::UnaryMinusExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitAssignmentExpression(JavaScriptParser::AssignmentExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPostDecreaseExpression(JavaScriptParser::PostDecreaseExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitTypeofExpression(JavaScriptParser::TypeofExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitInstanceofExpression(JavaScriptParser::InstanceofExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitUnaryPlusExpression(JavaScriptParser::UnaryPlusExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitDeleteExpression(JavaScriptParser::DeleteExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitImportExpression(JavaScriptParser::ImportExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitEqualityExpression(JavaScriptParser::EqualityExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitBitXOrExpression(JavaScriptParser::BitXOrExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitSuperExpression(JavaScriptParser::SuperExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitMultiplicativeExpression(JavaScriptParser::MultiplicativeExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitBitShiftExpression(JavaScriptParser::BitShiftExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitParenthesizedExpression(JavaScriptParser::ParenthesizedExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitAdditiveExpression(JavaScriptParser::AdditiveExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitRelationalExpression(JavaScriptParser::RelationalExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitPostIncrementExpression(JavaScriptParser::PostIncrementExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitYieldExpression(JavaScriptParser::YieldExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitBitNotExpression(JavaScriptParser::BitNotExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitNewExpression(JavaScriptParser::NewExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitLiteralExpression(JavaScriptParser::LiteralExpressionContext *ctx) override;

  antlrcpp::Any visitArrayLiteralExpression(JavaScriptParser::ArrayLiteralExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitMemberDotExpression(JavaScriptParser::MemberDotExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitClassExpression(JavaScriptParser::ClassExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitMemberIndexExpression(JavaScriptParser::MemberIndexExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitIdentifierExpression(JavaScriptParser::IdentifierExpressionContext *ctx) override {
    //    std::cerr<<"ds";
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitBitAndExpression(JavaScriptParser::BitAndExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitBitOrExpression(JavaScriptParser::BitOrExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitAssignmentOperatorExpression(JavaScriptParser::AssignmentOperatorExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitVoidExpression(JavaScriptParser::VoidExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitCoalesceExpression(JavaScriptParser::CoalesceExpressionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitAssignable(JavaScriptParser::AssignableContext *ctx) override {
    //    visitChildren(ctx);
    //    auto ident = new IdentifierNode();
    //    ident->name = ctx->Identifier()->toString();
    //    astTree.emplace_back(ident);
    //    std::cerr<<ctx->start->getText()<<std::endl;
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitFunctionDecl(JavaScriptParser::FunctionDeclContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitAnoymousFunctionDecl(JavaScriptParser::AnoymousFunctionDeclContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitArrowFunction(JavaScriptParser::ArrowFunctionContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitArrowFunctionParameters(JavaScriptParser::ArrowFunctionParametersContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitArrowFunctionBody(JavaScriptParser::ArrowFunctionBodyContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitAssignmentOperator(JavaScriptParser::AssignmentOperatorContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitLiteral(JavaScriptParser::LiteralContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitNumericLiteral(JavaScriptParser::NumericLiteralContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitBigintLiteral(JavaScriptParser::BigintLiteralContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitIdentifierName(JavaScriptParser::IdentifierNameContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitReservedWord(JavaScriptParser::ReservedWordContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitKeyword(JavaScriptParser::KeywordContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitGetter(JavaScriptParser::GetterContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitSetter(JavaScriptParser::SetterContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }

  antlrcpp::Any visitEos(JavaScriptParser::EosContext *ctx) override {
    auto children = visitChildren(ctx);

    return children.as<unsigned int>();
  }
};