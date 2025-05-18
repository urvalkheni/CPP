#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void explainmultiset(){
    //Everything is same as set
    //only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); //earse all 1

    int cnt = ms.count(1);

    ms.erase(ms.find(1));

    

}
int main(){
    explainmultiset();
    return 0;
}