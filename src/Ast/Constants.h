#ifndef JSINTERP_CONSTANTS_H
#define JSINTERP_CONSTANTS_H

#include <map>

enum class NodeType {
  Program,
  VarDeclaration,
  VarDeclarator,
  Statement,
  BlockStatement,
  Identifier,
  Expression,
  EmptyExpression,
  ArrayExpression,
  Function,
  FunctionDeclaration,
  FunctionBody,
  FunctionExpression,
  UnaryExpression,
  BinaryExpression,
  AssignmentExpression,
  CallExpression,
  MemberExpression,
  PropertyExpression,
  NullLiteral,
  StringLiteral,
  NumericLiteral,
  BooleanLiteral,
  WhileStatement,
  IfStatement,
  BreakStatement,
  ReturnStatement,
  ContinueStatement,
  ExpressionStatement,
  ExpressionSequence,
  EmptyExpressionNode,
  ObjectExpresion,
  Undefined
};

enum class BinaryOperator {
  Plus,
  Minus,
  BitNot,
  Not,
  Multiply,
  Divide,
  Modulus,
  Power,
  NullCoalesce,
  RightShiftArithmetic,
  LeftShiftArithmetic,
  RightShiftLogical,
  LessThan,
  MoreThan,
  LessThanEquals,
  GreaterThanEquals,
  Equals,
  NotEquals,
  IdentityEquals,
  IdentityNotEquals,
  BitAnd,
  BitXOr,
  BitOr,
  And,
  Or
};

enum class AssignmentOperator {
  Assign,
  Plus,
  Minus,
  Multiply,
  Divide,
  Modulus,
  Power,
  RightShiftArithmetic,
  LeftShiftArithmetic,
  RightShiftLogical,
  BitAnd,
  BitXOr,
  BitOr
};

class Constants {
 public:
  inline static std::map<NodeType, std::string> nodeName = {{NodeType::Program, "Program"},
                                                            {NodeType::VarDeclaration, "VarDeclaration"},
                                                            {NodeType::VarDeclarator, "VarDeclarator"},
                                                            {NodeType::Statement, "Statement"},
                                                            {NodeType::BlockStatement, "BlockStatement"},
                                                            {NodeType::Identifier, "Identifier"},
                                                            {NodeType::Expression, "Expression"},
                                                            {NodeType::NullLiteral, "NullLiteral"},
                                                            {NodeType::StringLiteral, "StringLiteral"},
                                                            {NodeType::NumericLiteral, "NumericLiteral"},
                                                            {NodeType::BooleanLiteral, "BooleanLiteral"},
                                                            {NodeType::Function, "Function"},
                                                            {NodeType::FunctionDeclaration, "FunctionDeclaration"},
                                                            {NodeType::FunctionBody, "FunctionBodyNode"},
                                                            {NodeType::FunctionExpression, "FunctionExpression"},
                                                            {NodeType::WhileStatement, "WhileStatement"},
                                                            {NodeType::IfStatement, "IfExpression"},
                                                            {NodeType::ReturnStatement, "ReturnStatement"},
                                                            {NodeType::BreakStatement, "BreakStatement"},
                                                            {NodeType::ContinueStatement, "ContinueStatement"},
                                                            {NodeType::ExpressionStatement, "ExpressionStatement"},
                                                            {NodeType::AssignmentExpression, "AssignmentExpression"},
                                                            {NodeType::CallExpression, "CallExpression"},
                                                            {NodeType::ExpressionSequence, "ExpressionSequence"},
                                                            {NodeType::BinaryExpression, "BinaryExpression"},
                                                            {NodeType::UnaryExpression, "UnaryExpression"},
                                                            {NodeType::EmptyExpression, "EmptyExpression"},
                                                            {NodeType::MemberExpression, "MemberExpression"},
                                                            {NodeType::PropertyExpression, "PropertyExpression"},
                                                            {NodeType::ArrayExpression, "ArrayExpression"},
                                                            {NodeType::ObjectExpresion, "ObjectExpression"},
                                                            {NodeType::Undefined, "Undefined"}};

