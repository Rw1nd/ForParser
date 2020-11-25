//
// Created by RWind on 2020/11/25.
//

#include "ForVisitor.h"

antlrcpp::Any ForVisitor::visitForStatement(CforParser::ForStatementContext *context){return true;}

antlrcpp::Any ForVisitor::visitForCondition(CforParser::ForConditionContext *context){return true;}

antlrcpp::Any ForVisitor::visitForExpression(CforParser::ForExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitStatement(CforParser::StatementContext *context){return true;}

antlrcpp::Any ForVisitor::visitCompoundStatement(CforParser::CompoundStatementContext *context){return true;}

antlrcpp::Any ForVisitor::visitBlockItemList(CforParser::BlockItemListContext *context){return true;}

antlrcpp::Any ForVisitor::visitBlockItem(CforParser::BlockItemContext *context){return true;}

antlrcpp::Any ForVisitor::visitExpressionStatement(CforParser::ExpressionStatementContext *context){return true;}

antlrcpp::Any ForVisitor::visitExpression(CforParser::ExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitAssignmentExpression(CforParser::AssignmentExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitConditionalExpression(CforParser::ConditionalExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitLogicalOrExpression(CforParser::LogicalOrExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitLogicalAndExpression(CforParser::LogicalAndExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitInclusiveOrExpression(CforParser::InclusiveOrExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitExclusiveOrExpression(CforParser::ExclusiveOrExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitAndExpression(CforParser::AndExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitEqualityExpression(CforParser::EqualityExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitRelationalExpression(CforParser::RelationalExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitShiftExpression(CforParser::ShiftExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitMultiplicativeExpression(CforParser::MultiplicativeExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitAdditiveExpression(CforParser::AdditiveExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitUnaryExpression(CforParser::UnaryExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitCastExpression(CforParser::CastExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitPostfixExpression(CforParser::PostfixExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitPrimaryExpression(CforParser::PrimaryExpressionContext *context){return true;}

antlrcpp::Any ForVisitor::visitAssignmentOperator(CforParser::AssignmentOperatorContext *context){return true;}

antlrcpp::Any ForVisitor::visitUnaryOperator(CforParser::UnaryOperatorContext *context){return true;}