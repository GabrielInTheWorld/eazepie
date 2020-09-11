#include "scanner.h"

string Scanner::readFile(const string filename) {
    ifstream file(filename);
    string line;
    
    if ( file.is_open() ) {
        while ( getline(file, line) ) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    return "hello world";
};

// Scanner::~Scanner() {};