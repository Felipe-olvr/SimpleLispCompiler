
// Generated from /workspaces/SimpleLispCompiler/SimpleLisp.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SimpleLispParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SimpleLispParser.
 */
class  SimpleLispVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SimpleLispParser.
   */
    virtual antlrcpp::Any visitProg(SimpleLispParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitExpr(SimpleLispParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitIntExpr(SimpleLispParser::IntExprContext *context) = 0;

    virtual antlrcpp::Any visitSubExpr(SimpleLispParser::SubExprContext *context) = 0;

    virtual antlrcpp::Any visitNum(SimpleLispParser::NumContext *context) = 0;


};

