#include <iostream>
using namespace std;

class Payment{
    public:
        virtual void process(){
            cout << "This is Common Processing" << endl;
        }
};

class Gpay:public Payment {
    public:
        void process() override{
            cout << "Gpay Payment" << endl;
        }
};

class Paytm: public Payment {
    public:
        void process() override{
            cout << "Paytm Payment" << endl;
        }
};

int main(){
    Payment* p1 = new Gpay();
    Payment* p2 = new Paytm();

    p1->process();
    p2->process();
}
