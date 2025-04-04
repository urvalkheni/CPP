#include <iostream>
using namespace std;

class first {
private:
    string privateData;

protected:
    string protectedData;

public:
    string publicData;

    void inputBase() {
        cout << "Enter private data: ";
        cin >> privateData;
        cout << "Enter protected data: ";
        cin >> protectedData;
        cout << "Enter public data: ";
        cin >> publicData;
    }

    void displayBase() {
        cout << "Base class display:" << endl;
        cout << "Private: " << privateData << endl;
        cout << "Protected: " << protectedData << endl;
        cout << "Public: " << publicData << endl;
    }
};

class second : public first {
public:
    void accessMembers() {
        protectedData = "modifiedProtected";
        publicData = "modifiedPublic";

        cout << "\nDerived class access:" << endl;
        cout << "Protected: " << protectedData << endl;
        cout << "Public: " << publicData << endl;
    }
};

int main() {
    second urval;
    urval.inputBase();
    urval.displayBase();
    urval.accessMembers();

    return 0;
}
