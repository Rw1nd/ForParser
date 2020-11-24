
// Generated from Cfor.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CforParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CforParser.
 */
class  CforListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterForStatement(CforParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(CforParser::ForStatementContext *ctx) = 0;

  virtual void enterForCondition(CforParser::ForConditionContext *ctx) = 0;
  virtual void exitForCondition(CforParser::ForConditionContext *ctx) = 0;

  virtual void enterForExpression(CforParser::ForExpressionContext *ctx) = 0;
  virtual void exitForExpression(CforParser::ForExpressionContext *ctx) = 0;

  virtual void enterStatement(CforParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CforParser::StatementContext *ctx) = 0;

  virtual void enterCompoundStatement(CforParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(CforParser::CompoundStatementContext *ctx) = 0;

  virtual void enterBlockItemList(CforParser::BlockItemListContext *ctx) = 0;
  virtual void exitBlockItemList(CforParser::BlockItemListContext *ctx) = 0;

  virtual void enterBlockItem(CforParser::BlockItemContext *ctx) = 0;
  virtual void exitBlockItem(CforParser::BlockItemContext *ctx) = 0;

  virtual void enterExpressionStatement(CforParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(CforParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterExpression(CforParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CforParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(CforParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(CforParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression(CforParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(CforParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(CforParser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(CforParser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(CforParser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(CforParser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterInclusiveOrExpression(CforParser::InclusiveOrExpressionContext *ctx) = 0;
  virtual void exitInclusiveOrExpression(CforParser::InclusiveOrExpressionContext *ctx) = 0;

  virtual void enterExclusiveOrExpression(CforParser::ExclusiveOrExpressionContext *ctx) = 0;
  virtual void exitExclusiveOrExpression(CforParser::ExclusiveOrExpressionContext *ctx) = 0;

  virtual void enterAndExpression(CforParser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(CforParser::AndExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(CforParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(CforParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(CforParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(CforParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterShiftExpression(CforParser::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(CforParser::ShiftExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(CforParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(CforParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(CforParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(CforParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression(CforParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(CforParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterCastExpression(CforParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(CforParser::CastExpressionContext *ctx) = 0;

  virtual void enterPostfixExpression(CforParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(CforParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(CforParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(CforParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperator(CforParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(CforParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterUnaryOperator(CforParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(CforParser::UnaryOperatorContext *ctx) = 0;


};

