#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter The Number n :: ";
    cin >> n;

    if (n < 3) {  // Ensuring minimum size for visibility
        cout << "Enter a value greater than or equal to 3.";
        return 0;
    }

    for (int i=1; i <=n; i++) {
        for (int j=1;j<n;j++) {  
            if(j==1 || (i<3 && i+j==n) || (i>=3 && i==j+1))cout<<"*";
            else cout<<" ";
        }
        cout << endl;
    }

    return 0;
}
