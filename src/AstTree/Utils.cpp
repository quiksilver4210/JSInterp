//
// Created by quiks on 14.04.2020.
//

#include <map>
#include "AstNodes.cpp"
static std::map<NodeType, std::string> nodeName = {{NodeType::ProgramType, "Program"},
                                                   {NodeType::VarDeclarationType, "VarDeclaration"},
                                                   {NodeType::VarDeclaratorType, "VarDeclarator"},
                                                   {NodeType::StatementType, "Statement"},
                                                   {NodeType::BlockStatementType, "BlockStatement"},
                                                   {NodeType::IdentifierType, "Identifier"},
                                                   {NodeType::ExpressionType, "Expression"},
                                                   {NodeType::NullLiteralType, "NullLiteral"},
                                                   {NodeType::StringLiteralType, "StringLiteral"},
                                                   {NodeType::NumericLiteralType, "NumericLiteral"},
                                                   {NodeType::BooleanLiteralType, "BooleanLiteral"}};