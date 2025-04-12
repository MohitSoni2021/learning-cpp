#include <iostream>
using namespace std;

//Incapsuation means hiding the main details and give the requried data
class Bank{
    private:
        int Balance = 0;

    public:
        Bank(int amount) {
            this->Balance = amount;
        }

        void withdraw(int amt) {
            (amt > this->Balance)? -1 : this->Balance -= amt;
        }

        void deposit(int amt){
            this->Balance += amt;
        }

        void getBal(){
            cout << "Remaining Balance : " << this->Balance << endl;
        }

};

int main(){
    Bank Mohit(5000);
    Mohit.getBal();
    Mohit.withdraw(6000);
}
