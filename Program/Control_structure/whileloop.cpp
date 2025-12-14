#include<iostream>
using namespace std;

int main(){
    cout << "=== While Loop Demonstration ==="<<endl<<endl;
    
    /* Syntax for while loop
    while(condition){
        C++ Statements;
    }
    */
    
    int limit;
    cout << "Enter the upper limit: ";
    if(!(cin >> limit) || limit < 0) {
        cout << "Error: Invalid input. Using default 40." << endl;
        limit = 40;
    }
    
    // Limit check
    if(limit > 1000) {
        cout << "Warning: Large limit. Using max 1000." << endl;
        limit = 1000;
    }
    
    cout << "\nCounting from 0 to " << limit << ":" << endl;
    cout << "==================" << endl;
    
    int i = 0;
    int sum = 0;
    int evenCount = 0, oddCount = 0;
    
    while(i <= limit){
        cout << i;
        if(i % 2 == 0) {
            cout << " (even)";
            evenCount++;
        } else {
            cout << " (odd)";
            oddCount++;
        }
        cout << endl;
        
        sum += i;
        i++;
    }
    
    cout << "\n=== Statistics ==="<<endl;
    cout << "Total numbers: " << (limit + 1) << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    cout << "Sum: " << sum << endl;
   
    return 0;
}