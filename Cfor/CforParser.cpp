
// Generated from Cfor.g4 by ANTLR 4.8


#include "CforListener.h"
#include "CforVisitor.h"

#include "CforParser.h"


using namespace antlrcpp;
using namespace antlr4;

CforParser::CforParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CforParser::~CforParser() {
  delete _interpreter;
}

std::string CforParser::getGrammarFileName() const {
  return "Cfor.g4";
}

const std::vector<std::string>& CforParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CforParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ForStatementContext ------------------------------------------------------------------

CforParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CforParser::ForStatementContext::For() {
  return getToken(CforParser::For, 0);
}

CforParser::ForConditionContext* CforParser::ForStatementContext::forCondition() {
  return getRuleContext<CforParser::ForConditionContext>(0);
}

CforParser::StatementContext* CforParser::ForStatementContext::statement() {
  return getRuleContext<CforParser::StatementContext>(0);
}


size_t CforParser::ForStatementContext::getRuleIndex() const {
  return CforParser::RuleForStatement;
}

void CforParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void CforParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


antlrcpp::Any CforParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

CforParser::ForStatementContext* CforParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 0, CforParser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(CforParser::For);
    setState(55);
    match(CforParser::T__0);
    setState(56);
    forCondition();
    setState(57);
    match(CforParser::T__1);
    setState(58);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForConditionContext ------------------------------------------------------------------

CforParser::ForConditionContext::ForConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::ExpressionContext* CforParser::ForConditionContext::expression() {
  return getRuleContext<CforParser::ExpressionContext>(0);
}

std::vector<CforParser::ForExpressionContext *> CforParser::ForConditionContext::forExpression() {
  return getRuleContexts<CforParser::ForExpressionContext>();
}

CforParser::ForExpressionContext* CforParser::ForConditionContext::forExpression(size_t i) {
  return getRuleContext<CforParser::ForExpressionContext>(i);
}


size_t CforParser::ForConditionContext::getRuleIndex() const {
  return CforParser::RuleForCondition;
}

void CforParser::ForConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForCondition(this);
}

void CforParser::ForConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForCondition(this);
}


antlrcpp::Any CforParser::ForConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitForCondition(this);
  else
    return visitor->visitChildren(this);
}

CforParser::ForConditionContext* CforParser::forCondition() {
  ForConditionContext *_localctx = _tracker.createInstance<ForConditionContext>(_ctx, getState());
  enterRule(_localctx, 2, CforParser::RuleForCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CforParser::T__0)
      | (1ULL << CforParser::T__12)
      | (1ULL << CforParser::T__21)
      | (1ULL << CforParser::T__24)
      | (1ULL << CforParser::T__25)
      | (1ULL << CforParser::T__26)
      | (1ULL << CforParser::T__27)
      | (1ULL << CforParser::T__41)
      | (1ULL << CforParser::T__42)
      | (1ULL << CforParser::Identifier)
      | (1ULL << CforParser::DigitSequence))) != 0)) {
      setState(60);
      expression(0);
    }
    setState(63);
    match(CforParser::T__2);
    setState(65);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CforParser::T__0)
      | (1ULL << CforParser::T__12)
      | (1ULL << CforParser::T__21)
      | (1ULL << CforParser::T__24)
      | (1ULL << CforParser::T__25)
      | (1ULL << CforParser::T__26)
      | (1ULL << CforParser::T__27)
      | (1ULL << CforParser::T__41)
      | (1ULL << CforParser::T__42)
      | (1ULL << CforParser::Identifier)
      | (1ULL << CforParser::DigitSequence))) != 0)) {
      setState(64);
      forExpression(0);
    }
    setState(67);
    match(CforParser::T__2);
    setState(69);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CforParser::T__0)
      | (1ULL << CforParser::T__12)
      | (1ULL << CforParser::T__21)
      | (1ULL << CforParser::T__24)
      | (1ULL << CforParser::T__25)
      | (1ULL << CforParser::T__26)
      | (1ULL << CforParser::T__27)
      | (1ULL << CforParser::T__41)
      | (1ULL << CforParser::T__42)
      | (1ULL << CforParser::Identifier)
      | (1ULL << CforParser::DigitSequence))) != 0)) {
      setState(68);
      forExpression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForExpressionContext ------------------------------------------------------------------

CforParser::ForExpressionContext::ForExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::AssignmentExpressionContext* CforParser::ForExpressionContext::assignmentExpression() {
  return getRuleContext<CforParser::AssignmentExpressionContext>(0);
}

CforParser::ForExpressionContext* CforParser::ForExpressionContext::forExpression() {
  return getRuleContext<CforParser::ForExpressionContext>(0);
}


size_t CforParser::ForExpressionContext::getRuleIndex() const {
  return CforParser::RuleForExpression;
}

void CforParser::ForExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForExpression(this);
}

void CforParser::ForExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForExpression(this);
}


antlrcpp::Any CforParser::ForExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitForExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::ForExpressionContext* CforParser::forExpression() {
   return forExpression(0);
}

CforParser::ForExpressionContext* CforParser::forExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::ForExpressionContext *_localctx = _tracker.createInstance<ForExpressionContext>(_ctx, parentState);
  CforParser::ForExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CforParser::RuleForExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(72);
    assignmentExpression();
    _ctx->stop = _input->LT(-1);
    setState(79);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ForExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleForExpression);
        setState(74);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(75);
        match(CforParser::T__3);
        setState(76);
        assignmentExpression(); 
      }
      setState(81);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CforParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::CompoundStatementContext* CforParser::StatementContext::compoundStatement() {
  return getRuleContext<CforParser::CompoundStatementContext>(0);
}

CforParser::ExpressionStatementContext* CforParser::StatementContext::expressionStatement() {
  return getRuleContext<CforParser::ExpressionStatementContext>(0);
}

CforParser::ForStatementContext* CforParser::StatementContext::forStatement() {
  return getRuleContext<CforParser::ForStatementContext>(0);
}


