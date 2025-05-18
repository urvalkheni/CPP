#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}

    q.back() += 5;

    cout<<q.back()<<endl; //prints 9
    cout<<q.front()<<endl;//prints 2
    q.pop(); //{2,9}
    cout<<q.front()<<endl;//prints 2

    // size swap empty same as stack

}
int main(){
    explainQueue();
    return 0;
}