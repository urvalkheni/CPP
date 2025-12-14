#include<iostream>
using namespace std;

int main(){
    cout << "=== Pointer Demonstration ==="<<endl<<endl;
    
    //pointer is a data type which holds the address of other data types
    int a = 10;
    int *ptr = &a; // where & is address operator, * is the dereference operator
    
    cout<<"1. Basic Pointer Operations:"<<endl;
    cout<<"   Address of a (using &) :: "<<&a<<endl;
    cout<<"   Address of a (using ptr) :: "<<ptr<<endl;
    cout<<"   Value of a (direct) :: "<<a<<endl;
    cout<<"   Value of a (using *ptr) :: "<<*ptr<<endl;
    
    // Modify through pointer
    cout<<"\n2. Modifying value through pointer:"<<endl;
    *ptr = 20;
    cout<<"   After *ptr = 20, a = "<<a<<endl;
    
    // Pointer arithmetic with array
    cout<<"\n3. Pointer Arithmetic with Array:"<<endl;
    int arr[] = {10, 20, 30, 40, 50};
    int *arrPtr = arr;
    
    for(int i = 0; i < 5; i++) {
        cout<<"   arr["<<i<<"] = "<<*(arrPtr + i)<<" at address "<<(arrPtr + i)<<endl;
    }
    
    // NULL pointer check
    cout<<"\n4. NULL Pointer Safety:"<<endl;
    int *nullPtr = nullptr;
    if(nullPtr == nullptr) {
        cout<<"   Pointer is NULL - safe to check before dereferencing!"<<endl;
    }
    
    return 0;
}