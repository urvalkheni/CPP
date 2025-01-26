#include<iostream>
using namespace std;

void pyth(int a, int b, int c){
    if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (a*a == b*b + c*c)) {
        cout << "Triangle is a Pythagoras Triangle." << endl;
    }
    else {
        cout << "Triangle is not a Pythagoras Triangle." << endl;
    }
}

int main(){
    int side1, side2, side3;
    cout << "Enter The First Side :: "; cin >> side1;
    cout << "Enter The Second Side :: "; cin >> side2;
    cout << "Enter The Third Side :: "; cin >> side3;
    
    if(side1 > side2 && side1 > side3) {
        pyth(side1, side2, side3);
    }
    else if(side2 > side1 && side2 > side3) {
        pyth(side2, side1, side3);
    }
    else {
        pyth(side3, side1, side2);
    }

    return 0;
}
