#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void explainstack(){
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(4);//{4,3,2,1}
    st.emplace(5);//{5,4,3,2,1}
    //in stack are there are ony three fucnction pop,top,push

    cout<<st.top()<<endl;// print 5 "st[2] is invalid!"

    st.pop(); // remove 5 and now its look like {4,3,2,1}

    cout<<st.top()<<endl;//4
    cout<<st.size()<<endl;
    cout<<st.empty();

    stack<int> st1,st2;
    st1.swap(st2);
}
int main(){
    explainstack();
    return 0;
}