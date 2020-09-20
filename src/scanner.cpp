#include "scanner.h"

string Scanner::readFile(const string filename) {
    ifstream file(filename);
    string line;
    stringstream stream;
    
    if ( file.is_open() ) {
        while ( getline(file, line) ) {
            // cout << line << endl;
            stream << "\n" << line;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
    cout << stream.str() << endl;
    inputstream = stream.str();
    return stream.str();
};
