grammar Cfor;

forStatement
    :   For '(' forCondition ')' statement
    ;


forCondition
	:   expression? ';' forExpression? ';' forExpression?
	;


forExpression
    :   assignmentExpression
    |   forExpression ',' assignmentExpression
    ;


statement
    :   compoundStatement
    |   expressionStatement
    |   forStatement
    ;

compoundStatement
    :   '{' blockItemList? '}'
    ;

blockItemList
    :   blockItem
    |   blockItemList blockItem
    ;

blockItem
    :   statement
    ;

expressionStatement
    :   expression? ';'
    ;

expression
    :   assignmentExpression
    |   expression ',' assignmentExpression
    ;

assignmentExpression
    :   conditionalExpression
    |   unaryExpression assignmentOperator assignmentExpression
    |   DigitSequence
    ;

conditionalExpression
    :   logicalOrExpression ('?' expression ':' conditionalExpression)?
    ;

logicalOrExpression
    :   logicalAndExpression
    |   logicalOrExpression '||' logicalAndExpression
    ;

logicalAndExpression
    :   inclusiveOrExpression
    |   logicalAndExpression '&&' inclusiveOrExpression
    ;


inclusiveOrExpression
    :   exclusiveOrExpression
    |   inclusiveOrExpression '|' exclusiveOrExpression
    ;

exclusiveOrExpression
    :   andExpression
    |   exclusiveOrExpression '^' andExpression
    ;

andExpression
    :   equalityExpression
    |   andExpression '&' equalityExpression
    ;

equalityExpression
    :   relationalExpression
    |   equalityExpression '==' relationalExpression
    |   equalityExpression '!=' relationalExpression
    ;

relationalExpression
    :   shiftExpression
    |   relationalExpression '<' shiftExpression
    |   relationalExpression '>' shiftExpression
    |   relationalExpression '<=' shiftExpression
    |   relationalExpression '>=' shiftExpression
    ;

shiftExpression
    :   additiveExpression
    |   shiftExpression '<<' additiveExpression
    |   shiftExpression '>>' additiveExpression
    ;

multiplicativeExpression
    :   castExpression
    |   multiplicativeExpression '*' castExpression
    |   multiplicativeExpression '/' castExpression
    |   multiplicativeExpression '%' castExpression
    ;

additiveExpression
    :   multiplicativeExpression
    |   additiveExpression '+' multiplicativeExpression
    |   additiveExpression '-' multiplicativeExpression
    ;

unaryExpression
    :   postfixExpression
    |   '++' unaryExpression
    |   '--' unaryExpression
    |   unaryOperator castExpression
    ;

castExpression
    :   unaryExpression
    |   DigitSequence // for
    ;


postfixExpression
    :   primaryExpression
    |   postfixExpression '[' expression ']'
    |   postfixExpression '++'
    |   postfixExpression '--'
    ;

primaryExpression
    :   Identifier
    |   '(' expression ')'
    ;


For : 'for';

assignmentOperator
    :   '=' | '*=' | '/=' | '%=' | '+=' | '-=' | '<<=' | '>>=' | '&=' | '^=' | '|='
    ;

unaryOperator
    :   '&' | '*' | '+' | '-' | '~' | '!'
    ;

Identifier
    :   IdentifierNondigit
        (   IdentifierNondigit
        |   Digit
        )*
    ;


fragment
IdentifierNondigit
    :   Nondigit
    ;

fragment
Nondigit
    :   [a-zA-Z_]
    ;


fragment
Digit
    :   [0-9]
    ;

DigitSequence
    :   Digit+
    ;

WS	:	[ \t\r\n]+ ->skip;
LINECOMMENT	:	'//' .*? '\n' ->skip	;
COMMENT	:	'/*' .*? '*/'	->skip	;

