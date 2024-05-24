#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
    string accountNumber;
    double balance;

public:
    Account(const string& accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful.\n";
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            cout << "Insufficient funds.\n";
        }
    }

    virtual void displayBalance() {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }
};

class SavingsAccount : public Account {
    double interestRate;

public:
    SavingsAccount(const string& accNum, double initialBalance, double rate) : Account(accNum, initialBalance), interestRate(rate) {}

    void calculateInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest of $" << interest << " added.\n";
    }
};

class CurrentAccount : public Account {
    double minimumBalance;
    double serviceCharge;

public:
    CurrentAccount(const string& accNum, double initialBalance, double minBal, double charge) : Account(accNum, initialBalance), minimumBalance(minBal), serviceCharge(charge) {}

    void checkMinimumBalance() {
        if (balance < minimumBalance) {
            balance -= serviceCharge;
            cout << "Service charge of $" << serviceCharge << " imposed due to balance below minimum.\n";
        }
    }
};

int main() {
    // Creating savings account
    SavingsAccount savings("SA001", 1000, 5); 

    // Creating current account
    CurrentAccount current("CA001", 2000, 500, 10); 
    
    savings.deposit(500);
    savings.calculateInterest();
    savings.displayBalance();

    current.withdraw(100);
    current.checkMinimumBalance();
    current.displayBalance();

    return 0;
}