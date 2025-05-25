#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");
    if (!fin) {
        cout << "Error opening file.\n";
        return 1;
    }

    int sum = 0, num;
    while (fin >> num) sum += num;
    fin.close();

    cout << "Sum: " << sum << endl;
    return 0;
}
