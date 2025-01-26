#include<iostream>
using namespace std;

int main(){
    int n;
    long long a, b, c;
    cout << "Enter The Last Value to End The Loop: ";
    cin >> n;

    // Loop through values of a, b, and c to find Pythagorean triplets
    for(a = 1; a <= n; a++){
        for(b = a; b <= n; b++){
            for(c = b; c <= n; c++){
                if(a*a + b*b == c*c){
                    cout << "Pythagorean Triplet: " << a << ", " << b << ", " << c << endl;
                }
            }
        }
    }

    return 0;
}
