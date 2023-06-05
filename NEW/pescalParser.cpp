
// Generated from pescal.g4 by ANTLR 4.13.0


#include "pescalVisitor.h"

#include "pescalParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PescalParserStaticData final {
  PescalParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PescalParserStaticData(const PescalParserStaticData&) = delete;
  PescalParserStaticData(PescalParserStaticData&&) = delete;
  PescalParserStaticData& operator=(const PescalParserStaticData&) = delete;
  PescalParserStaticData& operator=(PescalParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pescalParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PescalParserStaticData *pescalParserStaticData = nullptr;

void pescalParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pescalParserStaticData != nullptr) {
    return;
  }
#else
  assert(pescalParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PescalParserStaticData>(
    std::vector<std::string>{
      "program", "identifier", "block", "unsignedNumber", "unsignedInteger", 
      "unsignedReal", "sign", "string", "statement", "unlabelledStatement", 
      "simpleStatement", "assignmentStatement", "variable", "expression", 
      "relationaloperator", "simpleExpression", "additiveoperator", "term", 
      "multiplicativeoperator", "signedFactor", "factor", "unsignedConstant", 
      "parameterList", "procedureStatement", "actualParameter", "emptyStatement_", 
      "structuredStatement", "compoundStatement", "statements"
    },
    std::vector<std::string>{
      "", "'AND'", "'BEGIN'", "'DIV'", "'END'", "'MOD'", "'NIL'", "'NOT'", 
      "'OR'", "'+'", "'-'", "'*'", "'/'", "':='", "','", "';'", "':'", "'='", 
      "'<>'", "'<'", "'<='", "'>='", "'>'", "'('", "')'", "'^'", "'.'"
    },
    std::vector<std::string>{
      "", "AND", "BEGIN", "DIV", "END", "MOD", "NIL", "NOT", "OR", "PLUS", 
      "MINUS", "STAR", "SLASH", "ASSIGN", "COMMA", "SEMI", "COLON", "EQUAL", 
      "NOT_EQUAL", "LT", "LE", "GE", "GT", "LPAREN", "RPAREN", "POWER", 
      "DOT", "WS", "IDENT", "STRING_LITERAL", "NUM_INT", "NUM_REAL"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,31,195,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,3,3,69,8,3,1,4,1,4,1,5,1,5,
  	1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,3,9,83,8,9,1,10,1,10,1,10,3,10,88,8,10,
  	1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,5,12,98,8,12,10,12,12,12,101,
  	9,12,1,12,1,12,1,12,5,12,106,8,12,10,12,12,12,109,9,12,1,12,1,12,5,12,
  	113,8,12,10,12,12,12,116,9,12,1,13,1,13,1,13,1,13,3,13,122,8,13,1,14,
  	1,14,1,15,1,15,1,15,1,15,3,15,130,8,15,1,16,1,16,1,17,1,17,1,17,1,17,
  	3,17,138,8,17,1,18,1,18,1,19,3,19,143,8,19,1,19,1,19,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,3,20,155,8,20,1,21,1,21,1,21,3,21,160,8,21,1,22,
  	1,22,1,22,5,22,165,8,22,10,22,12,22,168,9,22,1,23,1,23,1,23,1,23,1,23,
  	3,23,175,8,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,27,1,28,
  	1,28,1,28,5,28,190,8,28,10,28,12,28,193,9,28,1,28,0,0,29,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,
  	0,4,1,0,9,10,1,0,17,22,1,0,8,10,5,0,1,1,3,3,5,5,11,12,25,25,186,0,58,
  	1,0,0,0,2,62,1,0,0,0,4,64,1,0,0,0,6,68,1,0,0,0,8,70,1,0,0,0,10,72,1,0,
  	0,0,12,74,1,0,0,0,14,76,1,0,0,0,16,78,1,0,0,0,18,82,1,0,0,0,20,87,1,0,
  	0,0,22,89,1,0,0,0,24,93,1,0,0,0,26,117,1,0,0,0,28,123,1,0,0,0,30,125,
  	1,0,0,0,32,131,1,0,0,0,34,133,1,0,0,0,36,139,1,0,0,0,38,142,1,0,0,0,40,
  	154,1,0,0,0,42,159,1,0,0,0,44,161,1,0,0,0,46,169,1,0,0,0,48,176,1,0,0,
  	0,50,178,1,0,0,0,52,180,1,0,0,0,54,182,1,0,0,0,56,186,1,0,0,0,58,59,3,
  	4,2,0,59,60,5,26,0,0,60,61,5,0,0,1,61,1,1,0,0,0,62,63,5,28,0,0,63,3,1,
  	0,0,0,64,65,3,54,27,0,65,5,1,0,0,0,66,69,3,8,4,0,67,69,3,10,5,0,68,66,
  	1,0,0,0,68,67,1,0,0,0,69,7,1,0,0,0,70,71,5,30,0,0,71,9,1,0,0,0,72,73,
  	5,31,0,0,73,11,1,0,0,0,74,75,7,0,0,0,75,13,1,0,0,0,76,77,5,29,0,0,77,
  	15,1,0,0,0,78,79,3,18,9,0,79,17,1,0,0,0,80,83,3,20,10,0,81,83,3,52,26,
  	0,82,80,1,0,0,0,82,81,1,0,0,0,83,19,1,0,0,0,84,88,3,22,11,0,85,88,3,46,
  	23,0,86,88,3,50,25,0,87,84,1,0,0,0,87,85,1,0,0,0,87,86,1,0,0,0,88,21,
  	1,0,0,0,89,90,3,24,12,0,90,91,5,13,0,0,91,92,3,26,13,0,92,23,1,0,0,0,
  	93,114,3,2,1,0,94,99,3,26,13,0,95,96,5,14,0,0,96,98,3,26,13,0,97,95,1,
  	0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,113,1,0,0,0,101,
  	99,1,0,0,0,102,107,3,26,13,0,103,104,5,14,0,0,104,106,3,26,13,0,105,103,
  	1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,113,1,0,0,
  	0,109,107,1,0,0,0,110,111,5,26,0,0,111,113,3,2,1,0,112,94,1,0,0,0,112,
  	102,1,0,0,0,112,110,1,0,0,0,113,116,1,0,0,0,114,112,1,0,0,0,114,115,1,
  	0,0,0,115,25,1,0,0,0,116,114,1,0,0,0,117,121,3,30,15,0,118,119,3,28,14,
  	0,119,120,3,26,13,0,120,122,1,0,0,0,121,118,1,0,0,0,121,122,1,0,0,0,122,
  	27,1,0,0,0,123,124,7,1,0,0,124,29,1,0,0,0,125,129,3,34,17,0,126,127,3,
  	32,16,0,127,128,3,30,15,0,128,130,1,0,0,0,129,126,1,0,0,0,129,130,1,0,
  	0,0,130,31,1,0,0,0,131,132,7,2,0,0,132,33,1,0,0,0,133,137,3,38,19,0,134,
  	135,3,36,18,0,135,136,3,34,17,0,136,138,1,0,0,0,137,134,1,0,0,0,137,138,
  	1,0,0,0,138,35,1,0,0,0,139,140,7,3,0,0,140,37,1,0,0,0,141,143,7,0,0,0,
  	142,141,1,0,0,0,142,143,1,0,0,0,143,144,1,0,0,0,144,145,3,40,20,0,145,
  	39,1,0,0,0,146,155,3,24,12,0,147,148,5,23,0,0,148,149,3,26,13,0,149,150,
  	5,24,0,0,150,155,1,0,0,0,151,155,3,42,21,0,152,153,5,7,0,0,153,155,3,
  	40,20,0,154,146,1,0,0,0,154,147,1,0,0,0,154,151,1,0,0,0,154,152,1,0,0,
  	0,155,41,1,0,0,0,156,160,3,6,3,0,157,160,3,14,7,0,158,160,5,6,0,0,159,
  	156,1,0,0,0,159,157,1,0,0,0,159,158,1,0,0,0,160,43,1,0,0,0,161,166,3,
  	48,24,0,162,163,5,14,0,0,163,165,3,48,24,0,164,162,1,0,0,0,165,168,1,
  	0,0,0,166,164,1,0,0,0,166,167,1,0,0,0,167,45,1,0,0,0,168,166,1,0,0,0,
  	169,174,3,2,1,0,170,171,5,23,0,0,171,172,3,44,22,0,172,173,5,24,0,0,173,
  	175,1,0,0,0,174,170,1,0,0,0,174,175,1,0,0,0,175,47,1,0,0,0,176,177,3,
  	26,13,0,177,49,1,0,0,0,178,179,1,0,0,0,179,51,1,0,0,0,180,181,3,54,27,
  	0,181,53,1,0,0,0,182,183,5,2,0,0,183,184,3,56,28,0,184,185,5,4,0,0,185,
  	55,1,0,0,0,186,191,3,16,8,0,187,188,5,15,0,0,188,190,3,16,8,0,189,187,
  	1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,57,1,0,0,
  	0,193,191,1,0,0,0,16,68,82,87,99,107,112,114,121,129,137,142,154,159,
  	166,174,191
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pescalParserStaticData = staticData.release();
}

}

pescalParser::pescalParser(TokenStream *input) : pescalParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

pescalParser::pescalParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  pescalParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *pescalParserStaticData->atn, pescalParserStaticData->decisionToDFA, pescalParserStaticData->sharedContextCache, options);
}

