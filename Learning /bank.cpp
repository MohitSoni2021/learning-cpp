#include <iostream>
using namespace std;

class Bank {
    private:
      int balance = 0;
    public:
      Bank(int amt){
          balance = amt;
      };

      void getbal(){
          cout << balance << endl;
      }

      void deposit(int amt){
          balance += amt;
          getbal();
      }

      void withdrawl(int amt) {
          balance -= amt;
          getbal();
      }
};

int main() {
    Bank Mohit(5000);
    Mohit.getbal();
}