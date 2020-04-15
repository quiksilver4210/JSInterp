//
// Created by quiks on 14.04.2020.
//

#ifndef JSINTERP_ASTNODES_H
#define JSINTERP_ASTNODES_H

#include "AstBase.h"
class AstVisitor;
class AstNode {
 public:
  NodeType type;
  int start;
  int stop;
  void setPosition(int st, int sp) {
    start = st;
    stop = sp;
  }
  virtual void accept(AstVisitor* visitor){};
};
#endif  // JSINTERP_ASTNODES_H
