#include<iostream>
using namespace std;

int main(){
    cout << "=== For Loop Demonstration ==="<<endl<<endl;
    
    /* Syntax for for loop
    for(initialization;condition;updation){
        loop body(C++ Code);     
    }
    */
    
    int choice, times;
    
    cout << "Select loop type:" << endl;
    cout << "1. Simple message repetition" << endl;
    cout << "2. Number sequence" << endl;
    cout << "3. Multiplication table" << endl;
    cout << "4. Pattern printing" << endl;
    cout << "Enter choice: ";
    
    if(!(cin >> choice)) {
        cout << "Invalid input." << endl;
        return 1;
    }
    
    switch(choice) {
        case 1:
            cout << "How many times? ";
            cin >> times;
            for(int i = 1; i <= times; i++){
                cout << i << ". Hello World...!" << endl;
            }
            break;
            
        case 2:
            cout << "Enter limit: ";
            cin >> times;
            cout << "Numbers: ";
            for(int i = 1; i <= times; i++){
                cout << i << " ";
            }
            cout << endl;
            break;
            
        case 3:
            cout << "Enter number for table: ";
            cin >> times;
            for(int i = 1; i <= 10; i++){
                cout << times << " x " << i << " = " << times*i << endl;
            }
            break;
            
        case 4:
            cout << "Enter pattern size: ";
            cin >> times;
            for(int i = 1; i <= times; i++){
                for(int j = 1; j <= i; j++){
                    cout << "* ";
                }
                cout << endl;
            }
            break;
            
        default:
            cout << "Invalid choice." << endl;
    }
   
    return 0;
}