#include <iostream>
using namespace std;


class Student{
    public:
        string StudentName;
        string StudentID;
        int StudentAge;

        Student(string name, string id, int age){
            StudentName = name;
            StudentID = id;
            StudentAge = age;
        }

        void info(){
            cout << "Name: " << StudentName << endl;
            cout << "ID: " << StudentID << endl;
            cout << "Age: " << StudentAge << endl;
        }

        ~Student(){
            cout << "Destructor called" << endl;
        }
};



int main() {
    Student Mohit("Mohit", "123", 20);
    Mohit.info();
    return 0;
}
