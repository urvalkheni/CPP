#include<iostream>
using namespace std;

int main(){
    cout << "=== Party Entry System ==="<<endl<<endl;
    
    //Selection Control structure If-else 
    int age;
    cout<<"Enter Your Age: ";
    
    // Input validation
    if(!(cin>>age)) {
        cout<<"Error: Invalid input. Please enter a number."<<endl;
        return 1;
    }
    
    if(age < 0 || age > 150) {
        cout<<"Error: Invalid age range (0-150)."<<endl;
        return 1;
    }
    
    // Enhanced if-else with more categories
    cout<<"\n--- Entry Decision ---"<<endl;
    
    if(age < 13) {
        cout<<"❌ Sorry, children under 13 cannot attend."<<endl;
    }
    else if(age < 18) {
        cout<<"⚠️  You need parental supervision (ages 13-17)."<<endl;
    }
    else if(age == 18) {
        cout<<"🎉 Just turned 18! Welcome to the party!"<<endl;
    }
    else if(age <= 60) {
        cout<<"✅ Welcome to the party!"<<endl;
    }
    else {
        cout<<"✅ Senior guest - VIP entry!"<<endl;
    }
    
    return 0;
}