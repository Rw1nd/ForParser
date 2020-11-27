//
// Created by RWind on 2020/11/25.
//

#ifndef FORPARSER_FORVISITOR_H
#define FORPARSER_FORVISITOR_H

#include "CforBaseVisitor.h"
#include "CforParser.h"
#include "CforLexer.h"


class  ForVisitor : public CforBaseVisitor {
public:
     antlrcpp::Any visitForStatement(CforParser::ForStatementContext *context);

     antlrcpp::Any visitForCondition(CforParser::ForConditionContext *context);

     antlrcpp::Any visitForExpression(CforParser::ForExpressionContext *context);

     antlrcpp::Any visitStatement(CforParser::StatementContext *context);

     antlrcpp::Any visitCompoundStatement(CforParser::CompoundStatementContext *context);

     antlrcpp::Any visitBlockItemList(CforParser::BlockItemListContext *context);

     antlrcpp::Any visitBlockItem(CforParser::BlockItemContext *context);

     antlrcpp::Any visitExpressionStatement(CforParser::ExpressionStatementContext *context);

     antlrcpp::Any visitExpression(CforParser::ExpressionContext *context);

     antlrcpp::Any visitAssignmentExpression(CforParser::AssignmentExpressionContext *context);

     antlrcpp::Any visitConditionalExpression(CforParser::ConditionalExpressionContext *context);

     antlrcpp::Any visitLogicalOrExpression(CforParser::LogicalOrExpressionContext *context);

     antlrcpp::Any visitLogicalAndExpression(CforParser::LogicalAndExpressionContext *context);

     antlrcpp::Any visitInclusiveOrExpression(CforParser::InclusiveOrExpressionContext *context);

     antlrcpp::Any visitExclusiveOrExpression(CforParser::ExclusiveOrExpressionContext *context);

     antlrcpp::Any visitAndExpression(CforParser::AndExpressionContext *context);

     antlrcpp::Any visitEqualityExpression(CforParser::EqualityExpressionContext *context);

     antlrcpp::Any visitRelationalExpression(CforParser::RelationalExpressionContext *context);

     antlrcpp::Any visitShiftExpression(CforParser::ShiftExpressionContext *context);

     antlrcpp::Any visitMultiplicativeExpression(CforParser::MultiplicativeExpressionContext *context);

     antlrcpp::Any visitAdditiveExpression(CforParser::AdditiveExpressionContext *context);

     antlrcpp::Any visitUnaryExpression(CforParser::UnaryExpressionContext *context);

     antlrcpp::Any visitCastExpression(CforParser::CastExpressionContext *context);

     antlrcpp::Any visitPostfixExpression(CforParser::PostfixExpressionContext *context);

     antlrcpp::Any visitPrimaryExpression(CforParser::PrimaryExpressionContext *context);

     antlrcpp::Any visitAssignmentOperator(CforParser::AssignmentOperatorContext *context);

     antlrcpp::Any visitUnaryOperator(CforParser::UnaryOperatorContext *context);

protected:
    int layer = 0;
};


#endif //FORPARSER_FORVISITOR_H
