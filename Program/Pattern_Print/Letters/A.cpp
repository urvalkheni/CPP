#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The Number :: ";cin>>n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 2 * n; j++) {
            if (j==n-i || j==n+i || (i==n/2 && j>n-i&&j<n+i)) {
                cout<<"*";
            } else {
                cout <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}