size_t CforParser::StatementContext::getRuleIndex() const {
  return CforParser::RuleStatement;
}

void CforParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CforParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any CforParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CforParser::StatementContext* CforParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, CforParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CforParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(82);
        compoundStatement();
        break;
      }

      case CforParser::T__0:
      case CforParser::T__2:
      case CforParser::T__12:
      case CforParser::T__21:
      case CforParser::T__24:
      case CforParser::T__25:
      case CforParser::T__26:
      case CforParser::T__27:
      case CforParser::T__41:
      case CforParser::T__42:
      case CforParser::Identifier:
      case CforParser::DigitSequence: {
        enterOuterAlt(_localctx, 2);
        setState(83);
        expressionStatement();
        break;
      }

      case CforParser::For: {
        enterOuterAlt(_localctx, 3);
        setState(84);
        forStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

CforParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::BlockItemListContext* CforParser::CompoundStatementContext::blockItemList() {
  return getRuleContext<CforParser::BlockItemListContext>(0);
}


size_t CforParser::CompoundStatementContext::getRuleIndex() const {
  return CforParser::RuleCompoundStatement;
}

void CforParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void CforParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


antlrcpp::Any CforParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

CforParser::CompoundStatementContext* CforParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, CforParser::RuleCompoundStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(CforParser::T__4);
    setState(89);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CforParser::T__0)
      | (1ULL << CforParser::T__2)
      | (1ULL << CforParser::T__4)
      | (1ULL << CforParser::T__12)
      | (1ULL << CforParser::T__21)
      | (1ULL << CforParser::T__24)
      | (1ULL << CforParser::T__25)
      | (1ULL << CforParser::T__26)
      | (1ULL << CforParser::T__27)
      | (1ULL << CforParser::T__41)
      | (1ULL << CforParser::T__42)
      | (1ULL << CforParser::For)
      | (1ULL << CforParser::Identifier)
      | (1ULL << CforParser::DigitSequence))) != 0)) {
      setState(88);
      blockItemList(0);
    }
    setState(91);
    match(CforParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemListContext ------------------------------------------------------------------

CforParser::BlockItemListContext::BlockItemListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::BlockItemContext* CforParser::BlockItemListContext::blockItem() {
  return getRuleContext<CforParser::BlockItemContext>(0);
}

CforParser::BlockItemListContext* CforParser::BlockItemListContext::blockItemList() {
  return getRuleContext<CforParser::BlockItemListContext>(0);
}


size_t CforParser::BlockItemListContext::getRuleIndex() const {
  return CforParser::RuleBlockItemList;
}

void CforParser::BlockItemListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItemList(this);
}

void CforParser::BlockItemListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItemList(this);
}


antlrcpp::Any CforParser::BlockItemListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitBlockItemList(this);
  else
    return visitor->visitChildren(this);
}


CforParser::BlockItemListContext* CforParser::blockItemList() {
   return blockItemList(0);
}

CforParser::BlockItemListContext* CforParser::blockItemList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::BlockItemListContext *_localctx = _tracker.createInstance<BlockItemListContext>(_ctx, parentState);
  CforParser::BlockItemListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, CforParser::RuleBlockItemList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(94);
    blockItem();
    _ctx->stop = _input->LT(-1);
    setState(100);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BlockItemListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBlockItemList);
        setState(96);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(97);
        blockItem(); 
      }
      setState(102);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

CforParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::StatementContext* CforParser::BlockItemContext::statement() {
  return getRuleContext<CforParser::StatementContext>(0);
}


size_t CforParser::BlockItemContext::getRuleIndex() const {
  return CforParser::RuleBlockItem;
}

void CforParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void CforParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}


antlrcpp::Any CforParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

CforParser::BlockItemContext* CforParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 12, CforParser::RuleBlockItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

CforParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::ExpressionContext* CforParser::ExpressionStatementContext::expression() {
  return getRuleContext<CforParser::ExpressionContext>(0);
}


size_t CforParser::ExpressionStatementContext::getRuleIndex() const {
  return CforParser::RuleExpressionStatement;
}

void CforParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void CforParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any CforParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

CforParser::ExpressionStatementContext* CforParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, CforParser::RuleExpressionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CforParser::T__0)
      | (1ULL << CforParser::T__12)
      | (1ULL << CforParser::T__21)
      | (1ULL << CforParser::T__24)
      | (1ULL << CforParser::T__25)
      | (1ULL << CforParser::T__26)
      | (1ULL << CforParser::T__27)
      | (1ULL << CforParser::T__41)
      | (1ULL << CforParser::T__42)
      | (1ULL << CforParser::Identifier)
      | (1ULL << CforParser::DigitSequence))) != 0)) {
      setState(105);
      expression(0);
    }
    setState(108);
    match(CforParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CforParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::AssignmentExpressionContext* CforParser::ExpressionContext::assignmentExpression() {
  return getRuleContext<CforParser::AssignmentExpressionContext>(0);
}

CforParser::ExpressionContext* CforParser::ExpressionContext::expression() {
  return getRuleContext<CforParser::ExpressionContext>(0);
}


size_t CforParser::ExpressionContext::getRuleIndex() const {
  return CforParser::RuleExpression;
}

void CforParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CforParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any CforParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::ExpressionContext* CforParser::expression() {
   return expression(0);
}

CforParser::ExpressionContext* CforParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  CforParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, CforParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(111);
    assignmentExpression();
    _ctx->stop = _input->LT(-1);
    setState(118);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(113);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(114);
        match(CforParser::T__3);
        setState(115);
        assignmentExpression(); 
      }
      setState(120);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

CforParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::ConditionalExpressionContext* CforParser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<CforParser::ConditionalExpressionContext>(0);
}

CforParser::UnaryExpressionContext* CforParser::AssignmentExpressionContext::unaryExpression() {
  return getRuleContext<CforParser::UnaryExpressionContext>(0);
}

