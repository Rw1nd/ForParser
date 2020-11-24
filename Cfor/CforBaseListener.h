
// Generated from Cfor.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CforListener.h"


/**
 * This class provides an empty implementation of CforListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CforBaseListener : public CforListener {
public:

  virtual void enterForStatement(CforParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(CforParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForCondition(CforParser::ForConditionContext * /*ctx*/) override { }
  virtual void exitForCondition(CforParser::ForConditionContext * /*ctx*/) override { }

  virtual void enterForExpression(CforParser::ForExpressionContext * /*ctx*/) override { }
  virtual void exitForExpression(CforParser::ForExpressionContext * /*ctx*/) override { }

  virtual void enterStatement(CforParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CforParser::StatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(CforParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(CforParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterBlockItemList(CforParser::BlockItemListContext * /*ctx*/) override { }
  virtual void exitBlockItemList(CforParser::BlockItemListContext * /*ctx*/) override { }

  virtual void enterBlockItem(CforParser::BlockItemContext * /*ctx*/) override { }
  virtual void exitBlockItem(CforParser::BlockItemContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(CforParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(CforParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterExpression(CforParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CforParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(CforParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(CforParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(CforParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(CforParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpression(CforParser::LogicalOrExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpression(CforParser::LogicalOrExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpression(CforParser::LogicalAndExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpression(CforParser::LogicalAndExpressionContext * /*ctx*/) override { }

  virtual void enterInclusiveOrExpression(CforParser::InclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitInclusiveOrExpression(CforParser::InclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterExclusiveOrExpression(CforParser::ExclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitExclusiveOrExpression(CforParser::ExclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(CforParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(CforParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(CforParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(CforParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(CforParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(CforParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterShiftExpression(CforParser::ShiftExpressionContext * /*ctx*/) override { }
  virtual void exitShiftExpression(CforParser::ShiftExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(CforParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(CforParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(CforParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(CforParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(CforParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(CforParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(CforParser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(CforParser::CastExpressionContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(CforParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(CforParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(CforParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(CforParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(CforParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(CforParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(CforParser::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(CforParser::UnaryOperatorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

