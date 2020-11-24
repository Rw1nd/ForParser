
// Generated from Cfor.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CforParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CforParser.
 */
class  CforVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CforParser.
   */
    virtual antlrcpp::Any visitForStatement(CforParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitForCondition(CforParser::ForConditionContext *context) = 0;

    virtual antlrcpp::Any visitForExpression(CforParser::ForExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(CforParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(CforParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitBlockItemList(CforParser::BlockItemListContext *context) = 0;

    virtual antlrcpp::Any visitBlockItem(CforParser::BlockItemContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(CforParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CforParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(CforParser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalExpression(CforParser::ConditionalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOrExpression(CforParser::LogicalOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAndExpression(CforParser::LogicalAndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInclusiveOrExpression(CforParser::InclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveOrExpression(CforParser::ExclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndExpression(CforParser::AndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityExpression(CforParser::EqualityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelationalExpression(CforParser::RelationalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftExpression(CforParser::ShiftExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpression(CforParser::MultiplicativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpression(CforParser::AdditiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(CforParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastExpression(CforParser::CastExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(CforParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(CforParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(CforParser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(CforParser::UnaryOperatorContext *context) = 0;


};