CforParser::AssignmentOperatorContext* CforParser::AssignmentExpressionContext::assignmentOperator() {
  return getRuleContext<CforParser::AssignmentOperatorContext>(0);
}

CforParser::AssignmentExpressionContext* CforParser::AssignmentExpressionContext::assignmentExpression() {
  return getRuleContext<CforParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CforParser::AssignmentExpressionContext::DigitSequence() {
  return getToken(CforParser::DigitSequence, 0);
}


size_t CforParser::AssignmentExpressionContext::getRuleIndex() const {
  return CforParser::RuleAssignmentExpression;
}

void CforParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void CforParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


antlrcpp::Any CforParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

CforParser::AssignmentExpressionContext* CforParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CforParser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(121);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(122);
      unaryExpression();
      setState(123);
      assignmentOperator();
      setState(124);
      assignmentExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(126);
      match(CforParser::DigitSequence);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

CforParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::LogicalOrExpressionContext* CforParser::ConditionalExpressionContext::logicalOrExpression() {
  return getRuleContext<CforParser::LogicalOrExpressionContext>(0);
}

CforParser::ExpressionContext* CforParser::ConditionalExpressionContext::expression() {
  return getRuleContext<CforParser::ExpressionContext>(0);
}

CforParser::ConditionalExpressionContext* CforParser::ConditionalExpressionContext::conditionalExpression() {
  return getRuleContext<CforParser::ConditionalExpressionContext>(0);
}


size_t CforParser::ConditionalExpressionContext::getRuleIndex() const {
  return CforParser::RuleConditionalExpression;
}

void CforParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void CforParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}


antlrcpp::Any CforParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

CforParser::ConditionalExpressionContext* CforParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, CforParser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    logicalOrExpression(0);
    setState(135);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(130);
      match(CforParser::T__6);
      setState(131);
      expression(0);
      setState(132);
      match(CforParser::T__7);
      setState(133);
      conditionalExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

CforParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::LogicalAndExpressionContext* CforParser::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContext<CforParser::LogicalAndExpressionContext>(0);
}

CforParser::LogicalOrExpressionContext* CforParser::LogicalOrExpressionContext::logicalOrExpression() {
  return getRuleContext<CforParser::LogicalOrExpressionContext>(0);
}


size_t CforParser::LogicalOrExpressionContext::getRuleIndex() const {
  return CforParser::RuleLogicalOrExpression;
}

void CforParser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}

void CforParser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}


antlrcpp::Any CforParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::LogicalOrExpressionContext* CforParser::logicalOrExpression() {
   return logicalOrExpression(0);
}

CforParser::LogicalOrExpressionContext* CforParser::logicalOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, parentState);
  CforParser::LogicalOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, CforParser::RuleLogicalOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(138);
    logicalAndExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(145);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalOrExpression);
        setState(140);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(141);
        match(CforParser::T__8);
        setState(142);
        logicalAndExpression(0); 
      }
      setState(147);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

CforParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::InclusiveOrExpressionContext* CforParser::LogicalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContext<CforParser::InclusiveOrExpressionContext>(0);
}

CforParser::LogicalAndExpressionContext* CforParser::LogicalAndExpressionContext::logicalAndExpression() {
  return getRuleContext<CforParser::LogicalAndExpressionContext>(0);
}


size_t CforParser::LogicalAndExpressionContext::getRuleIndex() const {
  return CforParser::RuleLogicalAndExpression;
}

void CforParser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}

void CforParser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}


antlrcpp::Any CforParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::LogicalAndExpressionContext* CforParser::logicalAndExpression() {
   return logicalAndExpression(0);
}

CforParser::LogicalAndExpressionContext* CforParser::logicalAndExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, parentState);
  CforParser::LogicalAndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, CforParser::RuleLogicalAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(149);
    inclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(156);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalAndExpression);
        setState(151);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(152);
        match(CforParser::T__9);
        setState(153);
        inclusiveOrExpression(0); 
      }
      setState(158);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

CforParser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::ExclusiveOrExpressionContext* CforParser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<CforParser::ExclusiveOrExpressionContext>(0);
}

CforParser::InclusiveOrExpressionContext* CforParser::InclusiveOrExpressionContext::inclusiveOrExpression() {
  return getRuleContext<CforParser::InclusiveOrExpressionContext>(0);
}


size_t CforParser::InclusiveOrExpressionContext::getRuleIndex() const {
  return CforParser::RuleInclusiveOrExpression;
}

void CforParser::InclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveOrExpression(this);
}

void CforParser::InclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveOrExpression(this);
}


antlrcpp::Any CforParser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitInclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::InclusiveOrExpressionContext* CforParser::inclusiveOrExpression() {
   return inclusiveOrExpression(0);
}

CforParser::InclusiveOrExpressionContext* CforParser::inclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, parentState);
  CforParser::InclusiveOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, CforParser::RuleInclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(160);
    exclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(167);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveOrExpression);
        setState(162);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(163);
        match(CforParser::T__10);
        setState(164);
        exclusiveOrExpression(0); 
      }
      setState(169);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

CforParser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::AndExpressionContext* CforParser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContext<CforParser::AndExpressionContext>(0);
}

CforParser::ExclusiveOrExpressionContext* CforParser::ExclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<CforParser::ExclusiveOrExpressionContext>(0);
}


size_t CforParser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return CforParser::RuleExclusiveOrExpression;
}

void CforParser::ExclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveOrExpression(this);
}

void CforParser::ExclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveOrExpression(this);
}


antlrcpp::Any CforParser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitExclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::ExclusiveOrExpressionContext* CforParser::exclusiveOrExpression() {
   return exclusiveOrExpression(0);
}

CforParser::ExclusiveOrExpressionContext* CforParser::exclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, parentState);
  CforParser::ExclusiveOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, CforParser::RuleExclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(171);
    andExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(178);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveOrExpression);
        setState(173);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(174);
        match(CforParser::T__11);
        setState(175);
        andExpression(0); 
      }
      setState(180);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

CforParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::EqualityExpressionContext* CforParser::AndExpressionContext::equalityExpression() {
  return getRuleContext<CforParser::EqualityExpressionContext>(0);
}

CforParser::AndExpressionContext* CforParser::AndExpressionContext::andExpression() {
  return getRuleContext<CforParser::AndExpressionContext>(0);
}


size_t CforParser::AndExpressionContext::getRuleIndex() const {
  return CforParser::RuleAndExpression;
}

void CforParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void CforParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}


antlrcpp::Any CforParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::AndExpressionContext* CforParser::andExpression() {
   return andExpression(0);
}

CforParser::AndExpressionContext* CforParser::andExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, parentState);
  CforParser::AndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, CforParser::RuleAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(182);
    equalityExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(189);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndExpression);
        setState(184);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(185);
        match(CforParser::T__12);
        setState(186);
        equalityExpression(0); 
      }
      setState(191);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

CforParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::RelationalExpressionContext* CforParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContext<CforParser::RelationalExpressionContext>(0);
}

CforParser::EqualityExpressionContext* CforParser::EqualityExpressionContext::equalityExpression() {
  return getRuleContext<CforParser::EqualityExpressionContext>(0);
}


size_t CforParser::EqualityExpressionContext::getRuleIndex() const {
  return CforParser::RuleEqualityExpression;
}

void CforParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void CforParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


antlrcpp::Any CforParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::EqualityExpressionContext* CforParser::equalityExpression() {
   return equalityExpression(0);
}

CforParser::EqualityExpressionContext* CforParser::equalityExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, parentState);
  CforParser::EqualityExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, CforParser::RuleEqualityExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(193);
    relationalExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(203);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(201);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(195);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(196);
          match(CforParser::T__13);
          setState(197);
          relationalExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(198);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(199);
          match(CforParser::T__14);
          setState(200);
          relationalExpression(0);
          break;
        }

        } 
      }
      setState(205);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

CforParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::ShiftExpressionContext* CforParser::RelationalExpressionContext::shiftExpression() {
  return getRuleContext<CforParser::ShiftExpressionContext>(0);
}

CforParser::RelationalExpressionContext* CforParser::RelationalExpressionContext::relationalExpression() {
  return getRuleContext<CforParser::RelationalExpressionContext>(0);
}


size_t CforParser::RelationalExpressionContext::getRuleIndex() const {
  return CforParser::RuleRelationalExpression;
}

void CforParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void CforParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


antlrcpp::Any CforParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::RelationalExpressionContext* CforParser::relationalExpression() {
   return relationalExpression(0);
}

CforParser::RelationalExpressionContext* CforParser::relationalExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, parentState);
  CforParser::RelationalExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, CforParser::RuleRelationalExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(207);
    shiftExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(223);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(221);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(209);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(210);
          match(CforParser::T__15);
          setState(211);
          shiftExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(212);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(213);
          match(CforParser::T__16);
          setState(214);
          shiftExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(215);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(216);
          match(CforParser::T__17);
          setState(217);
          shiftExpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(218);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(219);
          match(CforParser::T__18);
          setState(220);
          shiftExpression(0);
          break;
        }

        } 
      }
      setState(225);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

CforParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::AdditiveExpressionContext* CforParser::ShiftExpressionContext::additiveExpression() {
  return getRuleContext<CforParser::AdditiveExpressionContext>(0);
}

CforParser::ShiftExpressionContext* CforParser::ShiftExpressionContext::shiftExpression() {
  return getRuleContext<CforParser::ShiftExpressionContext>(0);
}


size_t CforParser::ShiftExpressionContext::getRuleIndex() const {
  return CforParser::RuleShiftExpression;
}

void CforParser::ShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpression(this);
}

void CforParser::ShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpression(this);
}


antlrcpp::Any CforParser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::ShiftExpressionContext* CforParser::shiftExpression() {
   return shiftExpression(0);
}

CforParser::ShiftExpressionContext* CforParser::shiftExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, parentState);
  CforParser::ShiftExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, CforParser::RuleShiftExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(227);
    additiveExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(237);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(235);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(229);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(230);
          match(CforParser::T__19);
          setState(231);
          additiveExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(232);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(233);
          match(CforParser::T__20);
          setState(234);
          additiveExpression(0);
          break;
        }

        } 
      }
      setState(239);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

CforParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::CastExpressionContext* CforParser::MultiplicativeExpressionContext::castExpression() {
  return getRuleContext<CforParser::CastExpressionContext>(0);
}

CforParser::MultiplicativeExpressionContext* CforParser::MultiplicativeExpressionContext::multiplicativeExpression() {
  return getRuleContext<CforParser::MultiplicativeExpressionContext>(0);
}


size_t CforParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return CforParser::RuleMultiplicativeExpression;
}

void CforParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void CforParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


antlrcpp::Any CforParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::MultiplicativeExpressionContext* CforParser::multiplicativeExpression() {
   return multiplicativeExpression(0);
}

CforParser::MultiplicativeExpressionContext* CforParser::multiplicativeExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, parentState);
  CforParser::MultiplicativeExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, CforParser::RuleMultiplicativeExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(241);
    castExpression();
    _ctx->stop = _input->LT(-1);
    setState(254);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(252);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(243);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(244);
          match(CforParser::T__21);
          setState(245);
          castExpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(246);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(247);
          match(CforParser::T__22);
          setState(248);
          castExpression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(249);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(250);
          match(CforParser::T__23);
          setState(251);
          castExpression();
          break;
        }

        } 
      }
      setState(256);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

CforParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::MultiplicativeExpressionContext* CforParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<CforParser::MultiplicativeExpressionContext>(0);
}

CforParser::AdditiveExpressionContext* CforParser::AdditiveExpressionContext::additiveExpression() {
  return getRuleContext<CforParser::AdditiveExpressionContext>(0);
}


