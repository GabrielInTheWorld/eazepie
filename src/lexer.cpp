#include "lexer.h"

Lexer::Lexer(IReader *scanner) {
    this->scanner = scanner;
}

Lexer::~Lexer() {
    this->scanner = NULL;
}

Leaf Lexer::readNext() {
    Leaf t;
    readWhile([&](char input) {return isWhiteSpace(input);});
    char next = scanner->getPeek();
    if (next == '#') {
        skipComment();
        // return [&](){return readNext();};
    }
    if (next == '"') {
        t.value = readString();
        t.type = TYPE_STRING;
        return t;
    }
    if (isDigit(next)) {
        t.value = readNumber();
        t.type = TYPE_NUMBER;
        return t;
    }
    if (isPunctuation(next)) {
        // {
        //     value: NULL,
        //     type: TYPE_FUNCTION
        // };
        // t.value = NULL;
        return t;
    }
    string word = readString();
    if (isKeyword(word)) {
        t.value = word;
        t.type = TYPE_KEYWORD;
        return t;
    }
    return t;
}

// void Lexer::readWhile(bool (Lexer::*func)(char)) {
//     while(*func(scanner->getNextChar())) {}
// }

bool Lexer::isWhiteSpace(char input) {
    return input == ' ';
}

bool Lexer::isBoolean(string input) {
    return input == "true" || input == "false";
}

bool Lexer::isDigit(char input) {
    regex integer("/-?[0-9]i");
    smatch matcher;
    string word = "" + input;
    return regex_search(word, matcher, integer);
}

bool Lexer::isPunctuation(char input) {
    return false;
}

bool Lexer::isKeyword(string input) {
    return keywords.find(" " + input + " ") != string::npos;
}

void Lexer::readWhile(function<bool (char)> fun) {
    while(fun(scanner->getNextChar())) {
        cout << "while..." << endl;
    }
}

void Lexer::skipComment() {

}

int Lexer::readNumber() {
    return 0;
}

string Lexer::readString() {
    return "Hello World";
}

void Lexer::start() {
    // while (!readNext().isEmpty()) {
    //     Leaf leaf = readNext();
    // }
    for (Leaf leaf = readNext(); !leaf.isEmpty(); leaf = readNext()) {
        cout << leaf.value << endl;
    }
}