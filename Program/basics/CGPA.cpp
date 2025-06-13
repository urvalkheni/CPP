#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void delay(int milliseconds) {
    clock_t start_time = clock();
    while (clock() < start_time + milliseconds * CLOCKS_PER_SEC / 1000);
}

int main() {
    string line1 = "CGPA is saal to Achhe Karunga";

    // Shrinking line1
    for (int i = line1.length(); i > 0; --i) {
        cout << line1.substr(0, i) << endl;
        delay(100);
    }
    // Growing line2 with intentional repeated stages
    string growSteps[] = {
        "CG", "CGP", "CGPA", "CGPA", "CGPA k", "CGPA ki", "CGPA ki", "CGPA ki t",
        "CGPA ki to", "CGPA ki to", "CGPA ki to l", "CGPA ki to la", "CGPA ki to lag",
        "CGPA ki to lag", "CGPA ki to lag g", "CGPA ki to lag ga", "CGPA ki to lag gay",
        "CGPA ki to lag gayi"
    };

    int steps = sizeof(growSteps) / sizeof(growSteps[0]);
    for (int i = 0; i < steps; ++i) {
        cout << growSteps[i] << endl;
        delay(100);
    }

    return 0;
}