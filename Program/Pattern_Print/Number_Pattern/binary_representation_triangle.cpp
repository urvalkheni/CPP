// Print triangle of binary representations of row numbers (aligned)
#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows for binary triangle: ";
    if(!(cin >> rows) || rows<=0) return 1;
    int width = 0;
    int maxNum = rows;
    while((1<<width) <= maxNum) ++width;
    for(int r=1;r<=rows;++r){
        for(int s=0;s<rows-r;++s) cout << ' ';
        for(int b=width-1;b>=0;--b) cout << (((r>>b)&1)?'1':'0');
        cout << '\n';
    }
    return 0;
}
