#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // Print lengths
    cout << a.size() << " " << b.size() << endl;

    // Concatenate strings
    cout << a + b << endl;

    // Swap first characters
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;

    return 0;
}
