#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    cout<<v[0]<<" "<<v[1]<<endl;

    vector<pair<int ,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);


    vector<int> x(5,100);

    vector<int> u(5);

    vector<int> u1(5,20);
    vector<int> u2(u1);

    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it) <<endl;

    it = it + 2;
    cout<<*(it)<<endl;
    vector<int>::iterator it1 = v.end();
    //cout<<*(it)<<endl;
    // vector<int>::iterator it = v.rend();  
    // //cout<<*(it)<<endl;
    // vector<int>::iterator it = v.rbegin();
    // //cout<<*(it)<<endl;
    cout<<v.back()<<" "<<endl;

    for(auto it : v){
        cout<<it<<" ";
    }
    v.erase(v.begin()+1); // single deletation
    v.erase(v.begin()+2,v.begin()+4); //{start,end}

    //Insert Function
    vector<int> ur(2,100);//{100,100}
    ur.insert(ur.begin(),300);//{300,100,100}
    ur.insert(ur.begin()+1,2,100);//{300,10,10,100,100}

    vector<int> copy(2,50); //{50,50}
    ur.insert(ur.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

    cout<<ur.size()<<endl;//give the size of the vector

    v.pop_back();cout<<endl;
    u1.swap(u2);
    v.clear();
    cout<<v.empty();
    cout<<endl;
}
int main(){
    explainVector();
    return 0;
}