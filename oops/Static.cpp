#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    void increment() {
        count++;
    }

    void display() {
        cout << "Current Count: " << count << endl;
    }

    static void sum(int a, int b){
        cout << "a+b = " << a+b << endl;
        count++;
    }

    static void getval(){
        cout << count << endl;
    }

};

int Counter::count = 0;

int main(){
    Counter Obj1, Obj2, Obj3;
    Obj1.increment();
    Obj1.display();

    Obj2.increment();
    Obj2.increment();
    Obj2.display();

    Counter::sum(10, 20);
    Obj3.display();
    Obj3.getval();
}
