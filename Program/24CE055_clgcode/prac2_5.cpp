#include <iostream>
#include<string>
#include <cmath>
#include <iomanip>

using namespace std;

class Loan {
private:
    string loanID;
    string applicantName;
    double loanAmount;
    double annualInterestRate;
    int tenureMonths;

public:
    Loan() {
        loanID = "L000";
        applicantName = "Test Applicant";
        loanAmount = 100000;
        annualInterestRate = 8.5;
        tenureMonths = 12;
    }

    Loan(string id, string name, double amount, double rate, int months) {
        loanID = id;
        applicantName = name;
        loanAmount = amount;
        annualInterestRate = rate;
        tenureMonths = months;
    }

    double calculateEMI() const {
        double P = loanAmount;
        double R = annualInterestRate / (12 * 100);
        int T = tenureMonths;
        double emi = (P * R * pow(1 + R, T)) / (pow(1 + R, T) - 1);
        return emi;
    }

    void displayLoanDetails() const {
        cout << "\n----- Loan Summary -----\n";
        cout << "Loan ID: " << loanID << endl;
        cout << "Applicant Name: " << applicantName << endl;
        cout << "Loan Amount: rupees " << fixed << setprecision(2) << loanAmount << endl;
        cout << "Annual Interest Rate: " << annualInterestRate << "%" << endl;
        cout << "Tenure: " << tenureMonths << " months" << endl;
        cout << "Calculated EMI: rupees " << fixed << setprecision(2) << calculateEMI() << endl;
    }
};

int main() {
    Loan defaultLoan;
    defaultLoan.displayLoanDetails();

    string id, name;
    double amount, rate;
    int months;

    cout << "\nEnter Loan Details:\n";
    cout << "Loan ID: ";
    cin >> id;
    cin.ignore();
    cout << "Applicant Name: ";
    getline(cin, name);
    cout << "Loan Amount (rupees): ";
    cin >> amount;
    cout << "Annual Interest Rate (%): ";
    cin >> rate;
    cout << "Tenure (in months): ";
    cin >> months;

    Loan userLoan(id, name, amount, rate, months);
    userLoan.displayLoanDetails();


    cout<<endl<<"24CE055 <---> URVAL KHENI"<<endl;
    return 0;
}
