// Binary Battles (786) problem
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        
        int rounds = log2(N); // Since N is a power of 2
        int total_time = (rounds * A) + ((rounds - 1) * B);
        
        cout << total_time << endl;
    }
    cout<<endl<<"24CE055 <--> Urval Kheni"<<endl;
    return 0;
}
// code is still not complated
