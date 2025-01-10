#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter The Number :: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<"So the Sum of 1 to "<<n<<" is :: "<<sum<<endl;
    return 0;
}
