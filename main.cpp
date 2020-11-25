#include <iostream>
#include <mach/mach_types.h>
#include "antlr4-common.h"
#include "CforLexer.h"
#include "CforParser.h"
#include "ForVisitor.h"
#include "type.h"

using namespace antlr4;
using namespace std;



int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    CforLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CforParser parser(&tokens);

    tree::ParseTree *tree = parser.forStatement();
    ForVisitor visitortest;

    visitortest.visit(tree);

    return 0;
}