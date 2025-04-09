// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void makeSound() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void makeSound() override {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
//     public:
//         int data = 10;
// };

// int main() {
//     Animal* a = new Dog();
//     a->makeSound();
//     delete a;

//     Animal* cat = new Cat();
//     cat->makeSound();
//     delete cat;

//     return 0;
// }


#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

// Derived class overriding pure virtual function
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();   // Base class pointer to derived object
    Shape* s2 = new Rectangle();
    
    s1->draw();  // Calls Circle's draw()
    s2->draw();  // Calls Rectangle's draw()
    
    delete s1;
    delete s2;

    return 0;
}
