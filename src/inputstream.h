#pragma once

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <sstream>

#include "ireader.h"

using namespace std;

class InputStream : public IReader {
    int position = 0;
    int line = 1;
    int column = 0;
    string input = "";

    void setCursor(char, int);
public:
    InputStream(string);
    virtual ~InputStream();
    char getNextChar();
    char getPeek();
    char goBack();
};