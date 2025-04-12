#include <iostream>
using namespace std;

class grandparent{
    public:
        string grandparent = "grandparent";
};

class parent: public grandparent{
    public:
        string parent = "Parent";
};

class child: public parent{
    public:
        string child = "Child";
};

int main(){
    cout << "hello" << endl;
    child c1;
    cout << c1.grandparent << endl;
    cout << c1.parent << endl;
    cout << c1.child << endl;
}
