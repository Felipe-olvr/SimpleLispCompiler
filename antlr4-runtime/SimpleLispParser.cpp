
// Generated from /workspaces/SimpleLispCompiler/SimpleLisp.g4 by ANTLR 4.9.2


#include "SimpleLispVisitor.h"

#include "SimpleLispParser.h"


using namespace antlrcpp;
using namespace antlr4;

SimpleLispParser::SimpleLispParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SimpleLispParser::~SimpleLispParser() {
  delete _interpreter;
}

std::string SimpleLispParser::getGrammarFileName() const {
  return "SimpleLisp.g4";
}

const std::vector<std::string>& SimpleLispParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SimpleLispParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

SimpleLispParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleLispParser::ExprContext* SimpleLispParser::ProgContext::expr() {
  return getRuleContext<SimpleLispParser::ExprContext>(0);
}

tree::TerminalNode* SimpleLispParser::ProgContext::EOF() {
  return getToken(SimpleLispParser::EOF, 0);
}


size_t SimpleLispParser::ProgContext::getRuleIndex() const {
  return SimpleLispParser::RuleProg;
}


antlrcpp::Any SimpleLispParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLispVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

SimpleLispParser::ProgContext* SimpleLispParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, SimpleLispParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(10);
    expr();
    setState(11);
    match(SimpleLispParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

SimpleLispParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleLispParser::IntExprContext* SimpleLispParser::ExprContext::intExpr() {
  return getRuleContext<SimpleLispParser::IntExprContext>(0);
}


size_t SimpleLispParser::ExprContext::getRuleIndex() const {
  return SimpleLispParser::RuleExpr;
}


antlrcpp::Any SimpleLispParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLispVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

SimpleLispParser::ExprContext* SimpleLispParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 2, SimpleLispParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13);
    match(SimpleLispParser::T__0);
    setState(14);
    intExpr();
    setState(15);
    match(SimpleLispParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntExprContext ------------------------------------------------------------------

SimpleLispParser::IntExprContext::IntExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleLispParser::IntExprContext::OP() {
  return getToken(SimpleLispParser::OP, 0);
}

std::vector<tree::TerminalNode *> SimpleLispParser::IntExprContext::WHITESPACE() {
  return getTokens(SimpleLispParser::WHITESPACE);
}

tree::TerminalNode* SimpleLispParser::IntExprContext::WHITESPACE(size_t i) {
  return getToken(SimpleLispParser::WHITESPACE, i);
}

std::vector<SimpleLispParser::SubExprContext *> SimpleLispParser::IntExprContext::subExpr() {
  return getRuleContexts<SimpleLispParser::SubExprContext>();
}

SimpleLispParser::SubExprContext* SimpleLispParser::IntExprContext::subExpr(size_t i) {
  return getRuleContext<SimpleLispParser::SubExprContext>(i);
}


size_t SimpleLispParser::IntExprContext::getRuleIndex() const {
  return SimpleLispParser::RuleIntExpr;
}


antlrcpp::Any SimpleLispParser::IntExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLispVisitor*>(visitor))
    return parserVisitor->visitIntExpr(this);
  else
    return visitor->visitChildren(this);
}

SimpleLispParser::IntExprContext* SimpleLispParser::intExpr() {
  IntExprContext *_localctx = _tracker.createInstance<IntExprContext>(_ctx, getState());
  enterRule(_localctx, 4, SimpleLispParser::RuleIntExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    match(SimpleLispParser::OP);
    setState(18);
    match(SimpleLispParser::WHITESPACE);
    setState(19);
    subExpr();
    setState(20);
    match(SimpleLispParser::WHITESPACE);
    setState(21);
    subExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubExprContext ------------------------------------------------------------------

SimpleLispParser::SubExprContext::SubExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleLispParser::ExprContext* SimpleLispParser::SubExprContext::expr() {
  return getRuleContext<SimpleLispParser::ExprContext>(0);
}

SimpleLispParser::NumContext* SimpleLispParser::SubExprContext::num() {
  return getRuleContext<SimpleLispParser::NumContext>(0);
}


size_t SimpleLispParser::SubExprContext::getRuleIndex() const {
  return SimpleLispParser::RuleSubExpr;
}


antlrcpp::Any SimpleLispParser::SubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLispVisitor*>(visitor))
    return parserVisitor->visitSubExpr(this);
  else
    return visitor->visitChildren(this);
}

