#include <iostream>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        owner = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "💰 Deposited: $" << amount << endl;
        } else {
            cout << "❌ Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "💸 Withdrawn: $" << amount << endl;
        } else {
            cout << "❌ Insufficient balance or invalid amount!" << endl;
        }
    }

    void displayBalance() {
        cout << "📊 Account Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount("Urahara Kisuke", 1000.0);  // Initial balance: $1000

    cout << "🏦 Welcome to Your Bank Account!" << endl;
    myAccount.displayBalance();

    myAccount.deposit(500);     // Deposit $500
    myAccount.withdraw(200);    // Withdraw $200
    myAccount.displayBalance(); // Check balance

    return 0;
}
