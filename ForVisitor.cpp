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
    this->layer++;
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
    if (ctx->logicalAndExpression()){
        return visit(ctx->logicalAndExpression());
    }else{
        return visitChildren(ctx);
    }

}

antlrcpp::Any ForVisitor::visitLogicalAndExpression(CforParser::LogicalAndExpressionContext *ctx){
    if (ctx->inclusiveOrExpression()){
        return visit(ctx->inclusiveOrExpression());
    }else{
        return visitChildren(ctx);

    }

}

antlrcpp::Any ForVisitor::visitInclusiveOrExpression(CforParser::InclusiveOrExpressionContext *ctx){
    if (ctx->exclusiveOrExpression()){
        return visit(ctx->exclusiveOrExpression());
    }else{
        return visitChildren(ctx);
    }

}

antlrcpp::Any ForVisitor::visitExclusiveOrExpression(CforParser::ExclusiveOrExpressionContext *ctx){
    if (ctx->andExpression()){
        return visit(ctx->andExpression());
    }else{
        return visitChildren(ctx);

    }

}

antlrcpp::Any ForVisitor::visitAndExpression(CforParser::AndExpressionContext *ctx){
    if (ctx->equalityExpression()){
        return visit(ctx->equalityExpression());
    }else{
        return visitChildren(ctx);

    }

}

antlrcpp::Any ForVisitor::visitEqualityExpression(CforParser::EqualityExpressionContext *ctx){
    if (ctx->equalityExpression()){
        return visit(ctx->equalityExpression());
    }else{
        return visitChildren(ctx);

    }

}

antlrcpp::Any ForVisitor::visitRelationalExpression(CforParser::RelationalExpressionContext *ctx){
    if (ctx->shiftExpression()){
        return visit(ctx->shiftExpression());
    }else{
        return visitChildren(ctx);

    }

}

antlrcpp::Any ForVisitor::visitShiftExpression(CforParser::ShiftExpressionContext *ctx){
    if (ctx->additiveExpression()){
        return visit(ctx->additiveExpression());
    }else{
        return visitChildren(ctx);

    }

}

antlrcpp::Any ForVisitor::visitMultiplicativeExpression(CforParser::MultiplicativeExpressionContext *ctx){
    if (ctx->multiplicativeExpression()){
        return visit(ctx->multiplicativeExpression());
    }else if(ctx->castExpression()){
        return visit(ctx->castExpression());
    }

}

antlrcpp::Any ForVisitor::visitAdditiveExpression(CforParser::AdditiveExpressionContext *ctx){
    if (ctx->additiveExpression()){
        return visit(ctx->additiveExpression());
    }else if (ctx->multiplicativeExpression()){
        return visit(ctx->multiplicativeExpression());
    }

}

antlrcpp::Any ForVisitor::visitUnaryExpression(CforParser::UnaryExpressionContext *ctx){
    if (ctx->postfixExpression()){
        return visit(ctx->postfixExpression());
    }else{
        return visitChildren(ctx);
    }

}

antlrcpp::Any ForVisitor::visitCastExpression(CforParser::CastExpressionContext *ctx){
    if (ctx->unaryExpression()){
        return visit(ctx->unaryExpression());
    }else{
        return stoi(ctx->DigitSequence()->toString());
    }
}

antlrcpp::Any ForVisitor::visitPostfixExpression(CforParser::PostfixExpressionContext *ctx){
    if (ctx->primaryExpression()){
        return visit(ctx->primaryExpression());
    }else if(ctx->expression()){
        return visit(ctx->expression());
    }else{
        return visit(ctx->postfixExpression());
    }
}

antlrcpp::Any ForVisitor::visitPrimaryExpression(CforParser::PrimaryExpressionContext *ctx){
    shared_ptr<ForInfo> forinfo = make_shared<ForInfo>(ctx->Identifier()->toString());
    cout << forinfo->getid() << endl;
    return forinfo;
}

antlrcpp::Any ForVisitor::visitAssignmentOperator(CforParser::AssignmentOperatorContext *ctx){
    return visitChildren(ctx);
}

antlrcpp::Any ForVisitor::visitUnaryOperator(CforParser::UnaryOperatorContext *ctx){
    return visitChildren(ctx);
}


