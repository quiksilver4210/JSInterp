project(JSInterp)
cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
set(GrammarGenerated
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptLexer.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptParser.cpp
        src/JavaScriptVisitor/JavaScriptParserBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptParserVisitor.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptParserListener.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptBaseLexer.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptBaseParser.cpp
        src/AstTree/AstNodes.cpp
        src/AstTree/AstVisitor.cpp src/AstTree/AstVisitor.h src/AstTree/AstNodes.h)

include_directories(${PROJECT_SOURCE_DIR}/generated)

add_executable(${PROJECT_NAME} src/main.cpp ${GrammarGenerated} src/AstTree/Utils.cpp src/AstTree/AstNodes.cpp)

target_link_libraries(${PROJECT_NAME} /usr/lib/libantlr4-runtime.a)