pescalParser::~pescalParser() {
  delete _interpreter;
}

const atn::ATN& pescalParser::getATN() const {
  return *pescalParserStaticData->atn;
}

std::string pescalParser::getGrammarFileName() const {
  return "pescal.g4";
}

const std::vector<std::string>& pescalParser::getRuleNames() const {
  return pescalParserStaticData->ruleNames;
}

const dfa::Vocabulary& pescalParser::getVocabulary() const {
  return pescalParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView pescalParser::getSerializedATN() const {
  return pescalParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

pescalParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::BlockContext* pescalParser::ProgramContext::block() {
  return getRuleContext<pescalParser::BlockContext>(0);
}

tree::TerminalNode* pescalParser::ProgramContext::DOT() {
  return getToken(pescalParser::DOT, 0);
}

tree::TerminalNode* pescalParser::ProgramContext::EOF() {
  return getToken(pescalParser::EOF, 0);
}


size_t pescalParser::ProgramContext::getRuleIndex() const {
  return pescalParser::RuleProgram;
}


std::any pescalParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::ProgramContext* pescalParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, pescalParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    block();
    setState(59);
    match(pescalParser::DOT);
    setState(60);
    match(pescalParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

pescalParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pescalParser::IdentifierContext::IDENT() {
  return getToken(pescalParser::IDENT, 0);
}


size_t pescalParser::IdentifierContext::getRuleIndex() const {
  return pescalParser::RuleIdentifier;
}


std::any pescalParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::IdentifierContext* pescalParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 2, pescalParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(pescalParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

pescalParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::CompoundStatementContext* pescalParser::BlockContext::compoundStatement() {
  return getRuleContext<pescalParser::CompoundStatementContext>(0);
}


size_t pescalParser::BlockContext::getRuleIndex() const {
  return pescalParser::RuleBlock;
}


std::any pescalParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::BlockContext* pescalParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, pescalParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedNumberContext ------------------------------------------------------------------

pescalParser::UnsignedNumberContext::UnsignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::UnsignedIntegerContext* pescalParser::UnsignedNumberContext::unsignedInteger() {
  return getRuleContext<pescalParser::UnsignedIntegerContext>(0);
}

pescalParser::UnsignedRealContext* pescalParser::UnsignedNumberContext::unsignedReal() {
  return getRuleContext<pescalParser::UnsignedRealContext>(0);
}


size_t pescalParser::UnsignedNumberContext::getRuleIndex() const {
  return pescalParser::RuleUnsignedNumber;
}


std::any pescalParser::UnsignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumber(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::UnsignedNumberContext* pescalParser::unsignedNumber() {
  UnsignedNumberContext *_localctx = _tracker.createInstance<UnsignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 6, pescalParser::RuleUnsignedNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pescalParser::NUM_INT: {
        enterOuterAlt(_localctx, 1);
        setState(66);
        unsignedInteger();
        break;
      }

      case pescalParser::NUM_REAL: {
        enterOuterAlt(_localctx, 2);
        setState(67);
        unsignedReal();
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

//----------------- UnsignedIntegerContext ------------------------------------------------------------------

pescalParser::UnsignedIntegerContext::UnsignedIntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pescalParser::UnsignedIntegerContext::NUM_INT() {
  return getToken(pescalParser::NUM_INT, 0);
}


size_t pescalParser::UnsignedIntegerContext::getRuleIndex() const {
  return pescalParser::RuleUnsignedInteger;
}


std::any pescalParser::UnsignedIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitUnsignedInteger(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::UnsignedIntegerContext* pescalParser::unsignedInteger() {
  UnsignedIntegerContext *_localctx = _tracker.createInstance<UnsignedIntegerContext>(_ctx, getState());
  enterRule(_localctx, 8, pescalParser::RuleUnsignedInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(pescalParser::NUM_INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedRealContext ------------------------------------------------------------------

pescalParser::UnsignedRealContext::UnsignedRealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pescalParser::UnsignedRealContext::NUM_REAL() {
  return getToken(pescalParser::NUM_REAL, 0);
}


size_t pescalParser::UnsignedRealContext::getRuleIndex() const {
  return pescalParser::RuleUnsignedReal;
}


std::any pescalParser::UnsignedRealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitUnsignedReal(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::UnsignedRealContext* pescalParser::unsignedReal() {
  UnsignedRealContext *_localctx = _tracker.createInstance<UnsignedRealContext>(_ctx, getState());
  enterRule(_localctx, 10, pescalParser::RuleUnsignedReal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(pescalParser::NUM_REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

pescalParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pescalParser::SignContext::PLUS() {
  return getToken(pescalParser::PLUS, 0);
}

tree::TerminalNode* pescalParser::SignContext::MINUS() {
  return getToken(pescalParser::MINUS, 0);
}


size_t pescalParser::SignContext::getRuleIndex() const {
  return pescalParser::RuleSign;
}


std::any pescalParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::SignContext* pescalParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 12, pescalParser::RuleSign);
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
    setState(74);
    _la = _input->LA(1);
    if (!(_la == pescalParser::PLUS

    || _la == pescalParser::MINUS)) {
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

//----------------- StringContext ------------------------------------------------------------------

pescalParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pescalParser::StringContext::STRING_LITERAL() {
  return getToken(pescalParser::STRING_LITERAL, 0);
}


size_t pescalParser::StringContext::getRuleIndex() const {
  return pescalParser::RuleString;
}


std::any pescalParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::StringContext* pescalParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 14, pescalParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(pescalParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

pescalParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::UnlabelledStatementContext* pescalParser::StatementContext::unlabelledStatement() {
  return getRuleContext<pescalParser::UnlabelledStatementContext>(0);
}


size_t pescalParser::StatementContext::getRuleIndex() const {
  return pescalParser::RuleStatement;
}


std::any pescalParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::StatementContext* pescalParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 16, pescalParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    unlabelledStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnlabelledStatementContext ------------------------------------------------------------------

pescalParser::UnlabelledStatementContext::UnlabelledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::SimpleStatementContext* pescalParser::UnlabelledStatementContext::simpleStatement() {
  return getRuleContext<pescalParser::SimpleStatementContext>(0);
}

pescalParser::StructuredStatementContext* pescalParser::UnlabelledStatementContext::structuredStatement() {
  return getRuleContext<pescalParser::StructuredStatementContext>(0);
}


size_t pescalParser::UnlabelledStatementContext::getRuleIndex() const {
  return pescalParser::RuleUnlabelledStatement;
}


std::any pescalParser::UnlabelledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitUnlabelledStatement(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::UnlabelledStatementContext* pescalParser::unlabelledStatement() {
  UnlabelledStatementContext *_localctx = _tracker.createInstance<UnlabelledStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, pescalParser::RuleUnlabelledStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pescalParser::END:
      case pescalParser::SEMI:
      case pescalParser::IDENT: {
        enterOuterAlt(_localctx, 1);
        setState(80);
        simpleStatement();
        break;
      }

      case pescalParser::BEGIN: {
        enterOuterAlt(_localctx, 2);
        setState(81);
        structuredStatement();
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

//----------------- SimpleStatementContext ------------------------------------------------------------------

pescalParser::SimpleStatementContext::SimpleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::AssignmentStatementContext* pescalParser::SimpleStatementContext::assignmentStatement() {
  return getRuleContext<pescalParser::AssignmentStatementContext>(0);
}

pescalParser::ProcedureStatementContext* pescalParser::SimpleStatementContext::procedureStatement() {
  return getRuleContext<pescalParser::ProcedureStatementContext>(0);
}

pescalParser::EmptyStatement_Context* pescalParser::SimpleStatementContext::emptyStatement_() {
  return getRuleContext<pescalParser::EmptyStatement_Context>(0);
}


size_t pescalParser::SimpleStatementContext::getRuleIndex() const {
  return pescalParser::RuleSimpleStatement;
}


std::any pescalParser::SimpleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitSimpleStatement(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::SimpleStatementContext* pescalParser::simpleStatement() {
  SimpleStatementContext *_localctx = _tracker.createInstance<SimpleStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, pescalParser::RuleSimpleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(87);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(84);
      assignmentStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(85);
      procedureStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(86);
      emptyStatement_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

pescalParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::VariableContext* pescalParser::AssignmentStatementContext::variable() {
  return getRuleContext<pescalParser::VariableContext>(0);
}

tree::TerminalNode* pescalParser::AssignmentStatementContext::ASSIGN() {
  return getToken(pescalParser::ASSIGN, 0);
}

pescalParser::ExpressionContext* pescalParser::AssignmentStatementContext::expression() {
  return getRuleContext<pescalParser::ExpressionContext>(0);
}


size_t pescalParser::AssignmentStatementContext::getRuleIndex() const {
  return pescalParser::RuleAssignmentStatement;
}


std::any pescalParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::AssignmentStatementContext* pescalParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, pescalParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    variable();
    setState(90);
    match(pescalParser::ASSIGN);
    setState(91);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

pescalParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pescalParser::IdentifierContext *> pescalParser::VariableContext::identifier() {
  return getRuleContexts<pescalParser::IdentifierContext>();
}

pescalParser::IdentifierContext* pescalParser::VariableContext::identifier(size_t i) {
  return getRuleContext<pescalParser::IdentifierContext>(i);
}

std::vector<pescalParser::ExpressionContext *> pescalParser::VariableContext::expression() {
  return getRuleContexts<pescalParser::ExpressionContext>();
}

pescalParser::ExpressionContext* pescalParser::VariableContext::expression(size_t i) {
  return getRuleContext<pescalParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> pescalParser::VariableContext::DOT() {
  return getTokens(pescalParser::DOT);
}

tree::TerminalNode* pescalParser::VariableContext::DOT(size_t i) {
  return getToken(pescalParser::DOT, i);
}

std::vector<tree::TerminalNode *> pescalParser::VariableContext::COMMA() {
  return getTokens(pescalParser::COMMA);
}

tree::TerminalNode* pescalParser::VariableContext::COMMA(size_t i) {
  return getToken(pescalParser::COMMA, i);
}


size_t pescalParser::VariableContext::getRuleIndex() const {
  return pescalParser::RuleVariable;
}


std::any pescalParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::VariableContext* pescalParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 24, pescalParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(93);
    identifier();
    setState(114);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(112);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(94);
          expression();
          setState(99);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(95);
              match(pescalParser::COMMA);
              setState(96);
              expression(); 
            }
            setState(101);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
          }
          break;
        }

        case 2: {
          setState(102);
          expression();
          setState(107);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(103);
              match(pescalParser::COMMA);
              setState(104);
              expression(); 
            }
            setState(109);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
          }
          break;
        }

        case 3: {
          setState(110);
          match(pescalParser::DOT);
          setState(111);
          identifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(116);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

pescalParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::SimpleExpressionContext* pescalParser::ExpressionContext::simpleExpression() {
  return getRuleContext<pescalParser::SimpleExpressionContext>(0);
}

pescalParser::RelationaloperatorContext* pescalParser::ExpressionContext::relationaloperator() {
  return getRuleContext<pescalParser::RelationaloperatorContext>(0);
}

pescalParser::ExpressionContext* pescalParser::ExpressionContext::expression() {
  return getRuleContext<pescalParser::ExpressionContext>(0);
}


size_t pescalParser::ExpressionContext::getRuleIndex() const {
  return pescalParser::RuleExpression;
}


std::any pescalParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::ExpressionContext* pescalParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 26, pescalParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    simpleExpression();
    setState(121);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(118);
      relationaloperator();
      setState(119);
      expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationaloperatorContext ------------------------------------------------------------------

pescalParser::RelationaloperatorContext::RelationaloperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pescalParser::RelationaloperatorContext::EQUAL() {
  return getToken(pescalParser::EQUAL, 0);
}

tree::TerminalNode* pescalParser::RelationaloperatorContext::NOT_EQUAL() {
  return getToken(pescalParser::NOT_EQUAL, 0);
}

tree::TerminalNode* pescalParser::RelationaloperatorContext::LT() {
  return getToken(pescalParser::LT, 0);
}

tree::TerminalNode* pescalParser::RelationaloperatorContext::LE() {
  return getToken(pescalParser::LE, 0);
}

tree::TerminalNode* pescalParser::RelationaloperatorContext::GE() {
  return getToken(pescalParser::GE, 0);
}

tree::TerminalNode* pescalParser::RelationaloperatorContext::GT() {
  return getToken(pescalParser::GT, 0);
}


size_t pescalParser::RelationaloperatorContext::getRuleIndex() const {
  return pescalParser::RuleRelationaloperator;
}


std::any pescalParser::RelationaloperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitRelationaloperator(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::RelationaloperatorContext* pescalParser::relationaloperator() {
  RelationaloperatorContext *_localctx = _tracker.createInstance<RelationaloperatorContext>(_ctx, getState());
  enterRule(_localctx, 28, pescalParser::RuleRelationaloperator);
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
    setState(123);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8257536) != 0))) {
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

//----------------- SimpleExpressionContext ------------------------------------------------------------------

pescalParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::TermContext* pescalParser::SimpleExpressionContext::term() {
  return getRuleContext<pescalParser::TermContext>(0);
}

pescalParser::AdditiveoperatorContext* pescalParser::SimpleExpressionContext::additiveoperator() {
  return getRuleContext<pescalParser::AdditiveoperatorContext>(0);
}

pescalParser::SimpleExpressionContext* pescalParser::SimpleExpressionContext::simpleExpression() {
  return getRuleContext<pescalParser::SimpleExpressionContext>(0);
}


size_t pescalParser::SimpleExpressionContext::getRuleIndex() const {
  return pescalParser::RuleSimpleExpression;
}


std::any pescalParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::SimpleExpressionContext* pescalParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, pescalParser::RuleSimpleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    term();
    setState(129);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(126);
      additiveoperator();
      setState(127);
      simpleExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveoperatorContext ------------------------------------------------------------------

pescalParser::AdditiveoperatorContext::AdditiveoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pescalParser::AdditiveoperatorContext::PLUS() {
  return getToken(pescalParser::PLUS, 0);
}

tree::TerminalNode* pescalParser::AdditiveoperatorContext::MINUS() {
  return getToken(pescalParser::MINUS, 0);
}

tree::TerminalNode* pescalParser::AdditiveoperatorContext::OR() {
  return getToken(pescalParser::OR, 0);
}


size_t pescalParser::AdditiveoperatorContext::getRuleIndex() const {
  return pescalParser::RuleAdditiveoperator;
}


std::any pescalParser::AdditiveoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitAdditiveoperator(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::AdditiveoperatorContext* pescalParser::additiveoperator() {
  AdditiveoperatorContext *_localctx = _tracker.createInstance<AdditiveoperatorContext>(_ctx, getState());
  enterRule(_localctx, 32, pescalParser::RuleAdditiveoperator);
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
    setState(131);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1792) != 0))) {
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

//----------------- TermContext ------------------------------------------------------------------

pescalParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::SignedFactorContext* pescalParser::TermContext::signedFactor() {
  return getRuleContext<pescalParser::SignedFactorContext>(0);
}

pescalParser::MultiplicativeoperatorContext* pescalParser::TermContext::multiplicativeoperator() {
  return getRuleContext<pescalParser::MultiplicativeoperatorContext>(0);
}

pescalParser::TermContext* pescalParser::TermContext::term() {
  return getRuleContext<pescalParser::TermContext>(0);
}


size_t pescalParser::TermContext::getRuleIndex() const {
  return pescalParser::RuleTerm;
}


std::any pescalParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::TermContext* pescalParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 34, pescalParser::RuleTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    signedFactor();
    setState(137);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(134);
      multiplicativeoperator();
      setState(135);
      term();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeoperatorContext ------------------------------------------------------------------

pescalParser::MultiplicativeoperatorContext::MultiplicativeoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pescalParser::MultiplicativeoperatorContext::STAR() {
  return getToken(pescalParser::STAR, 0);
}

tree::TerminalNode* pescalParser::MultiplicativeoperatorContext::SLASH() {
  return getToken(pescalParser::SLASH, 0);
}

tree::TerminalNode* pescalParser::MultiplicativeoperatorContext::DIV() {
  return getToken(pescalParser::DIV, 0);
}

tree::TerminalNode* pescalParser::MultiplicativeoperatorContext::MOD() {
  return getToken(pescalParser::MOD, 0);
}

tree::TerminalNode* pescalParser::MultiplicativeoperatorContext::AND() {
  return getToken(pescalParser::AND, 0);
}

tree::TerminalNode* pescalParser::MultiplicativeoperatorContext::POWER() {
  return getToken(pescalParser::POWER, 0);
}


size_t pescalParser::MultiplicativeoperatorContext::getRuleIndex() const {
  return pescalParser::RuleMultiplicativeoperator;
}


std::any pescalParser::MultiplicativeoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeoperator(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::MultiplicativeoperatorContext* pescalParser::multiplicativeoperator() {
  MultiplicativeoperatorContext *_localctx = _tracker.createInstance<MultiplicativeoperatorContext>(_ctx, getState());
  enterRule(_localctx, 36, pescalParser::RuleMultiplicativeoperator);
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
    setState(139);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33560618) != 0))) {
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

//----------------- SignedFactorContext ------------------------------------------------------------------

pescalParser::SignedFactorContext::SignedFactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::FactorContext* pescalParser::SignedFactorContext::factor() {
  return getRuleContext<pescalParser::FactorContext>(0);
}

tree::TerminalNode* pescalParser::SignedFactorContext::PLUS() {
  return getToken(pescalParser::PLUS, 0);
}

tree::TerminalNode* pescalParser::SignedFactorContext::MINUS() {
  return getToken(pescalParser::MINUS, 0);
}


size_t pescalParser::SignedFactorContext::getRuleIndex() const {
  return pescalParser::RuleSignedFactor;
}


std::any pescalParser::SignedFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitSignedFactor(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::SignedFactorContext* pescalParser::signedFactor() {
  SignedFactorContext *_localctx = _tracker.createInstance<SignedFactorContext>(_ctx, getState());
  enterRule(_localctx, 38, pescalParser::RuleSignedFactor);
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
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pescalParser::PLUS

    || _la == pescalParser::MINUS) {
      setState(141);
      _la = _input->LA(1);
      if (!(_la == pescalParser::PLUS

      || _la == pescalParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(144);
    factor();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

pescalParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::VariableContext* pescalParser::FactorContext::variable() {
  return getRuleContext<pescalParser::VariableContext>(0);
}

tree::TerminalNode* pescalParser::FactorContext::LPAREN() {
  return getToken(pescalParser::LPAREN, 0);
}

pescalParser::ExpressionContext* pescalParser::FactorContext::expression() {
  return getRuleContext<pescalParser::ExpressionContext>(0);
}

tree::TerminalNode* pescalParser::FactorContext::RPAREN() {
  return getToken(pescalParser::RPAREN, 0);
}

pescalParser::UnsignedConstantContext* pescalParser::FactorContext::unsignedConstant() {
  return getRuleContext<pescalParser::UnsignedConstantContext>(0);
}

tree::TerminalNode* pescalParser::FactorContext::NOT() {
  return getToken(pescalParser::NOT, 0);
}

pescalParser::FactorContext* pescalParser::FactorContext::factor() {
  return getRuleContext<pescalParser::FactorContext>(0);
}


size_t pescalParser::FactorContext::getRuleIndex() const {
  return pescalParser::RuleFactor;
}


std::any pescalParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::FactorContext* pescalParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 40, pescalParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pescalParser::IDENT: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        variable();
        break;
      }

      case pescalParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(147);
        match(pescalParser::LPAREN);
        setState(148);
        expression();
        setState(149);
        match(pescalParser::RPAREN);
        break;
      }

      case pescalParser::NIL:
      case pescalParser::STRING_LITERAL:
      case pescalParser::NUM_INT:
      case pescalParser::NUM_REAL: {
        enterOuterAlt(_localctx, 3);
        setState(151);
        unsignedConstant();
        break;
      }

      case pescalParser::NOT: {
        enterOuterAlt(_localctx, 4);
        setState(152);
        match(pescalParser::NOT);
        setState(153);
        factor();
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

//----------------- UnsignedConstantContext ------------------------------------------------------------------

pescalParser::UnsignedConstantContext::UnsignedConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::UnsignedNumberContext* pescalParser::UnsignedConstantContext::unsignedNumber() {
  return getRuleContext<pescalParser::UnsignedNumberContext>(0);
}

pescalParser::StringContext* pescalParser::UnsignedConstantContext::string() {
  return getRuleContext<pescalParser::StringContext>(0);
}

tree::TerminalNode* pescalParser::UnsignedConstantContext::NIL() {
  return getToken(pescalParser::NIL, 0);
}


size_t pescalParser::UnsignedConstantContext::getRuleIndex() const {
  return pescalParser::RuleUnsignedConstant;
}


std::any pescalParser::UnsignedConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitUnsignedConstant(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::UnsignedConstantContext* pescalParser::unsignedConstant() {
  UnsignedConstantContext *_localctx = _tracker.createInstance<UnsignedConstantContext>(_ctx, getState());
  enterRule(_localctx, 42, pescalParser::RuleUnsignedConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pescalParser::NUM_INT:
      case pescalParser::NUM_REAL: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        unsignedNumber();
        break;
      }

      case pescalParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(157);
        string();
        break;
      }

      case pescalParser::NIL: {
        enterOuterAlt(_localctx, 3);
        setState(158);
        match(pescalParser::NIL);
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

//----------------- ParameterListContext ------------------------------------------------------------------

pescalParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pescalParser::ActualParameterContext *> pescalParser::ParameterListContext::actualParameter() {
  return getRuleContexts<pescalParser::ActualParameterContext>();
}

pescalParser::ActualParameterContext* pescalParser::ParameterListContext::actualParameter(size_t i) {
  return getRuleContext<pescalParser::ActualParameterContext>(i);
}

std::vector<tree::TerminalNode *> pescalParser::ParameterListContext::COMMA() {
  return getTokens(pescalParser::COMMA);
}

tree::TerminalNode* pescalParser::ParameterListContext::COMMA(size_t i) {
  return getToken(pescalParser::COMMA, i);
}


size_t pescalParser::ParameterListContext::getRuleIndex() const {
  return pescalParser::RuleParameterList;
}


std::any pescalParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::ParameterListContext* pescalParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 44, pescalParser::RuleParameterList);
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
    setState(161);
    actualParameter();
    setState(166);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pescalParser::COMMA) {
      setState(162);
      match(pescalParser::COMMA);
      setState(163);
      actualParameter();
      setState(168);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureStatementContext ------------------------------------------------------------------

pescalParser::ProcedureStatementContext::ProcedureStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::IdentifierContext* pescalParser::ProcedureStatementContext::identifier() {
  return getRuleContext<pescalParser::IdentifierContext>(0);
}

tree::TerminalNode* pescalParser::ProcedureStatementContext::LPAREN() {
  return getToken(pescalParser::LPAREN, 0);
}

pescalParser::ParameterListContext* pescalParser::ProcedureStatementContext::parameterList() {
  return getRuleContext<pescalParser::ParameterListContext>(0);
}

tree::TerminalNode* pescalParser::ProcedureStatementContext::RPAREN() {
  return getToken(pescalParser::RPAREN, 0);
}


size_t pescalParser::ProcedureStatementContext::getRuleIndex() const {
  return pescalParser::RuleProcedureStatement;
}


std::any pescalParser::ProcedureStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitProcedureStatement(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::ProcedureStatementContext* pescalParser::procedureStatement() {
  ProcedureStatementContext *_localctx = _tracker.createInstance<ProcedureStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, pescalParser::RuleProcedureStatement);
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
    setState(169);
    identifier();
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pescalParser::LPAREN) {
      setState(170);
      match(pescalParser::LPAREN);
      setState(171);
      parameterList();
      setState(172);
      match(pescalParser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActualParameterContext ------------------------------------------------------------------

pescalParser::ActualParameterContext::ActualParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::ExpressionContext* pescalParser::ActualParameterContext::expression() {
  return getRuleContext<pescalParser::ExpressionContext>(0);
}


size_t pescalParser::ActualParameterContext::getRuleIndex() const {
  return pescalParser::RuleActualParameter;
}


std::any pescalParser::ActualParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitActualParameter(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::ActualParameterContext* pescalParser::actualParameter() {
  ActualParameterContext *_localctx = _tracker.createInstance<ActualParameterContext>(_ctx, getState());
  enterRule(_localctx, 48, pescalParser::RuleActualParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatement_Context ------------------------------------------------------------------

pescalParser::EmptyStatement_Context::EmptyStatement_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t pescalParser::EmptyStatement_Context::getRuleIndex() const {
  return pescalParser::RuleEmptyStatement_;
}


std::any pescalParser::EmptyStatement_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement_(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::EmptyStatement_Context* pescalParser::emptyStatement_() {
  EmptyStatement_Context *_localctx = _tracker.createInstance<EmptyStatement_Context>(_ctx, getState());
  enterRule(_localctx, 50, pescalParser::RuleEmptyStatement_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructuredStatementContext ------------------------------------------------------------------

pescalParser::StructuredStatementContext::StructuredStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pescalParser::CompoundStatementContext* pescalParser::StructuredStatementContext::compoundStatement() {
  return getRuleContext<pescalParser::CompoundStatementContext>(0);
}


size_t pescalParser::StructuredStatementContext::getRuleIndex() const {
  return pescalParser::RuleStructuredStatement;
}


std::any pescalParser::StructuredStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitStructuredStatement(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::StructuredStatementContext* pescalParser::structuredStatement() {
  StructuredStatementContext *_localctx = _tracker.createInstance<StructuredStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, pescalParser::RuleStructuredStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

pescalParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pescalParser::CompoundStatementContext::BEGIN() {
  return getToken(pescalParser::BEGIN, 0);
}

pescalParser::StatementsContext* pescalParser::CompoundStatementContext::statements() {
  return getRuleContext<pescalParser::StatementsContext>(0);
}

tree::TerminalNode* pescalParser::CompoundStatementContext::END() {
  return getToken(pescalParser::END, 0);
}


size_t pescalParser::CompoundStatementContext::getRuleIndex() const {
  return pescalParser::RuleCompoundStatement;
}


std::any pescalParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::CompoundStatementContext* pescalParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, pescalParser::RuleCompoundStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(pescalParser::BEGIN);
    setState(183);
    statements();
    setState(184);
    match(pescalParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

pescalParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pescalParser::StatementContext *> pescalParser::StatementsContext::statement() {
  return getRuleContexts<pescalParser::StatementContext>();
}

pescalParser::StatementContext* pescalParser::StatementsContext::statement(size_t i) {
  return getRuleContext<pescalParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> pescalParser::StatementsContext::SEMI() {
  return getTokens(pescalParser::SEMI);
}

tree::TerminalNode* pescalParser::StatementsContext::SEMI(size_t i) {
  return getToken(pescalParser::SEMI, i);
}


size_t pescalParser::StatementsContext::getRuleIndex() const {
  return pescalParser::RuleStatements;
}


std::any pescalParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pescalVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

pescalParser::StatementsContext* pescalParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 56, pescalParser::RuleStatements);
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
    setState(186);
    statement();
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pescalParser::SEMI) {
      setState(187);
      match(pescalParser::SEMI);
      setState(188);
      statement();
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void pescalParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pescalParserInitialize();
#else
  ::antlr4::internal::call_once(pescalParserOnceFlag, pescalParserInitialize);
#endif
}
