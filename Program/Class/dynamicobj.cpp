#include<iostream>
using namespace std;
class Bank{
    int principal;
    int year;
    double rate;
    double returnValue;
    public :
    Bank(){
        principal = 0;
        year = 1;
        rate = 0;
    }
    Bank(int p,int y,double r);
    Bank(int p,int y,int r);
    void show();
    
};

Bank :: Bank(int p,int y, double r){
    principal = p;
    year = y;
    rate = r;
    returnValue = principal;
    for(int i=0;i<y;i++){
        returnValue = returnValue * (1+rate); 
    }
}
Bank :: Bank(int p,int y, int r){
    principal = p;
    year = y;
    rate = float(r)/100;
    returnValue = principal;
    for(int i=0;i<y;i++){
        returnValue = returnValue * (1+rate); 
    }
}
void Bank :: show(){
    cout<<endl<<"Principal amount was :: "<<principal<<" Return value after year "<<year<<" with interest "<<rate<<" is :: "<<returnValue<<endl;
}
int main(){
    Bank b1,b2,b3;
    int p,y,R;
    double r;
    cout<<"Enter the Value of p y and r :: ";
    cin>>p>>y>>r;
    b1 = Bank(p,y,r);
    cout<<"Enter the Value of p y and R :: ";
    cin>>p>>y>>R;
    b2 = Bank(p,y,R);
    b3 = Bank();
    b1.show();
    b2.show();
    b3.show();
    return 0;
}