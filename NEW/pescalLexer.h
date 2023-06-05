
// Generated from pescal.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  pescalLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, BEGIN = 2, DIV = 3, END = 4, MOD = 5, NIL = 6, NOT = 7, OR = 8, 
    PLUS = 9, MINUS = 10, STAR = 11, SLASH = 12, ASSIGN = 13, COMMA = 14, 
    SEMI = 15, COLON = 16, EQUAL = 17, NOT_EQUAL = 18, LT = 19, LE = 20, 
    GE = 21, GT = 22, LPAREN = 23, RPAREN = 24, POWER = 25, DOT = 26, WS = 27, 
    IDENT = 28, STRING_LITERAL = 29, NUM_INT = 30, NUM_REAL = 31
  };

  explicit pescalLexer(antlr4::CharStream *input);

  ~pescalLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

