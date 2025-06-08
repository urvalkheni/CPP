#include <iostream>
#include <vector>
#include <iomanip>  // for std::setprecision

using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Vector to store marks
    vector<float> marks(n);
    float sum = 0;

    // Input marks
    for (int i = 0; i < n; ++i) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
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
