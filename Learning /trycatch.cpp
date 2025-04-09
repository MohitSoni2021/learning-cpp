// #include <iostream>
// using namespace std;

// void divide(int a, int b) {
//     try {
//         if (b == 0) {
//             throw "Division by zero is not allowed!";
//         }
//         cout << "Result: " << a / b << endl;
//     } 
//     catch (const char* errorMsg) {
//         cout << "Error: " << errorMsg << endl;
//     }
// }

// int main() {
//     divide(10, 2); // Works fine
//     divide(5, 0);  // Throws an exception
//     return 0;
// }

#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;

    BankAccount(double initialBalance) : balance(initialBalance) {}

    void withdraw(double amount) {
        try {
            if (amount > balance) {
                throw "Insufficient balance!"; // Throws only allows strings as error messages
            }
            balance -= amount;
            cout << "Withdrawal successful! Remaining balance: " << balance << endl;
        }
        catch (const char* errorMsg) {
            cout << "Error: " << errorMsg << endl;
        }
    }
};

int main() {
    BankAccount account(1000);
    account.withdraw(500);  // Successful withdrawal
    account.withdraw(600);  // Throws an exception
    return 0;
}


