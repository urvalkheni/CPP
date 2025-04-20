#include<iostream>
using namespace std;
static int count;
class num{ 
    public:
     num(){
        count++;
        cout<<"This is the time when constructor is called for object number :: "<<count<<endl;
     }
     ~num(){
         cout<<"This is the time when destructor is called for object number :: "<<count<<endl;
        count--;
     }
};
int main(){
    cout<<"we are inside Main Function"<<endl;
    cout<<"Creat first object n1"<<endl;
    num n1,n4;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Create two more objects"<<endl;
        num n2,n3;   
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to Main"<<endl;
    return 0;
}