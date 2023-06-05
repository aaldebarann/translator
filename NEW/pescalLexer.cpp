
// Generated from pescal.g4 by ANTLR 4.13.0


#include "pescalLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct PescalLexerStaticData final {
  PescalLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PescalLexerStaticData(const PescalLexerStaticData&) = delete;
  PescalLexerStaticData(PescalLexerStaticData&&) = delete;
  PescalLexerStaticData& operator=(const PescalLexerStaticData&) = delete;
  PescalLexerStaticData& operator=(PescalLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pescallexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PescalLexerStaticData *pescallexerLexerStaticData = nullptr;

void pescallexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pescallexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(pescallexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PescalLexerStaticData>(
    std::vector<std::string>{
      "AND", "BEGIN", "DIV", "END", "MOD", "NIL", "NOT", "OR", "PLUS", "MINUS", 
      "STAR", "SLASH", "ASSIGN", "COMMA", "SEMI", "COLON", "EQUAL", "NOT_EQUAL", 
      "LT", "LE", "GE", "GT", "LPAREN", "RPAREN", "POWER", "DOT", "WS", 
      "IDENT", "STRING_LITERAL", "NUM_INT", "NUM_REAL"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,31,172,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,
  	1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,
  	6,1,6,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,12,
  	1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,19,
  	1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,
  	1,25,1,26,1,26,1,26,1,26,1,27,1,27,5,27,143,8,27,10,27,12,27,146,9,27,
  	1,28,1,28,1,28,1,28,5,28,152,8,28,10,28,12,28,155,9,28,1,28,1,28,1,29,
  	4,29,160,8,29,11,29,12,29,161,1,30,4,30,165,8,30,11,30,12,30,166,1,30,
  	1,30,3,30,171,8,30,0,0,31,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,1,0,17,2,
  	0,65,65,97,97,2,0,78,78,110,110,2,0,68,68,100,100,2,0,66,66,98,98,2,0,
  	69,69,101,101,2,0,71,71,103,103,2,0,73,73,105,105,2,0,86,86,118,118,2,
  	0,77,77,109,109,2,0,79,79,111,111,2,0,76,76,108,108,2,0,84,84,116,116,
  	2,0,82,82,114,114,3,0,9,10,13,13,32,32,2,0,65,90,97,122,4,0,48,57,65,
  	90,95,95,97,122,1,0,39,39,177,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,
  	1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,
  	0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,
  	29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,
  	0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,
  	0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,
  	61,1,0,0,0,1,63,1,0,0,0,3,67,1,0,0,0,5,73,1,0,0,0,7,77,1,0,0,0,9,81,1,
  	0,0,0,11,85,1,0,0,0,13,89,1,0,0,0,15,93,1,0,0,0,17,96,1,0,0,0,19,98,1,
  	0,0,0,21,100,1,0,0,0,23,102,1,0,0,0,25,104,1,0,0,0,27,107,1,0,0,0,29,
  	109,1,0,0,0,31,111,1,0,0,0,33,113,1,0,0,0,35,115,1,0,0,0,37,118,1,0,0,
  	0,39,120,1,0,0,0,41,123,1,0,0,0,43,126,1,0,0,0,45,128,1,0,0,0,47,130,
  	1,0,0,0,49,132,1,0,0,0,51,134,1,0,0,0,53,136,1,0,0,0,55,140,1,0,0,0,57,
  	147,1,0,0,0,59,159,1,0,0,0,61,164,1,0,0,0,63,64,7,0,0,0,64,65,7,1,0,0,
  	65,66,7,2,0,0,66,2,1,0,0,0,67,68,7,3,0,0,68,69,7,4,0,0,69,70,7,5,0,0,
  	70,71,7,6,0,0,71,72,7,1,0,0,72,4,1,0,0,0,73,74,7,2,0,0,74,75,7,6,0,0,
  	75,76,7,7,0,0,76,6,1,0,0,0,77,78,7,4,0,0,78,79,7,1,0,0,79,80,7,2,0,0,
  	80,8,1,0,0,0,81,82,7,8,0,0,82,83,7,9,0,0,83,84,7,2,0,0,84,10,1,0,0,0,
  	85,86,7,1,0,0,86,87,7,6,0,0,87,88,7,10,0,0,88,12,1,0,0,0,89,90,7,1,0,
  	0,90,91,7,9,0,0,91,92,7,11,0,0,92,14,1,0,0,0,93,94,7,9,0,0,94,95,7,12,
  	0,0,95,16,1,0,0,0,96,97,5,43,0,0,97,18,1,0,0,0,98,99,5,45,0,0,99,20,1,
  	0,0,0,100,101,5,42,0,0,101,22,1,0,0,0,102,103,5,47,0,0,103,24,1,0,0,0,
  	104,105,5,58,0,0,105,106,5,61,0,0,106,26,1,0,0,0,107,108,5,44,0,0,108,
  	28,1,0,0,0,109,110,5,59,0,0,110,30,1,0,0,0,111,112,5,58,0,0,112,32,1,
  	0,0,0,113,114,5,61,0,0,114,34,1,0,0,0,115,116,5,60,0,0,116,117,5,62,0,
  	0,117,36,1,0,0,0,118,119,5,60,0,0,119,38,1,0,0,0,120,121,5,60,0,0,121,
  	122,5,61,0,0,122,40,1,0,0,0,123,124,5,62,0,0,124,125,5,61,0,0,125,42,
  	1,0,0,0,126,127,5,62,0,0,127,44,1,0,0,0,128,129,5,40,0,0,129,46,1,0,0,
  	0,130,131,5,41,0,0,131,48,1,0,0,0,132,133,5,94,0,0,133,50,1,0,0,0,134,
  	135,5,46,0,0,135,52,1,0,0,0,136,137,7,13,0,0,137,138,1,0,0,0,138,139,
  	6,26,0,0,139,54,1,0,0,0,140,144,7,14,0,0,141,143,7,15,0,0,142,141,1,0,
  	0,0,143,146,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,56,1,0,0,0,146,
  	144,1,0,0,0,147,153,5,39,0,0,148,149,5,39,0,0,149,152,5,39,0,0,150,152,
  	8,16,0,0,151,148,1,0,0,0,151,150,1,0,0,0,152,155,1,0,0,0,153,151,1,0,
  	0,0,153,154,1,0,0,0,154,156,1,0,0,0,155,153,1,0,0,0,156,157,5,39,0,0,
  	157,58,1,0,0,0,158,160,2,48,57,0,159,158,1,0,0,0,160,161,1,0,0,0,161,
  	159,1,0,0,0,161,162,1,0,0,0,162,60,1,0,0,0,163,165,2,48,57,0,164,163,
  	1,0,0,0,165,166,1,0,0,0,166,164,1,0,0,0,166,167,1,0,0,0,167,170,1,0,0,
  	0,168,169,5,46,0,0,169,171,2,48,57,0,170,168,1,0,0,0,170,171,1,0,0,0,
  	171,62,1,0,0,0,7,0,144,151,153,161,166,170,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pescallexerLexerStaticData = staticData.release();
}

}

pescalLexer::pescalLexer(CharStream *input) : Lexer(input) {
  pescalLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *pescallexerLexerStaticData->atn, pescallexerLexerStaticData->decisionToDFA, pescallexerLexerStaticData->sharedContextCache);
}

pescalLexer::~pescalLexer() {
  delete _interpreter;
}

std::string pescalLexer::getGrammarFileName() const {
  return "pescal.g4";
}

const std::vector<std::string>& pescalLexer::getRuleNames() const {
  return pescallexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& pescalLexer::getChannelNames() const {
  return pescallexerLexerStaticData->channelNames;
}

const std::vector<std::string>& pescalLexer::getModeNames() const {
  return pescallexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& pescalLexer::getVocabulary() const {
  return pescallexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView pescalLexer::getSerializedATN() const {
  return pescallexerLexerStaticData->serializedATN;
}

const atn::ATN& pescalLexer::getATN() const {
  return *pescallexerLexerStaticData->atn;
}




void pescalLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pescallexerLexerInitialize();
#else
  ::antlr4::internal::call_once(pescallexerLexerOnceFlag, pescallexerLexerInitialize);
#endif
}
