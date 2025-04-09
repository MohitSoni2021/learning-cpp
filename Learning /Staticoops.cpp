#include <iostream>
using namespace std;

class Testing{
    public:
    int count = 10;

    void updateValue(){
        this->count++;
    }

    static void staticFunction(){
        cout << "This is the data avaliable here" << endl;
    }

    friend void FriendFunction(){
        cout << "This is a friend function" << endl;
    }

    void getCount () {
        cout << count << endl;
    }

};


class ChildOne : public Testing {
    void childoneFunction () {
        cout << "This is a child one function" << endl;
    }

    string SetFunction (int num) {
        this->count = num;
        return "Success";
    }
};

int main() {
    Testing Daxuu;
    Daxuu.updateValue();
    Daxuu.getCount(); 
    Daxuu.staticFunction(); // This is also the way to access the static functions
    Testing::staticFunction(); // use to reference static functions inside the class

    ChildOne Mohit;
    Mohit.getCount();
    
    

    return 0;
}