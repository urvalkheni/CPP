#include<iostream>
#include<vector>
using namespace std;
int recursiveSum(const vector<int>& arr, int n) {
    if (n == 0) return 0;
    return arr[n - 1] + recursiveSum(arr, n - 1);
}
int iterativeSum(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter number of elements :: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter "<<n<<"elements :: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"Recursive Sum :: "<<recursiveSum(arr,n)<<endl;
    cout<<"Iterative Sum :: "<<iterativeSum(arr)<<endl;
    return 0;
}