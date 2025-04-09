#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filedata;
    ifstream MyFile("example.txt");
    // MyFile << "Hello, Mohit Soni!";
        while (getline (MyFile, filedata)) {
        // Output the text from the file
        cout << filedata;
        }
    MyFile.close();
}

// int main() {
// string myText;
// ifstream MyReadFile("example.txt");

// while (getline (MyReadFile, myText)) {
//   cout << myText;
// }
// MyReadFile.close();
// }