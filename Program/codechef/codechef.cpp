#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate total event time
int calculateEventTime(int N, int A, int B) {
    int rounds = log2(N);  // Since N is a power of 2
    return (rounds * A) + ((rounds - 1) * B);
}

// Function to check if a number is a power of 2
bool isPowerOfTwo(int n) {
    return (n > 1) && ((n & (n - 1)) == 0);
}

int main() {
    int T;

    cout << "===============================================\n";
    cout << "   Welcome to Binary Battles Event Time Calculator!\n";
    cout << "===============================================\n";
    cout << "Enter the number of test cases: ";
    cin >> T;

    while (T--) {
        int N, A, B;

        cout << "\n-----------------------------------------------\n";
        cout << "Enter the event details below:\n";

        // Input validation for number of teams
        do {
            cout << "Number of teams (power of 2, N > 1): ";
            cin >> N;
            if (!isPowerOfTwo(N))
                cout << "Invalid input! N must be a power of 2 and greater than 1.\n";
        } while (!isPowerOfTwo(N));

        // Input for round duration and break time
        cout << "Duration of each round (A in minutes): ";
        cin >> A;

        cout << "Break time between rounds (B in minutes): ";
        cin >> B;

        int total_time = calculateEventTime(N, A, B);

        cout << "\n-----------------------------------------------\n";
        cout << "Total time for the event: " << total_time << " minutes\n";
        cout << "-----------------------------------------------\n";
    }

    cout << "\nThank you for using the Binary Battles Event Time Calculator!\n";
    cout << "===============================================\n";

    return 0;
}