  inline static std::map<std::string, BinaryOperator> opType = {{"+", BinaryOperator::Plus},
                                                                {"-", BinaryOperator::Minus},
                                                                {"~", BinaryOperator::BitNot},
                                                                {"!", BinaryOperator::Not},
                                                                {"*", BinaryOperator::Multiply},
                                                                {"/", BinaryOperator::Divide},
                                                                {"%", BinaryOperator::Modulus},
                                                                {"**", BinaryOperator::Power},
                                                                {">>", BinaryOperator::RightShiftArithmetic},
                                                                {"<<", BinaryOperator::LeftShiftArithmetic},
                                                                {">>>", BinaryOperator::RightShiftLogical},
                                                                {"<", BinaryOperator::LessThan},
                                                                {">", BinaryOperator::MoreThan},
                                                                {"<=", BinaryOperator::LessThanEquals},
                                                                {"=>", BinaryOperator::GreaterThanEquals},
                                                                {"==", BinaryOperator::Equals},
                                                                {"!=", BinaryOperator::NotEquals},
                                                                {"===", BinaryOperator::IdentityEquals},
                                                                {"!==", BinaryOperator::IdentityNotEquals},
                                                                {"&", BinaryOperator::BitAnd},
                                                                {"^", BinaryOperator::BitXOr},
                                                                {"|", BinaryOperator::BitOr},
                                                                {"&&", BinaryOperator::And},
                                                                {"||", BinaryOperator::Or}};

  inline static std::map<BinaryOperator, std::string> opName = {{BinaryOperator::Plus, "Plus"},
                                                                {BinaryOperator::Minus, "Minus"},
                                                                {BinaryOperator::BitNot, "BitNot"},
                                                                {BinaryOperator::Not, "Not"},
                                                                {BinaryOperator::Multiply, "Multiply"},
                                                                {BinaryOperator::Divide, "Divide"},
                                                                {BinaryOperator::Modulus, "Modulus"},
                                                                {BinaryOperator::Power, "Power"},
                                                                {BinaryOperator::RightShiftArithmetic,
                                                                 "RightShiftArithmetic"},
                                                                {BinaryOperator::LeftShiftArithmetic,
                                                                 "LeftShiftArithmetic"},
                                                                {BinaryOperator::RightShiftLogical,
                                                                 "RightShiftLogical"},
                                                                {BinaryOperator::LessThan, "LessThan"},
                                                                {BinaryOperator::MoreThan, "MoreThan"},
                                                                {BinaryOperator::LessThanEquals, "LessThanEquals"},
                                                                {BinaryOperator::GreaterThanEquals,
                                                                 "GreaterThanEquals"},
                                                                {BinaryOperator::Equals, "Equals"},
                                                                {BinaryOperator::NotEquals, "NotEquals"},
                                                                {BinaryOperator::IdentityEquals, "IdentityEquals"},
                                                                {BinaryOperator::IdentityNotEquals,
                                                                 "IdentityNotEquals"},
                                                                {BinaryOperator::BitAnd, "BitAnd"},
                                                                {BinaryOperator::BitXOr, "BitXOr"},
                                                                {BinaryOperator::BitOr, "BitOr"},
                                                                {BinaryOperator::And, "And"},
                                                                {BinaryOperator::Or, "Or"}};

  inline static std::map<std::string, AssignmentOperator> assignType = {{"+=", AssignmentOperator::Plus},
                                                                        {"-=", AssignmentOperator::Minus},
                                                                        {"*=", AssignmentOperator::Multiply},
                                                                        {"/=", AssignmentOperator::Divide},
                                                                        {"**=", AssignmentOperator::Power},
                                                                        {"<<=",
                                                                         AssignmentOperator::LeftShiftArithmetic},
                                                                        {">>=",
                                                                         AssignmentOperator::RightShiftArithmetic},
                                                                        {">>>=", AssignmentOperator::RightShiftLogical},
                                                                        {"&=", AssignmentOperator::BitAnd},
                                                                        {"|=", AssignmentOperator::BitOr},
                                                                        {"^=", AssignmentOperator::BitXOr},
                                                                        {"=", AssignmentOperator::Assign}};

  inline static std::map<AssignmentOperator, std::string> assignName = {{AssignmentOperator::Plus, "PlusAssign"},
                                                                        {AssignmentOperator::Minus, "MinusAssign"},
                                                                        {AssignmentOperator::Multiply,
                                                                         "MultiplyAssign"},
                                                                        {AssignmentOperator::Divide, "DivideAssign"},
                                                                        {AssignmentOperator::Power, "PowerAssign"},
                                                                        {AssignmentOperator::LeftShiftArithmetic,
                                                                         "LeftShiftArithmeticAssign"},
                                                                        {AssignmentOperator::RightShiftArithmetic,
                                                                         "RightShiftArithmeticAssign"},
                                                                        {AssignmentOperator::RightShiftLogical,
                                                                         "RightShiftLogicalAssign"},
                                                                        {AssignmentOperator::BitAnd, "BitAndAssign"},
                                                                        {AssignmentOperator::BitOr, "BitOrAssign"},
                                                                        {AssignmentOperator::BitXOr, "BitXOrAssign"},
                                                                        {AssignmentOperator::Assign, "Assign"}};
};
#endif  // JSINTERP_CONSTANTS_H
