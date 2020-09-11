#pragma once

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <sstream>

using namespace std;

class Scanner {
public:
    string readFile(const string filename);
    // virtual ~Scanner();
};