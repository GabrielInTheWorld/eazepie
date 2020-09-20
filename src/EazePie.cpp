// EazePie.cpp : Defines the entry point for the application.
//

// #include "../include/EazePie.h"
#include "EazePie.h"

using namespace std;

int main() {
    // string line;
    // stringstream ss;
    // cout << "Hello CMake." << endl;

    // ifstream file("main.ep");

    // if ( file.is_open() ) {
    //     while ( getline(file, line) ) {
    //         cout << line << endl;
    //     }
    //     file.close();
    // } else {
    //     cout << "Unable to open file." << endl;
    // }

    Scanner scanner;
    // scanner.readFile("main.ep");
    InputStream stream(scanner.readFile("main.ep"));
    Lexer lexer(&stream);
    // lexer.readNext();
    lexer.start();

    return 0;
}
