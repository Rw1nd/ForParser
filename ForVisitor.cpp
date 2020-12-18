//
// Created by RWind on 2020/11/25.
//

#include "ForVisitor.h"
#include "type.h"

#include <iostream>
using namespace std;

antlrcpp::Any ForVisitor::visitForStatement(CforParser::ForStatementContext *ctx){
    return visit(ctx->forCondition());
}

antlrcpp::Any ForVisitor::visitForCondition(CforParser::ForConditionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitForExpression(CforParser::ForExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitStatement(CforParser::StatementContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitCompoundStatement(CforParser::CompoundStatementContext *ctx){
    return visitChildren(ctx);

}

antlrcpp::Any ForVisitor::visitBlockItemList(CforParser::BlockItemListContext *ctx){
    return visitChildren(ctx);

}

antlrcpp::Any ForVisitor::visitBlockItem(CforParser::BlockItemContext *ctx){
    return visitChildren(ctx);

}

antlrcpp::Any ForVisitor::visitExpressionStatement(CforParser::ExpressionStatementContext *ctx){
    return visitChildren(ctx);

}

antlrcpp::Any ForVisitor::visitExpression(CforParser::ExpressionContext *ctx){
    return visitChildren(ctx);

}

antlrcpp::Any ForVisitor::visitAssignmentExpression(CforParser::AssignmentExpressionContext *ctx){
    return visitChildren(ctx);

}

antlrcpp::Any ForVisitor::visitConditionalExpression(CforParser::ConditionalExpressionContext *ctx){
    return visitChildren(ctx);

}

antlrcpp::Any ForVisitor::visitLogicalOrExpression(CforParser::LogicalOrExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitLogicalAndExpression(CforParser::LogicalAndExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitInclusiveOrExpression(CforParser::InclusiveOrExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitExclusiveOrExpression(CforParser::ExclusiveOrExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitAndExpression(CforParser::AndExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitEqualityExpression(CforParser::EqualityExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitRelationalExpression(CforParser::RelationalExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitShiftExpression(CforParser::ShiftExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitMultiplicativeExpression(CforParser::MultiplicativeExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitAdditiveExpression(CforParser::AdditiveExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitUnaryExpression(CforParser::UnaryExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitCastExpression(CforParser::CastExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitPostfixExpression(CforParser::PostfixExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitPrimaryExpression(CforParser::PrimaryExpressionContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitAssignmentOperator(CforParser::AssignmentOperatorContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitUnaryOperator(CforParser::UnaryOperatorContext *ctx){
    return visitChildren(ctx);
}


