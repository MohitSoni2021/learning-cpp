#include <iostream>
#include <fstream>
using namespace std;  

void read_file(string filename) {
    ifstream file(filename);
    string line;

    while(getline(file, line)) {
        cout << line << endl;
    }

    file.close();

}

void write_file(string filename, string content) {
    ofstream file(filename);
    file << content;
    file.close();
}

void fstream_read(string filename) {
    fstream file(filename, ios::out | ios::app | ios::in);
    string line;
    while(getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void user_input_Data(string filename){
    string user_input;
    cout << "Enter your data: ";
    getline(cin, user_input);
    write_file(filename, user_input);
    cout << "Data written to file." << endl;
    read_file(filename);
    return;
}

void open_binary_file(string filename) {
    fstream file(filename, ios::binary | ios::out | ios::app);
    if (file.is_open()) {
        cout << "Binary file opened successfully." << endl;
        file.close();
    } else {
        cout << "Unable to open binary file." << endl;
    }
}

void write_binary_file(string filename, string content) {
    fstream file(filename, ios::binary | ios::out | ios::app);
    file.write(content.c_str(), content.size());
    file.close();
}

void read_binary_file(string filename) {
    fstream file(filename, ios::binary | ios::in);
    if (file.is_open()) {
        char c;
        while (file.get(c)) {
            cout << c;
        }
        file.close();
    } else {
        cout << "Unable to open binary file." << endl;
    }
}

void append_data(string filename, string content){
    fstream file(filename, ios::app);
    file << content << endl;
    file.close();
}

int main() {
    user_input_Data("Mohit.txt");
    open_binary_file("binary_file.bin");
    write_binary_file("binary_file.bin", "Hello, World! This is the binary file content.");
    read_binary_file("binary_file.bin");
    return 0;
}