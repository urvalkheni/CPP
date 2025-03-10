#include<iostream>
using namespace std;

void croutDecomposition(float mat[10][10], int n) {
    float L[10][10], U[10][10];

    // Initialize U as an identity matrix and L as zero matrix
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j)
                L[i][j] = 1; // Diagonal of L is 1
            else
                L[i][j] = 0;

            U[i][j] = 0;
        }
    }

    // Crout's Algorithm
    for(int i=0; i<n; i++) {
        // Calculate U matrix
        for(int j=i; j<n; j++) {
            float sum = 0;
            for(int k=0; k<i; k++)
                sum += L[i][k] * U[k][j];

            U[i][j] = mat[i][j] - sum;
        }

        // Calculate L matrix
        for(int j=i+1; j<n; j++) {
            float sum = 0;
            for(int k=0; k<i; k++)
                sum += L[j][k] * U[k][i];

            L[j][i] = (mat[j][i] - sum) / U[i][i];
        }
    }

    // Output L and U matrices
    cout << "\nLower Triangular Matrix (L):\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << L[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nUpper Triangular Matrix (U):\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << U[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    float mat[10][10];

    cout << "Enter the order of matrix (n x n): ";
    cin >> n;

    cout << "\nEnter the matrix elements (row-wise):\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    croutDecomposition(mat, n);

    return 0;
}
