//
// Created by RWind on 2020/11/25.
//

#ifndef FORPARSER_TYPE_H
#define FORPARSER_TYPE_H

#include <string>
#include <iostream>

using namespace std;

class Type{
public:
    int gettype() { return typetoken; }
    int getsize() { return size; }
    void setvalue(int v) { value = v; }
protected:
    int typetoken;
    int value;
    int size;
    shared_ptr<Type> base;
};

class Symbol{
public:
    string getname() { return name; }
    shared_ptr<Type> gettype() { return type; }
protected:
    string name;
    shared_ptr<Type> type;
};


#endif //FORPARSER_TYPE_H
