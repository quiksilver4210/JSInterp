
#include "JavaScriptBaseParser.h"

#pragma once

#include "../Ast/AstNodes.cpp"
#include "JavaScriptParserVisitor.h"
#include "antlr4-runtime.h"

class JavaScriptParserBaseVisitor : public JavaScriptParserVisitor {
  antlrcpp::Any defaultResult() override {
    return 0U;
  }
  antlrcpp::Any aggregateResult(antlrcpp::Any result, const antlrcpp::Any &nextResult) override {
    return result.as<unsigned int>() + nextResult.as<unsigned int>();
  };
  std::string getOperator(const std::vector<antlr4::tree::TerminalNode *> &v) {
    antlr4::tree::TerminalNode *opToken;
    for (auto i : v) {
      if (i != nullptr) {
        opToken = i;
        break;
      }
    }
    return opToken->getText();
  }

 public:
  //  std::stack<AstNode *> unprocessed;
  NodeStack nodeStack;
  //  std::vector<AstNode *> astTree;
  AstNode *getAstRoot();
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
  antlrcpp::Any visitForStatement(JavaScriptParser::ForStatementContext *ctx) override;
  antlrcpp::Any visitForInStatement(JavaScriptParser::ForInStatementContext *ctx) override;
  antlrcpp::Any visitForOfStatement(JavaScriptParser::ForOfStatementContext *ctx) override;
  antlrcpp::Any visitDoStatement(JavaScriptParser::DoStatementContext *ctx) override;
  antlrcpp::Any visitThrowStatement(JavaScriptParser::ThrowStatementContext *ctx) override;
  antlrcpp::Any visitTryStatement(JavaScriptParser::TryStatementContext *ctx) override;
  antlrcpp::Any visitCatchProduction(JavaScriptParser::CatchProductionContext *ctx) override;
  antlrcpp::Any visitFinallyProduction(JavaScriptParser::FinallyProductionContext *ctx) override;
  antlrcpp::Any visitDebuggerStatement(JavaScriptParser::DebuggerStatementContext *ctx) override;
  antlrcpp::Any visitPreIncrementExpression(JavaScriptParser::PreIncrementExpressionContext *ctx) override;
  antlrcpp::Any visitPostIncrementExpression(JavaScriptParser::PostIncrementExpressionContext *ctx) override;
  antlrcpp::Any visitPreDecreaseExpression(JavaScriptParser::PreDecreaseExpressionContext *ctx) override;
  antlrcpp::Any visitPostDecreaseExpression(JavaScriptParser::PostDecreaseExpressionContext *ctx) override;
  antlrcpp::Any visitYieldExpression(JavaScriptParser::YieldExpressionContext *ctx) override;
  antlrcpp::Any visitImportStatement(JavaScriptParser::ImportStatementContext *ctx) override;
  antlrcpp::Any visitImportFromBlock(JavaScriptParser::ImportFromBlockContext *ctx) override;
  antlrcpp::Any visitModuleItems(JavaScriptParser::ModuleItemsContext *ctx) override;
  antlrcpp::Any visitImportDefault(JavaScriptParser::ImportDefaultContext *ctx) override;
  antlrcpp::Any visitImportNamespace(JavaScriptParser::ImportNamespaceContext *ctx) override;
  antlrcpp::Any visitImportFrom(JavaScriptParser::ImportFromContext *ctx) override;
  antlrcpp::Any visitAliasName(JavaScriptParser::AliasNameContext *ctx) override;
  antlrcpp::Any visitExportDeclaration(JavaScriptParser::ExportDeclarationContext *ctx) override;
  antlrcpp::Any visitExportDefaultDeclaration(JavaScriptParser::ExportDefaultDeclarationContext *ctx) override;
  antlrcpp::Any visitExportFromBlock(JavaScriptParser::ExportFromBlockContext *ctx) override;
  antlrcpp::Any visitAnoymousFunctionDecl(JavaScriptParser::AnoymousFunctionDeclContext *ctx) override;
  antlrcpp::Any visitArrowFunction(JavaScriptParser::ArrowFunctionContext *ctx) override;
  antlrcpp::Any visitArrowFunctionParameters(JavaScriptParser::ArrowFunctionParametersContext *ctx) override;
  antlrcpp::Any visitArrowFunctionBody(JavaScriptParser::ArrowFunctionBodyContext *ctx) override;
  antlrcpp::Any visitCoalesceExpression(JavaScriptParser::CoalesceExpressionContext *ctx) override;
  antlrcpp::Any visitAwaitExpression(JavaScriptParser::AwaitExpressionContext *ctx) override;
  antlrcpp::Any visitTernaryExpression(JavaScriptParser::TernaryExpressionContext *ctx) override;
  antlrcpp::Any visitVoidExpression(JavaScriptParser::VoidExpressionContext *ctx) override;
  antlrcpp::Any visitPropertyGetter(JavaScriptParser::PropertyGetterContext *ctx) override;
  antlrcpp::Any visitPropertySetter(JavaScriptParser::PropertySetterContext *ctx) override;
  antlrcpp::Any visitLabelledStatement(JavaScriptParser::LabelledStatementContext *ctx) override;
  antlrcpp::Any visitImportExpression(JavaScriptParser::ImportExpressionContext *ctx) override;
  antlrcpp::Any visitNewExpression(JavaScriptParser::NewExpressionContext *ctx) override;

