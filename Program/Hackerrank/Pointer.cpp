#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void maxmin(int *a,int *b){
    cout<<(*a + *b)<<endl;
    cout<<((*a>*b) ? (*a - *b) : (*b - *a));
}

int main() {
    int a,b;
    cin>>a>>b;
    maxmin(&a,&b);   
    return 0;
}
