#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Function to set data
    void setAccountDetails() {
        cout<<"Enter Account Holder Name :: ";
        getline(cin,accountHolderName);

        cout<<"Enter Account Number :: ";
        cin>>accountNumber;

        cout<<"Enter Initial Balance :: ";
        cin>>balance;
        cin.ignore(); // Clear the buffer of input
    }

    void deposit(double amount) {
        if(amount > 0){
            balance += amount;
            cout<<"Deposit successful...New balance :: "<<balance<<endl;
        } 
        else{
            cout<<"Invalid deposit amount."<<endl;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout<<"Withdrawal successful...Remaining balance :: "<<balance<<endl;
        } 
        else if(amount > balance) {
            cout<<"Error: Insufficient balance."<<endl;
        } 
        else{
            cout<<"Invalid withdrawal amount."<<endl;
        }
    }

    void display_balance() const {
        cout<<"\n--- Account Info ---"<<endl;
        cout<<"Account Holder :: "<<accountHolderName<<endl;
        cout<<"Account Number :: "<<accountNumber<<endl;
        cout<<"Current Balance :: "<<balance<<endl;
    }
};

int main() {
    BankAccount account;
    account.setAccountDetails(); // Manually input data
    int choice;
    double amount;
    do {
        cout << "\n---- Bank Menu ----" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice){
            case 1:
                cout<<"Enter amount to deposit :: ";
                cin>>amount;
                account.deposit(amount);
                break;

            case 2:
                cout<<"Enter amount to withdraw :: ";
                cin>>amount;
                account.withdraw(amount);
                break;

            case 3:
                account.display_balance();
                break;

            case 4:
                cout<<"Exiting...Thank you for using our bank!"<<endl;
                break;

            default:
                cout<<"Invalid choice! Please enter between 1-4."<<endl;
        }
    } while (choice != 4);
    cout << endl << "24CE055 <---> URVAL KHENI" << endl;
    return 0;
}
