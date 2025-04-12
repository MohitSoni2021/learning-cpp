#include <iostream>
using namespace std;

class Animal{
    public:
        string name;
};

class Herbi: public Animal{
    public:
        int capacity;
};

class Omi: public Animal{
    public:
        int capacity;
};

class Carni: public Animal{
    public:
        int capacity;
};


int main(){
    Herbi Cow;
    Cow.name = "Gai";
    Cow.capacity = 20;
    Omi Bear;
    Bear.name = "Bhalu";
    Bear.capacity = 50;
    Carni Lion;
    Lion.name = "ser";
    Lion.capacity = 60;

    cout << "Carni : " << "\n" << "Animal Name : " << Lion.name << " -> Animal Capacity : " << Lion.capacity << "\n" << endl;
    cout << "Herbi : " << "\n" << "Animal Name : " << Cow.name << " -> Animal Capacity : " << Cow.capacity << "\n" << endl;
    cout << "Omi : " << "\n" << "Animal Name : " << Bear.name << " -> Animal Capacity : " << Bear.capacity << endl;
}
