#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Enter rows and columns: ";
    cin >> M >> N;

    int **arr = new int*[M];
    for (int i = 0; i < M; ++i)
        arr[i] = new int[N];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j)
            cin >> arr[i][j];

    cout << "Transpose:\n";
    for (int j = 0; j < N; ++j) {
        for (int i = 0; i < M; ++i)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < M; ++i)
        delete[] arr[i];
    delete[] arr;

    return 0;
}
