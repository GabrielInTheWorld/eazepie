#pragma once

#include <string>

using namespace std;

enum Type {
    TYPE_INVALID,
    TYPE_NUMBER,
    TYPE_STRING,
    TYPE_BOOLEAN,
    TYPE_CHARACTER,
    TYPE_FUNCTION,
    TYPE_IDENT,
    TYPE_KEYWORD
};

struct Leaf {
    Type type = TYPE_INVALID;
    string value = "";
    bool isEmpty() {return type == TYPE_INVALID;}
};