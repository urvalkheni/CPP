#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        } else if (amount > balance) {
            cout << "Error: Insufficient balance." << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void display_balance() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1("John Doe", 123456, 1000.0);
    BankAccount account2("Jane Smith", 654321, 500.0);

    cout << "--- Account 1 Operations ---" << endl;
    account1.display_balance();
    account1.deposit(200.0);
    account1.withdraw(150.0);
    account1.withdraw(1200.0);

    cout << "\n--- Account 2 Operations ---" << endl;
    account2.display_balance();
    account2.deposit(300.0);
    account2.withdraw(700.0);
    account2.withdraw(200.0);

    return 0;
}
