
#include "JavaScriptBaseParser.h"


// Generated from JavaScriptParser.g4 by ANTLR 4.8

#pragma once

#include "antlr4-runtime.h"
#include "JavaScriptParserVisitor.h"

/**
 * This class provides an empty implementation of JavaScriptParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class JavaScriptParserBaseVisitor : public JavaScriptParserVisitor {
 public:

    antlrcpp::Any visitProgram(JavaScriptParser::ProgramContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitSourceElement(JavaScriptParser::SourceElementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitStatement(JavaScriptParser::StatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitBlock(JavaScriptParser::BlockContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitStatementList(JavaScriptParser::StatementListContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitImportStatement(JavaScriptParser::ImportStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitImportFromBlock(JavaScriptParser::ImportFromBlockContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitModuleItems(JavaScriptParser::ModuleItemsContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitImportDefault(JavaScriptParser::ImportDefaultContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitImportNamespace(JavaScriptParser::ImportNamespaceContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitImportFrom(JavaScriptParser::ImportFromContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitAliasName(JavaScriptParser::AliasNameContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitExportDeclaration(JavaScriptParser::ExportDeclarationContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitExportDefaultDeclaration(JavaScriptParser::ExportDefaultDeclarationContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitExportFromBlock(JavaScriptParser::ExportFromBlockContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitDeclaration(JavaScriptParser::DeclarationContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitVariableStatement(JavaScriptParser::VariableStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitVariableDeclarationList(JavaScriptParser::VariableDeclarationListContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitVariableDeclaration(JavaScriptParser::VariableDeclarationContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitEmptyStatement(JavaScriptParser::EmptyStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitExpressionStatement(JavaScriptParser::ExpressionStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitIfStatement(JavaScriptParser::IfStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitDoStatement(JavaScriptParser::DoStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitWhileStatement(JavaScriptParser::WhileStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitForStatement(JavaScriptParser::ForStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitForInStatement(JavaScriptParser::ForInStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitForOfStatement(JavaScriptParser::ForOfStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitVarModifier(JavaScriptParser::VarModifierContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitContinueStatement(JavaScriptParser::ContinueStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitBreakStatement(JavaScriptParser::BreakStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitReturnStatement(JavaScriptParser::ReturnStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitYieldStatement(JavaScriptParser::YieldStatementContext *ctx) override;

    antlrcpp::Any visitWithStatement(JavaScriptParser::WithStatementContext *ctx) override;

    antlrcpp::Any visitSwitchStatement(JavaScriptParser::SwitchStatementContext *ctx) override;

    antlrcpp::Any visitCaseBlock(JavaScriptParser::CaseBlockContext *ctx) override;

    antlrcpp::Any visitCaseClauses(JavaScriptParser::CaseClausesContext *ctx) override;

    antlrcpp::Any visitCaseClause(JavaScriptParser::CaseClauseContext *ctx) override;

    antlrcpp::Any visitDefaultClause(JavaScriptParser::DefaultClauseContext *ctx) override;

    antlrcpp::Any visitLabelledStatement(JavaScriptParser::LabelledStatementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitThrowStatement(JavaScriptParser::ThrowStatementContext *ctx) override;

    antlrcpp::Any visitTryStatement(JavaScriptParser::TryStatementContext *ctx) override;

    antlrcpp::Any visitCatchProduction(JavaScriptParser::CatchProductionContext *ctx) override;

    antlrcpp::Any visitFinallyProduction(JavaScriptParser::FinallyProductionContext *ctx) override;

    antlrcpp::Any visitDebuggerStatement(JavaScriptParser::DebuggerStatementContext *ctx) override;

    antlrcpp::Any visitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitClassDeclaration(JavaScriptParser::ClassDeclarationContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitClassTail(JavaScriptParser::ClassTailContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitClassElement(JavaScriptParser::ClassElementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitMethodDefinition(JavaScriptParser::MethodDefinitionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitFormalParameterList(JavaScriptParser::FormalParameterListContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitFormalParameterArg(JavaScriptParser::FormalParameterArgContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitLastFormalParameterArg(JavaScriptParser::LastFormalParameterArgContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitFunctionBody(JavaScriptParser::FunctionBodyContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitSourceElements(JavaScriptParser::SourceElementsContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitArrayLiteral(JavaScriptParser::ArrayLiteralContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitElementList(JavaScriptParser::ElementListContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitArrayElement(JavaScriptParser::ArrayElementContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitObjectLiteral(JavaScriptParser::ObjectLiteralContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPropertyExpressionAssignment(JavaScriptParser::PropertyExpressionAssignmentContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitComputedPropertyExpressionAssignment(JavaScriptParser::ComputedPropertyExpressionAssignmentContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitFunctionProperty(JavaScriptParser::FunctionPropertyContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPropertyGetter(JavaScriptParser::PropertyGetterContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPropertySetter(JavaScriptParser::PropertySetterContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPropertyShorthand(JavaScriptParser::PropertyShorthandContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPropertyName(JavaScriptParser::PropertyNameContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitArguments(JavaScriptParser::ArgumentsContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitArgument(JavaScriptParser::ArgumentContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitExpressionSequence(JavaScriptParser::ExpressionSequenceContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitTemplateStringExpression(JavaScriptParser::TemplateStringExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitTernaryExpression(JavaScriptParser::TernaryExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitLogicalAndExpression(JavaScriptParser::LogicalAndExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPowerExpression(JavaScriptParser::PowerExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPreIncrementExpression(JavaScriptParser::PreIncrementExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitObjectLiteralExpression(JavaScriptParser::ObjectLiteralExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitMetaExpression(JavaScriptParser::MetaExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitInExpression(JavaScriptParser::InExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitLogicalOrExpression(JavaScriptParser::LogicalOrExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitNotExpression(JavaScriptParser::NotExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPreDecreaseExpression(JavaScriptParser::PreDecreaseExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitArgumentsExpression(JavaScriptParser::ArgumentsExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitAwaitExpression(JavaScriptParser::AwaitExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitThisExpression(JavaScriptParser::ThisExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitFunctionExpression(JavaScriptParser::FunctionExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitUnaryMinusExpression(JavaScriptParser::UnaryMinusExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitAssignmentExpression(JavaScriptParser::AssignmentExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPostDecreaseExpression(JavaScriptParser::PostDecreaseExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitTypeofExpression(JavaScriptParser::TypeofExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitInstanceofExpression(JavaScriptParser::InstanceofExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitUnaryPlusExpression(JavaScriptParser::UnaryPlusExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitDeleteExpression(JavaScriptParser::DeleteExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitImportExpression(JavaScriptParser::ImportExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitEqualityExpression(JavaScriptParser::EqualityExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitBitXOrExpression(JavaScriptParser::BitXOrExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitSuperExpression(JavaScriptParser::SuperExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitMultiplicativeExpression(JavaScriptParser::MultiplicativeExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitBitShiftExpression(JavaScriptParser::BitShiftExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitParenthesizedExpression(JavaScriptParser::ParenthesizedExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitAdditiveExpression(JavaScriptParser::AdditiveExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitRelationalExpression(JavaScriptParser::RelationalExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitPostIncrementExpression(JavaScriptParser::PostIncrementExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitYieldExpression(JavaScriptParser::YieldExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitBitNotExpression(JavaScriptParser::BitNotExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitNewExpression(JavaScriptParser::NewExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitLiteralExpression(JavaScriptParser::LiteralExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitArrayLiteralExpression(JavaScriptParser::ArrayLiteralExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitMemberDotExpression(JavaScriptParser::MemberDotExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitClassExpression(JavaScriptParser::ClassExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitMemberIndexExpression(JavaScriptParser::MemberIndexExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitIdentifierExpression(JavaScriptParser::IdentifierExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitBitAndExpression(JavaScriptParser::BitAndExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitBitOrExpression(JavaScriptParser::BitOrExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitAssignmentOperatorExpression(JavaScriptParser::AssignmentOperatorExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitVoidExpression(JavaScriptParser::VoidExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitCoalesceExpression(JavaScriptParser::CoalesceExpressionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitAssignable(JavaScriptParser::AssignableContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitFunctionDecl(JavaScriptParser::FunctionDeclContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitAnoymousFunctionDecl(JavaScriptParser::AnoymousFunctionDeclContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitArrowFunction(JavaScriptParser::ArrowFunctionContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitArrowFunctionParameters(JavaScriptParser::ArrowFunctionParametersContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitArrowFunctionBody(JavaScriptParser::ArrowFunctionBodyContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitAssignmentOperator(JavaScriptParser::AssignmentOperatorContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitLiteral(JavaScriptParser::LiteralContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitNumericLiteral(JavaScriptParser::NumericLiteralContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitBigintLiteral(JavaScriptParser::BigintLiteralContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitIdentifierName(JavaScriptParser::IdentifierNameContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitReservedWord(JavaScriptParser::ReservedWordContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitKeyword(JavaScriptParser::KeywordContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitGetter(JavaScriptParser::GetterContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitSetter(JavaScriptParser::SetterContext *ctx) override {
      return visitChildren(ctx);
    }

    antlrcpp::Any visitEos(JavaScriptParser::EosContext *ctx) override {
      return visitChildren(ctx);
    }

};

