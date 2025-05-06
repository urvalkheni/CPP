#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Transaction {
    string type;
    double amount;
    string message;
};

class BankAccount {
private:
    string holderName;
    double balance;
    vector<Transaction> history;

public:
    BankAccount(const string& name, double initialBalance)
        : holderName(name), balance(initialBalance) {
        if (initialBalance < 0) {
            cout << "Warning: Initial balance is negative. Setting it to 0.\n";
            balance = 0;
        }
        history.push_back({"Account Created", balance, "Initial Balance Set"});
    }

    void deposit(double amount) {
        if (amount <= 0) {
            history.push_back({"Deposit", amount, "Failed: Invalid deposit amount"});
            cout << "Invalid deposit amount.\n";
            return;
        }
        balance += amount;
        history.push_back({"Deposit", amount, "Success"});
        cout << "Deposited rupees " << fixed << setprecision(2) << amount << " successfully.\n";
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            history.push_back({"Withdraw", amount, "Failed: Invalid withdrawal amount"});
            cout << "Withdrawal amount must be positive.\n";
            return;
        }
        if (amount > balance) {
            history.push_back({"Withdraw", amount, "Failed: Insufficient balance"});
            cout << "Insufficient balance.\n";
            return;
        }
        balance -= amount;
        history.push_back({"Withdraw", amount, "Success"});
        cout << "Withdrawn rupees " << fixed << setprecision(2) << amount << " successfully.\n";
    }

    void showBalance() const {
        cout << "\nCurrent balance for " << holderName
             << ": rupees " << fixed << setprecision(2) << balance << "\n";
    }

    void showTransactionLog() const {
        cout << "\nTransaction History for " << holderName << ":\n";
        cout << "---------------------------------------------\n";
        for (const auto& t : history) {
            cout << t.type << " of rupees " << fixed << setprecision(2)
                 << t.amount << " - " << t.message << "\n";
        }
    }
};

int main() {
    BankAccount account("Urval", 10000);

    account.deposit(5000);
    account.withdraw(12000);  // should fail
    account.withdraw(3000);   // should succeed
    account.deposit(-100);    // should fail
    account.withdraw(-50);    // should fail

    account.showBalance();
    account.showTransactionLog();

    cout<<endl<<"24CE055 <---> URVAL KHENI"<<endl;

    return 0;
}