size_t CforParser::AdditiveExpressionContext::getRuleIndex() const {
  return CforParser::RuleAdditiveExpression;
}

void CforParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void CforParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


antlrcpp::Any CforParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::AdditiveExpressionContext* CforParser::additiveExpression() {
   return additiveExpression(0);
}

CforParser::AdditiveExpressionContext* CforParser::additiveExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, parentState);
  CforParser::AdditiveExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, CforParser::RuleAdditiveExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(258);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(266);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(260);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(261);
          match(CforParser::T__24);
          setState(262);
          multiplicativeExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(263);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(264);
          match(CforParser::T__25);
          setState(265);
          multiplicativeExpression(0);
          break;
        }

        } 
      }
      setState(270);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

CforParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::PostfixExpressionContext* CforParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<CforParser::PostfixExpressionContext>(0);
}

CforParser::UnaryExpressionContext* CforParser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<CforParser::UnaryExpressionContext>(0);
}

CforParser::UnaryOperatorContext* CforParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<CforParser::UnaryOperatorContext>(0);
}

CforParser::CastExpressionContext* CforParser::UnaryExpressionContext::castExpression() {
  return getRuleContext<CforParser::CastExpressionContext>(0);
}


size_t CforParser::UnaryExpressionContext::getRuleIndex() const {
  return CforParser::RuleUnaryExpression;
}

void CforParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void CforParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


antlrcpp::Any CforParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CforParser::UnaryExpressionContext* CforParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, CforParser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CforParser::T__0:
      case CforParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(271);
        postfixExpression(0);
        break;
      }

      case CforParser::T__26: {
        enterOuterAlt(_localctx, 2);
        setState(272);
        match(CforParser::T__26);
        setState(273);
        unaryExpression();
        break;
      }

      case CforParser::T__27: {
        enterOuterAlt(_localctx, 3);
        setState(274);
        match(CforParser::T__27);
        setState(275);
        unaryExpression();
        break;
      }

      case CforParser::T__12:
      case CforParser::T__21:
      case CforParser::T__24:
      case CforParser::T__25:
      case CforParser::T__41:
      case CforParser::T__42: {
        enterOuterAlt(_localctx, 4);
        setState(276);
        unaryOperator();
        setState(277);
        castExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

CforParser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::UnaryExpressionContext* CforParser::CastExpressionContext::unaryExpression() {
  return getRuleContext<CforParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CforParser::CastExpressionContext::DigitSequence() {
  return getToken(CforParser::DigitSequence, 0);
}


size_t CforParser::CastExpressionContext::getRuleIndex() const {
  return CforParser::RuleCastExpression;
}

void CforParser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void CforParser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}


antlrcpp::Any CforParser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

CforParser::CastExpressionContext* CforParser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, CforParser::RuleCastExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(283);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CforParser::T__0:
      case CforParser::T__12:
      case CforParser::T__21:
      case CforParser::T__24:
      case CforParser::T__25:
      case CforParser::T__26:
      case CforParser::T__27:
      case CforParser::T__41:
      case CforParser::T__42:
      case CforParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(281);
        unaryExpression();
        break;
      }

      case CforParser::DigitSequence: {
        enterOuterAlt(_localctx, 2);
        setState(282);
        match(CforParser::DigitSequence);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

CforParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CforParser::PrimaryExpressionContext* CforParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<CforParser::PrimaryExpressionContext>(0);
}

CforParser::PostfixExpressionContext* CforParser::PostfixExpressionContext::postfixExpression() {
  return getRuleContext<CforParser::PostfixExpressionContext>(0);
}

CforParser::ExpressionContext* CforParser::PostfixExpressionContext::expression() {
  return getRuleContext<CforParser::ExpressionContext>(0);
}


size_t CforParser::PostfixExpressionContext::getRuleIndex() const {
  return CforParser::RulePostfixExpression;
}

void CforParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void CforParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


antlrcpp::Any CforParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}


CforParser::PostfixExpressionContext* CforParser::postfixExpression() {
   return postfixExpression(0);
}

CforParser::PostfixExpressionContext* CforParser::postfixExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CforParser::PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
  CforParser::PostfixExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, CforParser::RulePostfixExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(286);
    primaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(299);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(297);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(288);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(289);
          match(CforParser::T__28);
          setState(290);
          expression(0);
          setState(291);
          match(CforParser::T__29);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(293);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(294);
          match(CforParser::T__26);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(295);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(296);
          match(CforParser::T__27);
          break;
        }

        } 
      }
      setState(301);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

CforParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CforParser::PrimaryExpressionContext::Identifier() {
  return getToken(CforParser::Identifier, 0);
}

CforParser::ExpressionContext* CforParser::PrimaryExpressionContext::expression() {
  return getRuleContext<CforParser::ExpressionContext>(0);
}


size_t CforParser::PrimaryExpressionContext::getRuleIndex() const {
  return CforParser::RulePrimaryExpression;
}

void CforParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void CforParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


antlrcpp::Any CforParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CforParser::PrimaryExpressionContext* CforParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 48, CforParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(307);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CforParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(302);
        match(CforParser::Identifier);
        break;
      }

      case CforParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(303);
        match(CforParser::T__0);
        setState(304);
        expression(0);
        setState(305);
        match(CforParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

CforParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CforParser::AssignmentOperatorContext::getRuleIndex() const {
  return CforParser::RuleAssignmentOperator;
}

void CforParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void CforParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any CforParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

CforParser::AssignmentOperatorContext* CforParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 50, CforParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CforParser::T__30)
      | (1ULL << CforParser::T__31)
      | (1ULL << CforParser::T__32)
      | (1ULL << CforParser::T__33)
      | (1ULL << CforParser::T__34)
      | (1ULL << CforParser::T__35)
      | (1ULL << CforParser::T__36)
      | (1ULL << CforParser::T__37)
      | (1ULL << CforParser::T__38)
      | (1ULL << CforParser::T__39)
      | (1ULL << CforParser::T__40))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

CforParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CforParser::UnaryOperatorContext::getRuleIndex() const {
  return CforParser::RuleUnaryOperator;
}

void CforParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void CforParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CforListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}


antlrcpp::Any CforParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CforVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

CforParser::UnaryOperatorContext* CforParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 52, CforParser::RuleUnaryOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CforParser::T__12)
      | (1ULL << CforParser::T__21)
      | (1ULL << CforParser::T__24)
      | (1ULL << CforParser::T__25)
      | (1ULL << CforParser::T__41)
      | (1ULL << CforParser::T__42))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CforParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return forExpressionSempred(dynamic_cast<ForExpressionContext *>(context), predicateIndex);
    case 5: return blockItemListSempred(dynamic_cast<BlockItemListContext *>(context), predicateIndex);
    case 8: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 11: return logicalOrExpressionSempred(dynamic_cast<LogicalOrExpressionContext *>(context), predicateIndex);
    case 12: return logicalAndExpressionSempred(dynamic_cast<LogicalAndExpressionContext *>(context), predicateIndex);
    case 13: return inclusiveOrExpressionSempred(dynamic_cast<InclusiveOrExpressionContext *>(context), predicateIndex);
    case 14: return exclusiveOrExpressionSempred(dynamic_cast<ExclusiveOrExpressionContext *>(context), predicateIndex);
    case 15: return andExpressionSempred(dynamic_cast<AndExpressionContext *>(context), predicateIndex);
    case 16: return equalityExpressionSempred(dynamic_cast<EqualityExpressionContext *>(context), predicateIndex);
    case 17: return relationalExpressionSempred(dynamic_cast<RelationalExpressionContext *>(context), predicateIndex);
    case 18: return shiftExpressionSempred(dynamic_cast<ShiftExpressionContext *>(context), predicateIndex);
    case 19: return multiplicativeExpressionSempred(dynamic_cast<MultiplicativeExpressionContext *>(context), predicateIndex);
    case 20: return additiveExpressionSempred(dynamic_cast<AdditiveExpressionContext *>(context), predicateIndex);
    case 23: return postfixExpressionSempred(dynamic_cast<PostfixExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CforParser::forExpressionSempred(ForExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::blockItemListSempred(BlockItemListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::logicalOrExpressionSempred(LogicalOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::logicalAndExpressionSempred(LogicalAndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 4);
    case 11: return precpred(_ctx, 3);
    case 12: return precpred(_ctx, 2);
    case 13: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 14: return precpred(_ctx, 2);
    case 15: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 16: return precpred(_ctx, 3);
    case 17: return precpred(_ctx, 2);
    case 18: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 19: return precpred(_ctx, 2);
    case 20: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CforParser::postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 21: return precpred(_ctx, 3);
    case 22: return precpred(_ctx, 2);
    case 23: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CforParser::_decisionToDFA;
atn::PredictionContextCache CforParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CforParser::_atn;
std::vector<uint16_t> CforParser::_serializedATN;

std::vector<std::string> CforParser::_ruleNames = {
  "forStatement", "forCondition", "forExpression", "statement", "compoundStatement", 
  "blockItemList", "blockItem", "expressionStatement", "expression", "assignmentExpression", 
  "conditionalExpression", "logicalOrExpression", "logicalAndExpression", 
  "inclusiveOrExpression", "exclusiveOrExpression", "andExpression", "equalityExpression", 
  "relationalExpression", "shiftExpression", "multiplicativeExpression", 
  "additiveExpression", "unaryExpression", "castExpression", "postfixExpression", 
  "primaryExpression", "assignmentOperator", "unaryOperator"
};

std::vector<std::string> CforParser::_literalNames = {
  "", "'('", "')'", "';'", "','", "'{'", "'}'", "'?'", "':'", "'||'", "'&&'", 
  "'|'", "'^'", "'&'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'<<'", 
  "'>>'", "'*'", "'/'", "'%'", "'+'", "'-'", "'++'", "'--'", "'['", "']'", 
  "'='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", "'>>='", "'&='", 
  "'^='", "'|='", "'~'", "'!'", "'for'"
};

std::vector<std::string> CforParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "For", "Identifier", "DigitSequence", 
  "WS", "LINECOMMENT", "COMMENT"
};

dfa::Vocabulary CforParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CforParser::_tokenNames;

CforParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x33, 0x13c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x5, 0x3, 0x40, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x44, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x48, 0xa, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x50, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x53, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x58, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x5c, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x7, 0x7, 0x65, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x68, 0xb, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x5, 0x9, 0x6d, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0x77, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x7a, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x82, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x8a, 
    0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x7, 0xd, 0x92, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x95, 0xb, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x9d, 0xa, 
    0xe, 0xc, 0xe, 0xe, 0xe, 0xa0, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xa8, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0xab, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0xb3, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xb6, 
    0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0xbe, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xc1, 0xb, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xcc, 0xa, 0x12, 0xc, 0x12, 0xe, 
    0x12, 0xcf, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xe0, 0xa, 0x13, 
    0xc, 0x13, 0xe, 0x13, 0xe3, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 
    0x14, 0xee, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xf1, 0xb, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xff, 0xa, 
    0x15, 0xc, 0x15, 0xe, 0x15, 0x102, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x7, 0x16, 0x10d, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x110, 0xb, 
    0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x11a, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x11e, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x7, 0x19, 0x12c, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x12f, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x136, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x2, 0x10, 0x6, 0xc, 0x12, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x30, 0x1d, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x2, 0x4, 0x3, 
    0x2, 0x21, 0x2b, 0x6, 0x2, 0xf, 0xf, 0x18, 0x18, 0x1b, 0x1c, 0x2c, 0x2d, 
    0x2, 0x147, 0x2, 0x38, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x49, 0x3, 0x2, 0x2, 0x2, 0x8, 0x57, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x81, 0x3, 0x2, 0x2, 0x2, 0x16, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xd0, 0x3, 0x2, 0x2, 0x2, 0x26, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x28, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x103, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x135, 0x3, 0x2, 0x2, 0x2, 0x34, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x139, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x2e, 0x2, 0x2, 
    0x39, 0x3a, 0x7, 0x3, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0x4, 0x3, 0x2, 0x3b, 
    0x3c, 0x7, 0x4, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x8, 0x5, 0x2, 0x3d, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x5, 0x12, 0xa, 0x2, 0x3f, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x43, 0x7, 0x5, 0x2, 0x2, 0x42, 0x44, 0x5, 0x6, 0x4, 
    0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x7, 0x5, 0x2, 0x2, 0x46, 
    0x48, 0x5, 0x6, 0x4, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x5, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x8, 
    0x4, 0x1, 0x2, 0x4a, 0x4b, 0x5, 0x14, 0xb, 0x2, 0x4b, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d, 0xc, 0x3, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x6, 0x2, 
    0x2, 0x4e, 0x50, 0x5, 0x14, 0xb, 0x2, 0x4f, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x53, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x7, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x58, 0x5, 0xa, 0x6, 0x2, 0x55, 0x58, 0x5, 
    0x10, 0x9, 0x2, 0x56, 0x58, 0x5, 0x2, 0x2, 0x2, 0x57, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x9, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x7, 0x7, 0x2, 0x2, 
    0x5a, 0x5c, 0x5, 0xc, 0x7, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 
    0x7, 0x8, 0x2, 0x2, 0x5e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x8, 
    0x7, 0x1, 0x2, 0x60, 0x61, 0x5, 0xe, 0x8, 0x2, 0x61, 0x66, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x63, 0xc, 0x3, 0x2, 0x2, 0x63, 0x65, 0x5, 0xe, 0x8, 
    0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x5, 0x8, 0x5, 0x2, 0x6a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6d, 0x5, 
    0x12, 0xa, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x5, 0x2, 
    0x2, 0x6f, 0x11, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x8, 0xa, 0x1, 0x2, 
    0x71, 0x72, 0x5, 0x14, 0xb, 0x2, 0x72, 0x78, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x74, 0xc, 0x3, 0x2, 0x2, 0x74, 0x75, 0x7, 0x6, 0x2, 0x2, 0x75, 0x77, 
    0x5, 0x14, 0xb, 0x2, 0x76, 0x73, 0x3, 0x2, 0x2, 0x2, 0x77, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x82, 0x5, 0x16, 0xc, 0x2, 0x7c, 0x7d, 0x5, 0x2c, 0x17, 0x2, 
    0x7d, 0x7e, 0x5, 0x34, 0x1b, 0x2, 0x7e, 0x7f, 0x5, 0x14, 0xb, 0x2, 0x7f, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x7, 0x30, 0x2, 0x2, 0x81, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x81, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x15, 0x3, 0x2, 0x2, 0x2, 0x83, 0x89, 0x5, 0x18, 
    0xd, 0x2, 0x84, 0x85, 0x7, 0x9, 0x2, 0x2, 0x85, 0x86, 0x5, 0x12, 0xa, 
    0x2, 0x86, 0x87, 0x7, 0xa, 0x2, 0x2, 0x87, 0x88, 0x5, 0x16, 0xc, 0x2, 
    0x88, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 0x84, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 
    0x8, 0xd, 0x1, 0x2, 0x8c, 0x8d, 0x5, 0x1a, 0xe, 0x2, 0x8d, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x8f, 0xc, 0x3, 0x2, 0x2, 0x8f, 0x90, 0x7, 0xb, 
    0x2, 0x2, 0x90, 0x92, 0x5, 0x1a, 0xe, 0x2, 0x91, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x19, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x8, 0xe, 0x1, 0x2, 0x97, 0x98, 
    0x5, 0x1c, 0xf, 0x2, 0x98, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0xc, 
    0x3, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0xc, 0x2, 0x2, 0x9b, 0x9d, 0x5, 0x1c, 
    0xf, 0x2, 0x9c, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0xa2, 0x8, 0xf, 0x1, 0x2, 0xa2, 0xa3, 0x5, 0x1e, 0x10, 0x2, 0xa3, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0xc, 0x3, 0x2, 0x2, 0xa5, 0xa6, 0x7, 
    0xd, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0x1e, 0x10, 0x2, 0xa7, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x8, 0x10, 0x1, 0x2, 0xad, 
    0xae, 0x5, 0x20, 0x11, 0x2, 0xae, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
    0xc, 0x3, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0xe, 0x2, 0x2, 0xb1, 0xb3, 0x5, 
    0x20, 0x11, 0x2, 0xb2, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb8, 0x8, 0x11, 0x1, 0x2, 0xb8, 0xb9, 0x5, 0x22, 0x12, 0x2, 0xb9, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0xc, 0x3, 0x2, 0x2, 0xbb, 0xbc, 
    0x7, 0xf, 0x2, 0x2, 0xbc, 0xbe, 0x5, 0x22, 0x12, 0x2, 0xbd, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x8, 0x12, 0x1, 0x2, 
    0xc3, 0xc4, 0x5, 0x24, 0x13, 0x2, 0xc4, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc6, 0xc, 0x4, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x10, 0x2, 0x2, 0xc7, 0xcc, 
    0x5, 0x24, 0x13, 0x2, 0xc8, 0xc9, 0xc, 0x3, 0x2, 0x2, 0xc9, 0xca, 0x7, 
    0x11, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x24, 0x13, 0x2, 0xcb, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0x23, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd1, 0x8, 0x13, 0x1, 0x2, 0xd1, 0xd2, 0x5, 0x26, 0x14, 0x2, 0xd2, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0xc, 0x6, 0x2, 0x2, 0xd4, 0xd5, 0x7, 
    0x12, 0x2, 0x2, 0xd5, 0xe0, 0x5, 0x26, 0x14, 0x2, 0xd6, 0xd7, 0xc, 0x5, 
    0x2, 0x2, 0xd7, 0xd8, 0x7, 0x13, 0x2, 0x2, 0xd8, 0xe0, 0x5, 0x26, 0x14, 
    0x2, 0xd9, 0xda, 0xc, 0x4, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x14, 0x2, 0x2, 
    0xdb, 0xe0, 0x5, 0x26, 0x14, 0x2, 0xdc, 0xdd, 0xc, 0x3, 0x2, 0x2, 0xdd, 
    0xde, 0x7, 0x15, 0x2, 0x2, 0xde, 0xe0, 0x5, 0x26, 0x14, 0x2, 0xdf, 0xd3, 
    0x3, 0x2, 0x2, 0x2, 0xdf, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe3, 0x3, 0x2, 
    0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0x25, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0xe4, 0xe5, 0x8, 0x14, 0x1, 0x2, 0xe5, 0xe6, 0x5, 0x2a, 0x16, 0x2, 0xe6, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0xc, 0x4, 0x2, 0x2, 0xe8, 0xe9, 
    0x7, 0x16, 0x2, 0x2, 0xe9, 0xee, 0x5, 0x2a, 0x16, 0x2, 0xea, 0xeb, 0xc, 
    0x3, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x17, 0x2, 0x2, 0xec, 0xee, 0x5, 0x2a, 
    0x16, 0x2, 0xed, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xed, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x27, 0x3, 0x2, 0x2, 0x2, 0xf1, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x8, 0x15, 0x1, 0x2, 0xf3, 0xf4, 
    0x5, 0x2e, 0x18, 0x2, 0xf4, 0x100, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0xc, 
    0x5, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x18, 0x2, 0x2, 0xf7, 0xff, 0x5, 0x2e, 
    0x18, 0x2, 0xf8, 0xf9, 0xc, 0x4, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x19, 0x2, 
    0x2, 0xfa, 0xff, 0x5, 0x2e, 0x18, 0x2, 0xfb, 0xfc, 0xc, 0x3, 0x2, 0x2, 
    0xfc, 0xfd, 0x7, 0x1a, 0x2, 0x2, 0xfd, 0xff, 0x5, 0x2e, 0x18, 0x2, 0xfe, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfb, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0x102, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x8, 0x16, 
    0x1, 0x2, 0x104, 0x105, 0x5, 0x28, 0x15, 0x2, 0x105, 0x10e, 0x3, 0x2, 
    0x2, 0x2, 0x106, 0x107, 0xc, 0x4, 0x2, 0x2, 0x107, 0x108, 0x7, 0x1b, 
    0x2, 0x2, 0x108, 0x10d, 0x5, 0x28, 0x15, 0x2, 0x109, 0x10a, 0xc, 0x3, 
    0x2, 0x2, 0x10a, 0x10b, 0x7, 0x1c, 0x2, 0x2, 0x10b, 0x10d, 0x5, 0x28, 
    0x15, 0x2, 0x10c, 0x106, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x109, 0x3, 0x2, 
    0x2, 0x2, 0x10d, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x111, 0x11a, 0x5, 0x30, 0x19, 
    0x2, 0x112, 0x113, 0x7, 0x1d, 0x2, 0x2, 0x113, 0x11a, 0x5, 0x2c, 0x17, 
    0x2, 0x114, 0x115, 0x7, 0x1e, 0x2, 0x2, 0x115, 0x11a, 0x5, 0x2c, 0x17, 
    0x2, 0x116, 0x117, 0x5, 0x36, 0x1c, 0x2, 0x117, 0x118, 0x5, 0x2e, 0x18, 
    0x2, 0x118, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x119, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x112, 0x3, 0x2, 0x2, 0x2, 0x119, 0x114, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x116, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x11b, 0x11e, 0x5, 0x2c, 0x17, 0x2, 0x11c, 0x11e, 0x7, 0x30, 0x2, 0x2, 
    0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11c, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x8, 0x19, 0x1, 0x2, 
    0x120, 0x121, 0x5, 0x32, 0x1a, 0x2, 0x121, 0x12d, 0x3, 0x2, 0x2, 0x2, 
    0x122, 0x123, 0xc, 0x5, 0x2, 0x2, 0x123, 0x124, 0x7, 0x1f, 0x2, 0x2, 
    0x124, 0x125, 0x5, 0x12, 0xa, 0x2, 0x125, 0x126, 0x7, 0x20, 0x2, 0x2, 
    0x126, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0xc, 0x4, 0x2, 0x2, 
    0x128, 0x12c, 0x7, 0x1d, 0x2, 0x2, 0x129, 0x12a, 0xc, 0x3, 0x2, 0x2, 
    0x12a, 0x12c, 0x7, 0x1e, 0x2, 0x2, 0x12b, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x12b, 0x127, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 0x3, 0x2, 0x2, 0x2, 
    0x12c, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 
    0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x12f, 
    0x12d, 0x3, 0x2, 0x2, 0x2, 0x130, 0x136, 0x7, 0x2f, 0x2, 0x2, 0x131, 
    0x132, 0x7, 0x3, 0x2, 0x2, 0x132, 0x133, 0x5, 0x12, 0xa, 0x2, 0x133, 
    0x134, 0x7, 0x4, 0x2, 0x2, 0x134, 0x136, 0x3, 0x2, 0x2, 0x2, 0x135, 
    0x130, 0x3, 0x2, 0x2, 0x2, 0x135, 0x131, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x9, 0x2, 0x2, 0x2, 0x138, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x9, 0x3, 0x2, 0x2, 0x13a, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x3f, 0x43, 0x47, 0x51, 0x57, 0x5b, 0x66, 0x6c, 
    0x78, 0x81, 0x89, 0x93, 0x9e, 0xa9, 0xb4, 0xbf, 0xcb, 0xcd, 0xdf, 0xe1, 
    0xed, 0xef, 0xfe, 0x100, 0x10c, 0x10e, 0x119, 0x11d, 0x12b, 0x12d, 0x135, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CforParser::Initializer CforParser::_init;
