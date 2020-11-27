//
// Created by RWind on 2020/11/25.
//

#ifndef FORPARSER_TYPE_H
#define FORPARSER_TYPE_H

#include <string>
#include <iostream>
#include <map>

using namespace std;

enum TypeToken{Type_INT,};

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
    Symbol(string _name){
        name = _name;
    }
    string getname() { return name; }
    shared_ptr<Type> gettype() { return type; }
protected:
    string name;
    shared_ptr<Type> type;
};

class ForInfo{
public:

    ForInfo(string _id){
        id = _id;
    }
    string getid() { return id; }
    int getstart() { return start; }
    int getend() { return end; }

protected:
    string id;
    int start;
    int end;
};


#endif //FORPARSER_TYPE_H
