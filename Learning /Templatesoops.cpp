#include <iostream>
using namespace std;

template <typename datatype>
void print(datatype input){
    cout << input << endl;
}

int main() {
    print("hello");
    print(1);
    print(12.05);
    return 0;
}