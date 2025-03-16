#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter The Number n :: ";
    cin >> n;

    if (n < 3) {  // Ensuring minimum size for visibility
        cout << "Enter a value greater than or equal to 3.";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2 + 1; j++) {  
            if (j == 0 || i == j + n / 4 || i + j == n - n / 4 - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
