#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
    string customerName;
    string accountNumber;
    double balance;

public:
    Account(const string& name, const string& accNum, double initialBalance)
        : customerName(name), accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful.\n";
    }

    void displayBalance() {
        cout << "Customer: " << customerName << ", Account Number: " << accountNumber
             << ", Balance: $" << balance << endl;
    }
};

class SavingsAccount : public Account {
    double interestRate;

public:
    SavingsAccount(const string& name, const string& accNum, double initialBalance, double rate)
        : Account(name, accNum, initialBalance), interestRate(rate) {}

    void computeInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest of $" << interest << " added.\n";
    }
};

class CurrentAccount : public Account {
    double minimumBalance;
    double penalty;

public:
    CurrentAccount(const string& name, const string& accNum, double initialBalance, double minBal, double penaltyAmt)
        : Account(name, accNum, initialBalance), minimumBalance(minBal), penalty(penaltyAmt) {}

    void withdraw(double amount) {
        if (balance - amount < minimumBalance) {
            cout << "Insufficient funds. Penalty imposed.\n";
            balance -= penalty;
        }
        balance -= amount;
        cout << "Withdrawal of $" << amount << " successful.\n";
    }
};

int main() {
    SavingsAccount savings("mayank sharma", "SA001", 1000, 5); 
    savings.deposit(5000);
    savings.computeInterest();
    savings.displayBalance();

    CurrentAccount current("Jatin dadar", "CA001", 2000, 5000, 10); 
    current.withdraw(100);
    current.displayBalance();

    return 0;
}