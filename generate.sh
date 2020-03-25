#!/bin/bash
set -o errexit
LOCATION=/home/quiks/antlr-4.8-complete.jar
java -jar $LOCATION -Dlanguage=Cpp -listener -visitor -o generated/ grammar/JavaScriptLexer.g4 \
grammar/JavaScriptParser.g4
