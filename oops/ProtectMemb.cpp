#include <iostream>
using namespace std;

class Base{
    protected:
        int baseVal = 10;
};

class Child1 : public Base {
    public:
        void inc(){
            baseVal++;
        }

        void print(){
            cout << baseVal << endl;
        }
};

int main(){
    Child1 Obj1;
    Obj1.print();
    Obj1.inc();
    Obj1.inc();
    Obj1.print();
}
