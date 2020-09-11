// EazePie.cpp : Defines the entry point for the application.
//

// #include "../include/EazePie.h"
#include "EazePie.h"

using namespace std;

int main() {
    string line;
    stringstream ss;
    cout << "Hello CMake." << endl;

    ifstream file("main.ep");
  //  file >> line;
  //  cout << "Line <<" << line << endl;
  //  getline(file, line);

    //ifstream file;
    //file.open("./hello.txt");

    if ( file.is_open() ) {
        while ( getline(file, line) ) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }

    Scanner scanner;
    scanner.readFile("main.ep");

    // getline(file, line);
    // cout << "Line: " << line << endl;
    // file.close();
    return 0;
}
