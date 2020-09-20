#include "inputstream.h"

InputStream::InputStream(string input) {
    this->input = input;
}

InputStream::~InputStream() {
    cout << "Delete InputStream" << endl;
}

void InputStream::setCursor(char next, int number) {
    if (next == '\n') {
        line += number;
        column = 0;
    } else {
        column += number;
    }
}

char InputStream::getNextChar() {
    cout << "position: " << position << endl;
    char next = input.at(++position);
    cout << "position: " << position << endl;
    // if (next == '\n') {
    //     ++line;
    //     column = 0;
    // } else {
    //     ++column;
    // }
    setCursor(next, 1);
    cout << "Get next character: " << next << endl;
    return next;
}

char InputStream::goBack() {
    if (position == 0) {
        return ' ';
    }
    char next = input.at(--position);
    // if (next)
    setCursor(next, -1);
    return next;
}

char InputStream::getPeek() {
    return input.at(position);
}