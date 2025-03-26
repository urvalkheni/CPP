#include <iostream>
#include <vector>
#include<iomanip>
using namespace std;

void spiralMatrix(int n) {
    vector<vector<int>> mat(n, vector<int>(n));
    int num = 1, start = 0, end = n - 1;
    
    while (start <= end) {
        for (int i = start; i <= end; i++) mat[start][i] = num++;
        for (int i = start + 1; i <= end; i++) mat[i][end] = num++;
        for (int i = end - 1; i >= start; i--) mat[end][i] = num++;
        for (int i = end - 1; i > start; i--) mat[i][start] = num++;
        start++; end--;
    }
    
    for (const auto &row : mat) {
        for (int val : row) cout <<setw(2)<< val << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    spiralMatrix(n);
    return 0;
}