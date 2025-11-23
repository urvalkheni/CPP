// Print Pascal triangle modulo 2 (1->'*', 0->' ') to show Sierpinski triangle
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int rows;
    cout << "Rows for Pascal (mod 2): ";
    if(!(cin >> rows) || rows<=0) return 1;
    vector<int> prev;
    for(int r=0;r<rows;++r){
        vector<int> cur(r+1);
        for(int i=0;i<=r;++i) cur[i] = ((i-1>=0?prev[i-1]:0) + (i< (int)prev.size()?prev[i]:0)) % 2;
        for(int s=0;s<rows-r-1;++s) cout << ' ';
        for(int v: cur) cout << (v?"*":" ");
        cout << '\n';
        prev = cur;
    }
    return 0;
}
