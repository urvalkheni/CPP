#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    double balance;
    vector<string> transactionHistory;

public:
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    virtual void deposit(double amount) {
        balance += amount;
        transactionHistory.push_back("Deposited: " + to_string(amount));
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            transactionHistory.push_back("Withdrew: " + to_string(amount));
        } else {
            cout << "Insufficient balance.\n";
        }
    }

    virtual void undoLastTransaction() {
        if (transactionHistory.empty()) {
            cout << "No transaction to undo.\n";
            return;
        }

        string last = transactionHistory.back();
        if (last.find("Deposited: ") != string::npos) {
            double amt = stod(last.substr(11));
            balance -= amt;
            cout << "Undo deposit of " << amt << endl;
        } else if (last.find("Withdrew: ") != string::npos) {
            double amt = stod(last.substr(9));
            balance += amt;
            cout << "Undo withdrawal of " << amt << endl;
        }

        transactionHistory.pop_back();
    }

    virtual void display() {
        cout << "Account No: " << accountNumber << "\nBalance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
    double interestRate;

public:
    SavingsAccount(int accNum, double initialBalance, double rate)
        : BankAccount(accNum, initialBalance), interestRate(rate) {}

    void addInterest() {
        double interest = balance * interestRate;
        deposit(interest);
    }
};

class CurrentAccount : public BankAccount {
    double overdraftLimit;

public:
    CurrentAccount(int accNum, double initialBalance, double limit)
        : BankAccount(accNum, initialBalance), overdraftLimit(limit) {}

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            transactionHistory.push_back("Withdrew: " + to_string(amount));
        } else {
            cout << "Overdraft limit exceeded.\n";
        }
    }
};

int main() {
    BankAccount* account = nullptr;
    int choice, accNum;
    double initialBalance, rate, limit;

    cout << "Choose Account Type:\n1. Savings Account\n2. Current Account\nEnter choice: ";
    cin >> choice;

    cout << "Enter Account Number: ";
    cin >> accNum;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    if (choice == 1) {
        cout << "Enter Interest Rate (e.g., 0.05 for 5%): ";
        cin >> rate;
        account = new SavingsAccount(accNum, initialBalance, rate);
    } else if (choice == 2) {
        cout << "Enter Overdraft Limit: ";
        cin >> limit;
        account = new CurrentAccount(accNum, initialBalance, limit);
    } else {
        cout << "Invalid choice.\n";
        return 0;
    }

    int op;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Undo Last Transaction\n5. Add Interest (Savings only)\n0. Exit\nEnter option: ";
        cin >> op;

        if (op == 1) {
            double amt;
            cout << "Enter amount to deposit: ";
            cin >> amt;
            account->deposit(amt);
        } else if (op == 2) {
            double amt;
            cout << "Enter amount to withdraw: ";
            cin >> amt;
            account->withdraw(amt);
        } else if (op == 3) {
            account->display();
        } else if (op == 4) {
            account->undoLastTransaction();
        } else if (op == 5 && choice == 1) {
            ((SavingsAccount*)account)->addInterest();
        }
    } while (op != 0);

    delete account;

    cout<<endl<<"24CE055 <---> URVAL KHENI"<<endl;
    return 0;
}
