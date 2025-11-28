// Check if a number is perfect (equals sum of its proper divisors)
#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Enter number to check if perfect: ";
    if(!(cin >> n) || n <= 0) return 1;
    
    long long sum = 0;
    cout << "Divisors: 1";
    for(long long i=2; i*i<=n; i++){
        if(n % i == 0){
            sum += i;
            cout << " + " << i;
            if(i != n/i && n/i != n){
                sum += n/i;
                cout << " + " << n/i;
            }
        }
    }
    sum += 1; // Add 1
    
    cout << " = " << sum << '\n';
    if(sum == n) cout << n << " is a PERFECT number!\n";
    else cout << n << " is NOT a perfect number.\n";
    return 0;
}