  antlrcpp::Any visitProgram(JavaScriptParser::ProgramContext *ctx) override;
  antlrcpp::Any visitBlock(JavaScriptParser::BlockContext *ctx) override;
  antlrcpp::Any visitVariableDeclarationList(JavaScriptParser::VariableDeclarationListContext *ctx) override;
  antlrcpp::Any visitVariableDeclaration(JavaScriptParser::VariableDeclarationContext *ctx) override;
  antlrcpp::Any visitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) override;
  antlrcpp::Any visitFunctionBody(JavaScriptParser::FunctionBodyContext *ctx) override;
  antlrcpp::Any visitExpressionStatement(JavaScriptParser::ExpressionStatementContext *ctx) override;
  antlrcpp::Any visitIfStatement(JavaScriptParser::IfStatementContext *ctx) override;
  antlrcpp::Any visitWhileStatement(JavaScriptParser::WhileStatementContext *ctx) override;
  antlrcpp::Any visitContinueStatement(JavaScriptParser::ContinueStatementContext *ctx) override;
  antlrcpp::Any visitBreakStatement(JavaScriptParser::BreakStatementContext *ctx) override;
  antlrcpp::Any visitReturnStatement(JavaScriptParser::ReturnStatementContext *ctx) override;
  antlrcpp::Any visitAssignmentExpression(JavaScriptParser::AssignmentExpressionContext *ctx) override;
  antlrcpp::Any visitAssignable(JavaScriptParser::AssignableContext *ctx) override;
  antlrcpp::Any visitLogicalAndExpression(JavaScriptParser::LogicalAndExpressionContext *ctx) override;
  antlrcpp::Any visitPowerExpression(JavaScriptParser::PowerExpressionContext *ctx) override;
  antlrcpp::Any visitMultiplicativeExpression(JavaScriptParser::MultiplicativeExpressionContext *ctx) override;
  antlrcpp::Any visitBitShiftExpression(JavaScriptParser::BitShiftExpressionContext *ctx) override;
  antlrcpp::Any visitIdentifierExpression(JavaScriptParser::IdentifierExpressionContext *ctx) override;
  antlrcpp::Any visitBitAndExpression(JavaScriptParser::BitAndExpressionContext *ctx) override;
  antlrcpp::Any visitBitOrExpression(JavaScriptParser::BitOrExpressionContext *ctx) override;
  antlrcpp::Any visitBitXOrExpression(JavaScriptParser::BitXOrExpressionContext *ctx) override;
  antlrcpp::Any visitLogicalOrExpression(JavaScriptParser::LogicalOrExpressionContext *ctx) override;
  antlrcpp::Any visitAdditiveExpression(JavaScriptParser::AdditiveExpressionContext *ctx) override;
  antlrcpp::Any visitBitNotExpression(JavaScriptParser::BitNotExpressionContext *ctx) override;
  antlrcpp::Any visitLiteralExpression(JavaScriptParser::LiteralExpressionContext *ctx) override;
  antlrcpp::Any visitAssignmentOperator(JavaScriptParser::AssignmentOperatorContext *ctx) override;

  antlrcpp::Any visitSourceElement(JavaScriptParser::SourceElementContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitStatement(JavaScriptParser::StatementContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitStatementList(JavaScriptParser::StatementListContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitDeclaration(JavaScriptParser::DeclarationContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitVariableStatement(JavaScriptParser::VariableStatementContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitEmptyStatement(JavaScriptParser::EmptyStatementContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitVarModifier(JavaScriptParser::VarModifierContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitSourceElements(JavaScriptParser::SourceElementsContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitArrayLiteral(JavaScriptParser::ArrayLiteralContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitElementList(JavaScriptParser::ElementListContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitArrayElement(JavaScriptParser::ArrayElementContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitObjectLiteral(JavaScriptParser::ObjectLiteralContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitPropertyExpressionAssignment(JavaScriptParser::PropertyExpressionAssignmentContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any
  visitComputedPropertyExpressionAssignment(JavaScriptParser::ComputedPropertyExpressionAssignmentContext *ctx)
                                                                                                      override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitFunctionProperty(JavaScriptParser::FunctionPropertyContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitPropertyShorthand(JavaScriptParser::PropertyShorthandContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitPropertyName(JavaScriptParser::PropertyNameContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitArguments(JavaScriptParser::ArgumentsContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitArgument(JavaScriptParser::ArgumentContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitExpressionSequence(JavaScriptParser::ExpressionSequenceContext *ctx) override;

  antlrcpp::Any visitTemplateStringExpression(JavaScriptParser::TemplateStringExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitObjectLiteralExpression(JavaScriptParser::ObjectLiteralExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitMetaExpression(JavaScriptParser::MetaExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitInExpression(JavaScriptParser::InExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitNotExpression(JavaScriptParser::NotExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitArgumentsExpression(JavaScriptParser::ArgumentsExpressionContext *ctx) override;

  antlrcpp::Any visitThisExpression(JavaScriptParser::ThisExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitFunctionExpression(JavaScriptParser::FunctionExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitUnaryMinusExpression(JavaScriptParser::UnaryMinusExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitTypeofExpression(JavaScriptParser::TypeofExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitInstanceofExpression(JavaScriptParser::InstanceofExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitUnaryPlusExpression(JavaScriptParser::UnaryPlusExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitDeleteExpression(JavaScriptParser::DeleteExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitEqualityExpression(JavaScriptParser::EqualityExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitSuperExpression(JavaScriptParser::SuperExpressionContext *ctx) override;

  antlrcpp::Any visitParenthesizedExpression(JavaScriptParser::ParenthesizedExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }

  antlrcpp::Any visitRelationalExpression(JavaScriptParser::RelationalExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitArrayLiteralExpression(JavaScriptParser::ArrayLiteralExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitMemberDotExpression(JavaScriptParser::MemberDotExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitClassExpression(JavaScriptParser::ClassExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitMemberIndexExpression(JavaScriptParser::MemberIndexExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitAssignmentOperatorExpression(JavaScriptParser::AssignmentOperatorExpressionContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitFunctionDecl(JavaScriptParser::FunctionDeclContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitLiteral(JavaScriptParser::LiteralContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitNumericLiteral(JavaScriptParser::NumericLiteralContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitBigintLiteral(JavaScriptParser::BigintLiteralContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitIdentifierName(JavaScriptParser::IdentifierNameContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitReservedWord(JavaScriptParser::ReservedWordContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitKeyword(JavaScriptParser::KeywordContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitGetter(JavaScriptParser::GetterContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitSetter(JavaScriptParser::SetterContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
  antlrcpp::Any visitEos(JavaScriptParser::EosContext *ctx) override {
    auto size = visitChildren(ctx).as<unsigned int>();
    return size;
  }
};
