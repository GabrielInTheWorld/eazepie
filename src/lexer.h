#pragma once

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <sstream>
#include <functional>
#include <regex>

#include "ireader.h"
#include "type.h"

using namespace std;

union T {
    int i;
    bool b;
    string s;
};

class Lexer {
    string keywords = " if else void private public protected ";
    IReader *scanner;

    bool isDigit(char);
    bool isKeyword(string);
    bool isPunctuation(char);
    bool isBoolean(string);
    bool isWhiteSpace(char);
    bool isId(string);
    string readIdent();
    string readString();
    int readNumber();
    // void readWhile(bool (Lexer::*)(char));
    void readWhile(function<bool (char)>);
    void skipComment();

public:
    Lexer(IReader*);
    virtual ~Lexer();
    Leaf readNext();
    void start();
};