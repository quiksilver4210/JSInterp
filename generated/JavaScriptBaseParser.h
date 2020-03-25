//
// Created by quiks on 20.03.2020.
//

#ifndef JSINTERP_JAVASCRIPTBASEPARSER_H
#define JSINTERP_JAVASCRIPTBASEPARSER_H
#pragma once

#include "antlr4-runtime.h"

class JavaScriptBaseParser : public antlr4::Parser {
public:
  JavaScriptBaseParser(antlr4::TokenStream *input);
  bool p(std::string str);
  bool prev(std::string str);
  bool n(std::string str);
  bool next(std::string str);
  bool notLineTerminator();
  bool notOpenBraceAndNotFunction();
  bool closeBrace();
  bool here(int type);
  bool lineTerminatorAhead();
};
#endif // JSINTERP_JAVASCRIPTBASEPARSER_H
