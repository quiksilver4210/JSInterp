project(JSInterp)
cmake_minimum_required(VERSION 3.15)
set(GrammarGenerated
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptLexer.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptParser.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptParserBaseListener.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptParserBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptParserVisitor.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptParserListener.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptBaseLexer.cpp
        ${PROJECT_SOURCE_DIR}/generated/JavaScriptBaseParser.cpp
        )

include_directories(${PROJECT_SOURCE_DIR}/generated)

add_executable(${PROJECT_NAME} main.cpp ${GrammarGenerated})

target_link_libraries(${PROJECT_NAME} /usr/lib/libantlr4-runtime.a)