SimpleLispParser::SubExprContext* SimpleLispParser::subExpr() {
  SubExprContext *_localctx = _tracker.createInstance<SubExprContext>(_ctx, getState());
  enterRule(_localctx, 6, SimpleLispParser::RuleSubExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(25);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleLispParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(23);
        expr();
        break;
      }

      case SimpleLispParser::INT:
      case SimpleLispParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(24);
        num();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumContext ------------------------------------------------------------------

SimpleLispParser::NumContext::NumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleLispParser::NumContext::INT() {
  return getToken(SimpleLispParser::INT, 0);
}

tree::TerminalNode* SimpleLispParser::NumContext::FLOAT() {
  return getToken(SimpleLispParser::FLOAT, 0);
}


size_t SimpleLispParser::NumContext::getRuleIndex() const {
  return SimpleLispParser::RuleNum;
}


antlrcpp::Any SimpleLispParser::NumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleLispVisitor*>(visitor))
    return parserVisitor->visitNum(this);
  else
    return visitor->visitChildren(this);
}

SimpleLispParser::NumContext* SimpleLispParser::num() {
  NumContext *_localctx = _tracker.createInstance<NumContext>(_ctx, getState());
  enterRule(_localctx, 8, SimpleLispParser::RuleNum);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
    _la = _input->LA(1);
    if (!(_la == SimpleLispParser::INT

    || _la == SimpleLispParser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SimpleLispParser::_decisionToDFA;
atn::PredictionContextCache SimpleLispParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SimpleLispParser::_atn;
std::vector<uint16_t> SimpleLispParser::_serializedATN;

std::vector<std::string> SimpleLispParser::_ruleNames = {
  "prog", "expr", "intExpr", "subExpr", "num"
};

std::vector<std::string> SimpleLispParser::_literalNames = {
  "", "'('", "')'", "", "", "", "", "' '"
};

std::vector<std::string> SimpleLispParser::_symbolicNames = {
  "", "", "", "OP", "NEWLINE", "INT", "FLOAT", "WHITESPACE"
};

dfa::Vocabulary SimpleLispParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SimpleLispParser::_tokenNames;

SimpleLispParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x9, 0x20, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
       0x5, 0x5, 0x5, 0x1c, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x2, 
       0x2, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x3, 0x3, 0x2, 0x7, 0x8, 
       0x2, 0x1b, 0x2, 0xc, 0x3, 0x2, 0x2, 0x2, 0x4, 0xf, 0x3, 0x2, 0x2, 
       0x2, 0x6, 0x13, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1b, 0x3, 0x2, 0x2, 0x2, 
       0xa, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x5, 0x4, 0x3, 0x2, 0xd, 
       0xe, 0x7, 0x2, 0x2, 0x3, 0xe, 0x3, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 
       0x7, 0x3, 0x2, 0x2, 0x10, 0x11, 0x5, 0x6, 0x4, 0x2, 0x11, 0x12, 0x7, 
       0x4, 0x2, 0x2, 0x12, 0x5, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x7, 0x5, 
       0x2, 0x2, 0x14, 0x15, 0x7, 0x9, 0x2, 0x2, 0x15, 0x16, 0x5, 0x8, 0x5, 
       0x2, 0x16, 0x17, 0x7, 0x9, 0x2, 0x2, 0x17, 0x18, 0x5, 0x8, 0x5, 0x2, 
       0x18, 0x7, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1c, 0x5, 0x4, 0x3, 0x2, 0x1a, 
       0x1c, 0x5, 0xa, 0x6, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1a, 
       0x3, 0x2, 0x2, 0x2, 0x1c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x9, 
       0x2, 0x2, 0x2, 0x1e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3, 0x1b, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SimpleLispParser::Initializer SimpleLispParser::_init;
