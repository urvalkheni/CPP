#include <iostream>
#include <string>
using namespace std;

void showSBISIP() {
    cout << "\n===== SBI Mutual Fund SIP Plans =====\n";
    cout << "1. SBI Bluechip Fund\n";
    cout << "2. SBI Magnum Midcap Fund\n";
    cout << "3. SBI Equity Hybrid Fund\n";
    cout << "4. SBI Consumption Opportunities Fund\n";
    cout << "5. SBI Gold Fund\n";
    cout << "Min SIP: Rs. 500/month\n";
    cout << "NFO: Nifty200 Quality 30 Index Fund (Rs. 5000 min lump sum)\n";
}

void showHDFCSIP() {
    cout << "\n===== HDFC Mutual Fund SIP Plans =====\n";
    cout << "1. HDFC Flexi Cap Fund\n";
    cout << "2. HDFC Midcap Opportunities Fund\n";
    cout << "3. HDFC Small Cap Fund\n";
    cout << "4. HDFC Retirement Savings Fund\n";
    cout << "5. HDFC Balanced Advantage Fund\n";
    cout << "Min SIP: Rs. 100/month\n";
}

void showBOBSIP() {
    cout << "\n===== Bank of Baroda (Baroda BNP Paribas) SIP Plans =====\n";
    cout << "1. Baroda BNP Paribas Midcap Fund\n";
    cout << "2. Baroda BNP Paribas Hybrid Equity Fund\n";
    cout << "3. Baroda BNP Paribas Value Fund\n";
    cout << "4. Baroda BNP Paribas PSU Bond Fund\n";
    cout << "Min SIP: Rs. 500–1000/month\n";
}

void showAxisSIP() {
    cout << "\n===== Axis Mutual Fund SIP Plans =====\n";
    cout << "1. Axis Bluechip Fund\n";
    cout << "2. Axis Flexi Cap Fund\n";
    cout << "3. Axis Midcap Fund\n";
    cout << "4. Axis ELSS (Tax Saver) Fund\n";
    cout << "5. Axis Nifty 100 Index Fund\n";
    cout << "Min SIP: Rs. 100/month\n";
}

int main() {
    int choice;

    while (true) {
        cout << "\n\n=========== SIP Info Center ===========\n";
        cout << "1. SBI Mutual Fund Plans\n";
        cout << "2. HDFC Mutual Fund Plans\n";
        cout << "3. Bank of Baroda SIP Plans\n";
        cout << "4. Axis Mutual Fund Plans\n";
        cout << "5. Show All\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: showSBISIP(); break;
            case 2: showHDFCSIP(); break;
            case 3: showBOBSIP(); break;
            case 4: showAxisSIP(); break;
            case 5:
                showSBISIP();
                showHDFCSIP();
                showBOBSIP();
                showAxisSIP();
                break;
            case 0:
                cout << "Thank you! Visit AMC websites for real-time SIP data.\n";
                return 0;
            default:
                cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
