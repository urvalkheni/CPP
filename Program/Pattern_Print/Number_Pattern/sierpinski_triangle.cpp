// Print Sierpinski triangle using bitwise rule (Pascal mod 2 appearance)
#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows for Sierpinski triangle: ";
    if(!(cin >> rows) || rows <= 0) return 1;
    for(int r=0;r<rows;++r){
        for(int s=0;s<rows-r-1;++s) cout << ' ';
        for(int c=0;c<=r;++c){
            // Use (r & c) == 0 for Pascal mod2 inverted, use (r & c) ? '*' : ' '
            cout << (((r & c) == 0) ? '*' : ' ');
        }
        cout << '\n';
    }
    return 0;
}
