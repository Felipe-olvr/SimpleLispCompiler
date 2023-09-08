
// Generated from /workspaces/SimpleLispCompiler/SimpleLisp.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SimpleLispVisitor.h"


/**
 * This class provides an empty implementation of SimpleLispVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SimpleLispBaseVisitor : public SimpleLispVisitor {
public:

  virtual antlrcpp::Any visitProg(SimpleLispParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(SimpleLispParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntExpr(SimpleLispParser::IntExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubExpr(SimpleLispParser::SubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNum(SimpleLispParser::NumContext *ctx) override {
    return visitChildren(ctx);
  }


};

