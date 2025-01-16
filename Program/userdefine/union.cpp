#include<iostream>
using namespace std;
// union is same as structure data type but it have some different properties
// structure provide security and union provide better meme
union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice = 45;
    m1.car = 'P';
    // m1.pounds = 200;
    cout<<m1.car<<endl;
    return 0;
}