#include <iostream>
#include <vector>
using namespace std;

class Name {
public:
    string name;
    void getData() {
        cout<<"Enter Name :: ";
        cin>>name;
    }
    void displayData() const{
        cout<<"Name :: "<<name<<endl;
    }
};
int main() {
    vector<Name> nameList;
    int n;
    cout<<"Enter number of Names :: ";
    cin>>n; 
    for (int i=0;i<n;i++) {
        Name emp;  
        emp.getData();
        nameList.push_back(emp);
    }
    cout << "\nList of Names:\n";
    for (const auto& emp:nameList) {
        emp.displayData();
    }
    return 0;
}
