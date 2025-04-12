#include <iostream>
using namespace std;

void byvalue(int num){
    cout << "num = " << ++num << endl;
}

void byref(int &num){
    cout << "num = " << ++num << endl;
}

int main() {
    int n = 10;
    byvalue(10);
    cout << "original = " << n << endl;
    byref(n);
    cout << "original after ref = " << n << endl;
}
