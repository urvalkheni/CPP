#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;

        int rounds = log2(N); // number of rounds
        int total_time = (rounds * A) + ((rounds - 1) * B);
        cout << total_time << "\n";
    }

    return 0;
}
