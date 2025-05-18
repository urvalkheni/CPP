#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void explainDeque(){
    deque<int>dq;

    dq.push_back(2);//{2}
    dq.emplace_back(4);//{2,4}
    dq.push_front(5);//{5,2,4}
    dq.emplace_back(3);
    // rest functions same as the vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}
int main(){
    explainDeque();
    return 0;
}