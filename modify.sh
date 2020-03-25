#!/bin/bash
LEXERCPP=https://raw.githubusercontent.com/antlr/grammars-v4/master/javascript/javascript/Cpp/JavaScriptBaseLexer.cpp
LEXERH=https://raw.githubusercontent.com/antlr/grammars-v4/master/javascript/javascript/Cpp/JavaScriptBaseLexer.h
PARSERCPP=https://raw.githubusercontent.com/antlr/grammars-v4/master/javascript/javascript/Cpp/JavaScriptBaseParser.cpp
PARSERH=https://github.com/antlr/grammars-v4/blob/master/javascript/javascript/Cpp/JavaScriptBaseParser.h
PITCHSED=https://raw.githubusercontent.com/antlr/grammars-v4/master/javascript/javascript/Cpp/pitch.sed

wget -P ./generated $LEXERCPP $LEXERH $PARSERCPP $PARSERH

cd ./grammar
wget $PITCHSED
sed -i -f pitch.sed JavaScriptParser.g4
sed -i -f pitch.sed JavaScriptLexer.g4