// EazePie.cpp : Defines the entry point for the application.
//

#include "EazePie.h"

using namespace std;

int main() {
    string line;
    stringstream ss;
    cout << "Hello CMake." << endl;

    ifstream file("hello.txt");
    file >> line;
    cout << "Line <<" << line << endl;
    getline(file, line);

    //ifstream file;
    //file.open("./hello.txt");

    /*if ( file.is_open() ) {
        while ( getline(file, line) ) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }*/
    getline(file, line);
    cout << "Line: " << line << endl;
    file.close();
    return 0;
}
