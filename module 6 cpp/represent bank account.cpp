#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true; 
        } else {
            cout << "Insufficient funds!" << endl;
            return false; 
        }
    }

    void display() {
        cout << "Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.depositorName = "Mark show";
    account.accountNumber = 123456789;
    account.accountType = "Savings";
    account.balance = 1000.0;
    
    account.deposit(500.0);
    account.withdraw(200.0);
    account.display();
    
    return 0;
}