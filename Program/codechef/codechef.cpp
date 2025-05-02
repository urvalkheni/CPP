#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    
    // Ask user for the number of test cases
    cout << "Welcome to Binary Battles Event Time Calculator!" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Enter the number of test cases :: ";
    cin >> T;
    
    while (T--) {
        int N, A, B;
        
        // Input number of teams, duration of each round, and break duration
        cout << "\n-----------------------------------------------" << endl;
        cout << "Enter the following details for the event ::" << endl;
        cout << "Number of teams (N) :: ";
        cin >> N;
        cout << "Duration of each round (A in minutes) :: ";
        cin >> A;
        cout << "Break time between rounds (B in minutes) :: ";
        cin >> B;
        
        // Calculate the number of rounds and total event time
        int rounds = log2(N); // since N is a power of 2
        int total_time = (rounds * A) + ((rounds - 1) * B);
        
        // Output the result
        cout << "\n-----------------------------------------------" << endl;
        cout << "The total time for the event is :: " << total_time << " minutes." << endl;
        cout << "-----------------------------------------------\n";
    }
    
    cout << "Thank you for using the Binary Battles Event Time Calculator!" << endl;
    return 0;
}