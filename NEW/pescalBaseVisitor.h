
// Generated from pescal.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "pescalVisitor.h"


/**
 * This class provides an empty implementation of pescalVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  pescalBaseVisitor : public pescalVisitor {
public:

  virtual std::any visitProgram(pescalParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(pescalParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(pescalParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignedNumber(pescalParser::UnsignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignedInteger(pescalParser::UnsignedIntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignedReal(pescalParser::UnsignedRealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSign(pescalParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(pescalParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(pescalParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnlabelledStatement(pescalParser::UnlabelledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleStatement(pescalParser::SimpleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStatement(pescalParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(pescalParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(pescalParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationaloperator(pescalParser::RelationaloperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleExpression(pescalParser::SimpleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveoperator(pescalParser::AdditiveoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(pescalParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeoperator(pescalParser::MultiplicativeoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignedFactor(pescalParser::SignedFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(pescalParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignedConstant(pescalParser::UnsignedConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(pescalParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureStatement(pescalParser::ProcedureStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActualParameter(pescalParser::ActualParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyStatement_(pescalParser::EmptyStatement_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructuredStatement(pescalParser::StructuredStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(pescalParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatements(pescalParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }


};

