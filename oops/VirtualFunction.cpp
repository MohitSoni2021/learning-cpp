#include <iostream>
using namespace std;

class Base {
    public:
    void show(){
        cout << "This is the Virtual Function of Base Class" << endl;
    }
};

class Derived: public Base{
    public:
    void show() {
        cout << "This is the Virtual  Function of Derived Class" << endl;
    }

    void hide(){
        cout << "This is the another function" << endl;
    };
};

class Derived1: public Base {
    public:
        string name;
};

int main(){
    Base BaseClass;
    Derived D;
    Derived1 D2;

    BaseClass.show();
    cout << endl;
    D.show();
    cout << endl;
    D2.show();
    cout << endl;





}
