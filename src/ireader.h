#pragma once

class IReader {
public:
    virtual char getNextChar() = 0; 
    virtual char getPeek() = 0;
    virtual char goBack() = 0;
};