#include <iostream>
#include <vector>
#include <iomanip>  // for std::setprecision

using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Number of students must be positive." << endl;
        return 1;
    }

    // Vector to store marks
    vector<float> marks(n);
    float sum = 0;

    // Input marks
    for (int i = 0; i < n; ++i) {
        cout << "Enter marks of student " << i + 1 << ": ";
        if (!(cin >> marks[i]) || marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks. Please enter a value between 0-100." << endl;
            return 1;
        }
        sum += marks[i];
    }

    // Display each student's marks
    cout << "\n--- Student Marks ---\n";
    for (int i = 0; i < n; ++i) {
        cout << "Student " << i + 1 << ": " << marks[i] << " marks" << endl;
    }

    // Calculate average
    float average = sum / n;

    cout << fixed << setprecision(2); // For 2 decimal places
    cout << "\nTotal Marks: " << sum << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
