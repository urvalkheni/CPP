// Collatz Conjecture: Print sequence for a given starting number
#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Enter starting number for Collatz sequence: ";
    if(!(cin >> n) || n <= 0) return 1;
    
    cout << "Collatz sequence: ";
    int steps = 0;
    while(n != 1){
        cout << n << " -> ";
        if(n % 2 == 0) n /= 2;
        else n = 3*n + 1;
        steps++;
        if(steps > 10000) { cout << "...(sequence too long)"; break; }
    }
    if(n == 1) cout << "1";
    cout << "\nSteps: " << steps << '\n';
    return 0;
}
