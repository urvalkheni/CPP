// Magic square generator for odd n (Siamese method)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter odd size n for magic square (e.g. 3,5,7): ";
    if(!(cin >> n) || n % 2 == 0 || n <= 0) {
        cout << "Invalid input: n must be a positive odd integer\n";
        return 1;
    }
    vector<vector<int>> a(n, vector<int>(n, 0));
    int num = 1;
    int i = 0, j = n/2;
    while(num <= n*n) {
        a[i][j] = num++;
        int ni = (i - 1 + n) % n;
        int nj = (j + 1) % n;
        if(a[ni][nj]) { i = (i + 1) % n; }
        else { i = ni; j = nj; }
    }
    cout << "Magic square (size=" << n << "):\n";
    for(int r=0;r<n;++r){
        for(int c=0;c<n;++c) cout << a[r][c] << '\t';
        cout << '\n';
    }
    return 0;
}
