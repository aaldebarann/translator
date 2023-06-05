
// Generated from pescal.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "pescalParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by pescalParser.
 */
class  pescalVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by pescalParser.
   */
    virtual std::any visitProgram(pescalParser::ProgramContext *context) = 0;

    virtual std::any visitIdentifier(pescalParser::IdentifierContext *context) = 0;

    virtual std::any visitBlock(pescalParser::BlockContext *context) = 0;

    virtual std::any visitUnsignedNumber(pescalParser::UnsignedNumberContext *context) = 0;

    virtual std::any visitUnsignedInteger(pescalParser::UnsignedIntegerContext *context) = 0;

    virtual std::any visitUnsignedReal(pescalParser::UnsignedRealContext *context) = 0;

    virtual std::any visitSign(pescalParser::SignContext *context) = 0;

    virtual std::any visitString(pescalParser::StringContext *context) = 0;

    virtual std::any visitStatement(pescalParser::StatementContext *context) = 0;

    virtual std::any visitUnlabelledStatement(pescalParser::UnlabelledStatementContext *context) = 0;

    virtual std::any visitSimpleStatement(pescalParser::SimpleStatementContext *context) = 0;

    virtual std::any visitAssignmentStatement(pescalParser::AssignmentStatementContext *context) = 0;

    virtual std::any visitVariable(pescalParser::VariableContext *context) = 0;

    virtual std::any visitExpression(pescalParser::ExpressionContext *context) = 0;

    virtual std::any visitRelationaloperator(pescalParser::RelationaloperatorContext *context) = 0;

    virtual std::any visitSimpleExpression(pescalParser::SimpleExpressionContext *context) = 0;

    virtual std::any visitAdditiveoperator(pescalParser::AdditiveoperatorContext *context) = 0;

    virtual std::any visitTerm(pescalParser::TermContext *context) = 0;

    virtual std::any visitMultiplicativeoperator(pescalParser::MultiplicativeoperatorContext *context) = 0;

    virtual std::any visitSignedFactor(pescalParser::SignedFactorContext *context) = 0;

    virtual std::any visitFactor(pescalParser::FactorContext *context) = 0;

    virtual std::any visitUnsignedConstant(pescalParser::UnsignedConstantContext *context) = 0;

    virtual std::any visitParameterList(pescalParser::ParameterListContext *context) = 0;

    virtual std::any visitProcedureStatement(pescalParser::ProcedureStatementContext *context) = 0;

    virtual std::any visitActualParameter(pescalParser::ActualParameterContext *context) = 0;

    virtual std::any visitEmptyStatement_(pescalParser::EmptyStatement_Context *context) = 0;

    virtual std::any visitStructuredStatement(pescalParser::StructuredStatementContext *context) = 0;

    virtual std::any visitCompoundStatement(pescalParser::CompoundStatementContext *context) = 0;

    virtual std::any visitStatements(pescalParser::StatementsContext *context) = 0;


};

