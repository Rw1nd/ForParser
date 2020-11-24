#include <iostream>
#include <mach/mach_types.h>
#include "antlr4-common.h"
#include "CforLexer.h"
#include "CforParser.h"
#include "CforVisitor.h"
#include "CforListener.h"
#include "CforBaseVisitor.h"
#include <iostream>

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
    CforBaseVisitor visitortest;

    tree->accept(&visitortest);


    return 0;
}