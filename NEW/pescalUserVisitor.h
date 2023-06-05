#pragma
#include "antlr4-runtime.h"
#include <iostream>
#include"pescalBaseVisitor.h"
#include <vector>
#include <string>
struct A{
	std::string name = "";
	double arg = 0;
	
}

class pascalUserVisitor : public pescalBaseVisitor
{
public:

	std::vector <A> res;

	virtual std::any visitProgram(pescalParser::ProgramContext* context) override {
		std::cout << "Start of program" << std::endl;
		std::any_cast<std::string>(visit(context->block()));
		return 0;
	}

	virtual std::any visitBlock(pescalParser::BlockContext* context) override {
		std::cout << "Start of block" << std::endl;
		std::any_cast<std::string>(visit(context->compoundStatement()));
		return 0;
	}
	virtual std::any visitCompoundStatement(pescalParser::CompoundStatementContext* context) override {
		std::cout << "Start of CompoundStatement" << std::endl;
		std::any_cast<std::string>(visit(context->statements()));
		return 0;
	}
	virtual std::any visitStatements(pescalParser::StatementsContext* context)override { //?????/

		std::cout << "Statements" << std::endl;
		std::vector<pescalParser::StatementsContext*> arr_p = context->children();
		for (int i = 0; i < arr_p.size(); i++) {
			visit(arr_p.at(i));
		}
		
		
		return 0;
	}
	virtual std::any visitStatement(pescalParser::StatementContext* context) override {
		std::cout << "Start of Statement" << std::endl;
		std::any_cast<std::string>(visit(context->unlabelledStatement()));
		return 0;

	}
	virtual std::any visitUnlabelledStatement(pescalParser::UnlabelledStatementContext* context) override {
		std::cout << "Start of UnlabelledStatement" << std::endl;
		if(context->structuredStatement() != nullptr){
		std::any_cast<std::string>(visit(context->structuredStatement()));}
		if(context->simpleStatement()) != nullptr){
		std::any_cast<std::string>(visit(context->simpleStatement()));}
		return 0;

	}

	virtual std::any visitSimpleStatement(pescalParser::SimpleStatementContext* context) override {
		std::cout << "Start of SimpleStatement" << std::endl;
		if (context->assignmentStatement() != nullptr){
		std::any_cast<std::string>(visit(context->assignmentStatement()));}
		if(context->procedureStatement() != nullptr){
		std::any_cast<std::string>(visit(context->procedureStatement()));}
		if(context->emptyStatement_() != nullptr){
		std::any_cast<std::string>(visit(context->emptyStatement_()));}
		return 0;
	}
	virtual std::any visitStructuredStatement(pescalParser::StructuredStatementContext* context) override {
		std::cout << "Start of StructuredStatement" << std::endl;
		std::any_cast<std::string>(visit(context->compoundStatement()));
		return 0;
	}


	
	virtual std::any visitAssignmentStatement(pescalParser::AssignmentStatementContext* context) override {
		A per;
		std::cout << "Start of AssignmentStatement" << std::endl;
		std::string left = std::any_cast<std::string>(visit(context->variable()));
		double right = std::any_cast<double>(visit(context->expression()));
		std::cout << "T: " << left << context->ASSIGN()->getText() << right << std::endl;
		std::string val = left;
		per.name = left;
		per.arg = right;
		res.push_back(per);
		return 0;
	}
	virtual std::any visitEmptyStatement_(pescalParser::EmptyStatement_Context* context) override {
		return 0;
	}
	
	virtual std::any visitExpression(pescalParser::ExpressionContext* context) override {
		std::cout << "Start of Expression" << std::endl;
		return std::any_cast<double>(visit(context->simpleExpression()));
	
	}
	virtual std::any visitSimpleExpression(pescalParser::SimpleExpressionContext* context) override {
		std::cout << "Start of SimpleExpression" << std::endl;
		return std::any_cast<double>(visit(context->term()));
	
	}
	virtual std::any visitTerm(pescalParser::TermContext* context) {
		std::cout << "Start of visitTerm" << std::endl;
		double left = std::any_cast<double>(visit(context->signedFactor()));
		double mid = std::any_cast<double>(visit(context->multiplicativeoperator()));
		std::string zn = std::any_cast<std::string>(visit(context->term()));
		return 0;

	}
	virtual std::any visitSignedFactor(pescalParser::SignedFactorContext* context) {
		std::cout << "Start of visitSignedFactor" << std::endl;
		return std::any_cast<double>(visit(context->factor()));
	
	}
	virtual std::any visitFactor(pescalParser::FactorContext* context) {
		std::cout << "Start of visitFactor" << std::endl;
		if(context->variable() != nullptr){
		std::any_cast<double>(visit(context->variable()));}
		if(context->LPAREN()){
		std::any_cast<double>(visit(context->LPAREN()));}
		if(context->unsignedConstant()){
		std::any_cast<double>(visit(context->unsignedConstant()));}
		return 0;
	}
	virtual std::any visitVariable(pescalParser::VariableContext* context) {
		return context;
	}
	virtual std::any visitUnsignedConstant(pescalParser::UnsignedConstantContext* context) {
		std::cout << "Start of visitUnsignedConstant" << std::endl;
		return	std::any_cast<double>(visit(context->unsignedNumber()));
	
	}
	virtual std::any visitUnsignedNumber(pescalParser::UnsignedNumberContext* context) {
		std::cout << "Start of visitUnsignedConstant" << std::endl;
		if(context->unsignedInteger()){
		std::any_cast<int>(visit(context->unsignedInteger()));
		}
		if(context->unsignedReal()){
		std::any_cast<double>(visit(context->unsignedReal()));}
		return 0;
	}
	virtual std::any visitUnsignedInteger(pescalParser::UnsignedIntegerContext* context) {
		return context.getText();
	}

	virtual std::any visitUnsignedReal(pescalParser::UnsignedRealContext* context) {
		return context.getText();
	}
	virtual std::any visitMultiplicativeoperator(pescalParser::MultiplicativeoperatorContext* context) {
		return context.getText();
	}
	virtual std::any visitIdentifier(pescalParser::IdentifierContext* context) {
		
		return context.getText();
	}

};

