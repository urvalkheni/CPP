#include<iostream>
using namespace std;
float moneyReceived(int currentMoney,float factor=1.04){ // actual parameter and always default argument comes on left side
    return (currentMoney * factor);
}
int main(){
    int money = 100000;
    cout<<"If You Have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<<" Rs after 1 Year"<<endl;
    cout<<"For VIP : If You Have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money,1.1)<<" Rs after 1 Year"<<endl; // here you give formal parameter
    return 0;
}