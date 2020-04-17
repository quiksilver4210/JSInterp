project(Tests)
SET(CMAKE_CXX_STANDARD 17)

include_directories(../src/Ast)
include_directories(../src/JavaScriptVisitor)

set(GenDIR ${PROJECT_SOURCE_DIR}/../generated)
include_directories(${GenDIR})
link_libraries(stdc++fs)
set(GrammarGenerated
        ${GenDIR}/JavaScriptLexer.cpp
        ${GenDIR}/JavaScriptParser.cpp
        ../src/JavaScriptVisitor/JavaScriptParserBaseVisitor.cpp
        ${GenDIR}/JavaScriptParserVisitor.cpp
        ${GenDIR}/JavaScriptParserListener.cpp
        ${GenDIR}/JavaScriptBaseLexer.cpp
        ${GenDIR}/JavaScriptBaseParser.cpp
        ../src/Ast/AstNodes.cpp
        ../src/Ast/AstVisitor.cpp ../src/Ast/AstVisitor.h ../src/Ast/AstBase.h)

add_executable(${PROJECT_NAME} main.cpp Tests.cpp TestUtils.h ${GrammarGenerated} TestUtils.cpp)
enable_testing()
target_link_libraries(${PROJECT_NAME} gtest gtest_main)
target_link_libraries(${PROJECT_NAME} /usr/lib/libantlr4-runtime.a)
