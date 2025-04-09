#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myFile("example.txt");
    myFile << "Hello, World!";
    myFile.close();
    return 0;
}