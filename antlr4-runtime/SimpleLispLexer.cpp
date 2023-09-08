
// Generated from /workspaces/SimpleLispCompiler/SimpleLisp.g4 by ANTLR 4.9.2


#include "SimpleLispLexer.h"


using namespace antlr4;


SimpleLispLexer::SimpleLispLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SimpleLispLexer::~SimpleLispLexer() {
  delete _interpreter;
}

std::string SimpleLispLexer::getGrammarFileName() const {
  return "SimpleLisp.g4";
}

const std::vector<std::string>& SimpleLispLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& SimpleLispLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& SimpleLispLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& SimpleLispLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& SimpleLispLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> SimpleLispLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& SimpleLispLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> SimpleLispLexer::_decisionToDFA;
atn::PredictionContextCache SimpleLispLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SimpleLispLexer::_atn;
std::vector<uint16_t> SimpleLispLexer::_serializedATN;

std::vector<std::string> SimpleLispLexer::_ruleNames = {
  "T__0", "T__1", "OP", "NEWLINE", "INT", "FLOAT", "WHITESPACE"
};

std::vector<std::string> SimpleLispLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> SimpleLispLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> SimpleLispLexer::_literalNames = {
  "", "'('", "')'", "", "", "", "", "' '"
};

std::vector<std::string> SimpleLispLexer::_symbolicNames = {
  "", "", "", "OP", "NEWLINE", "INT", "FLOAT", "WHITESPACE"
};

dfa::Vocabulary SimpleLispLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SimpleLispLexer::_tokenNames;

SimpleLispLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
       0x2, 0x9, 0x29, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
       0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 
       0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x6, 0x5, 0x19, 0xa, 0x5, 
       0xd, 0x5, 0xe, 0x5, 0x1a, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 
       0x20, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x21, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x2, 0x2, 0x9, 0x3, 0x3, 0x5, 
       0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x3, 0x2, 
       0x5, 0x5, 0x2, 0x2c, 0x2d, 0x2f, 0x2f, 0x31, 0x31, 0x4, 0x2, 0xc, 
       0xc, 0xf, 0xf, 0x3, 0x2, 0x32, 0x3b, 0x2, 0x2a, 0x2, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x3, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0x5, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x9, 0x18, 0x3, 0x2, 0x2, 0x2, 0xb, 0x1f, 0x3, 
       0x2, 0x2, 0x2, 0xd, 0x23, 0x3, 0x2, 0x2, 0x2, 0xf, 0x27, 0x3, 0x2, 
       0x2, 0x2, 0x11, 0x12, 0x7, 0x2a, 0x2, 0x2, 0x12, 0x4, 0x3, 0x2, 0x2, 
       0x2, 0x13, 0x14, 0x7, 0x2b, 0x2, 0x2, 0x14, 0x6, 0x3, 0x2, 0x2, 0x2, 
       0x15, 0x16, 0x9, 0x2, 0x2, 0x2, 0x16, 0x8, 0x3, 0x2, 0x2, 0x2, 0x17, 
       0x19, 0x9, 0x3, 0x2, 0x2, 0x18, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 
       0x3, 0x2, 0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 
       0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x8, 0x5, 
       0x2, 0x2, 0x1d, 0xa, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x20, 0x9, 0x4, 0x2, 
       0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x3, 0x2, 0x2, 0x2, 
       0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 
       0xc, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x5, 0xb, 0x6, 0x2, 0x24, 0x25, 
       0x7, 0x30, 0x2, 0x2, 0x25, 0x26, 0x5, 0xb, 0x6, 0x2, 0x26, 0xe, 0x3, 
       0x2, 0x2, 0x2, 0x27, 0x28, 0x7, 0x22, 0x2, 0x2, 0x28, 0x10, 0x3, 
       0x2, 0x2, 0x2, 0x5, 0x2, 0x1a, 0x21, 0x3, 0x8, 0x2, 0x2, 
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

SimpleLispLexer::Initializer SimpleLispLexer::_init;