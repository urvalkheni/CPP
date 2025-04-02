#include <iostream>
using namespace std;

class Medicine {
public:
    string type;
    string company;
    string dateOfManufacturing;

    void setMedicineDetails() {
        cout<<"Enter type of medicine :: ";
        cin>>type;
        cout<<"Enter company name :: ";
        cin>>company;
        cout<<"Enter date of :: ";
        cin>>dateOfManufacturing;
    }

    void displayMedicineDetails() {
        cout<< "Type :: "<<type<<endl<<"Company :: "<<company<<endl<<"Date of Manufacturing :: "<< dateOfManufacturing<<endl;
    }
};

class Tablet : public Medicine {
public:
    string name;
    int quantityPerPack;
    double pricePerTablet;

    void setTabletDetails() {
        setMedicineDetails();
        cout<<"Enter tablet name :: ";
        cin>>name;
        cout<<"Enter quantity per pack :: ";
        cin>>quantityPerPack;
        cout<<"Enter price per tablet :: ";
        cin>>pricePerTablet;
    }

    void displayTabletDetails() {
        cout << "Name :: " << name <<endl<< "Quantity per Pack :: " << quantityPerPack <<endl<< "Price per Tablet :: " << pricePerTablet <<endl;
    }
};

class Syrup : public Medicine {
public:
    double quantity;
    double dosagePerUnit;

    void setSyrupDetails() {
        setMedicineDetails();
        cout<<"Enter syrup quantity (ml) :: ";
        cin>>quantity;
        cout<<"Enter dosage per unit (ml) :: ";
        cin>>dosagePerUnit;
    }

    void displaySyrupDetails() {
        cout << "Quantity :: " << quantity << "ml"<<endl<<"Dosage per Unit :: "<<dosagePerUnit<<"ml"<<endl;
    }
};

class HybridMedicine : public Tablet, public Syrup {
public:
    void showDetails() {
        cout<<"--- Tablet Details ---"<<endl;
        Tablet::displayMedicineDetails();
        displayTabletDetails();

        cout<<endl<<"--- Syrup Details ---"<<endl;
        Syrup::displayMedicineDetails();
        displaySyrupDetails();
    }
};

int main() {
    HybridMedicine med;
    cout << "Enter details for Tablet :: "<<endl;
    med.Tablet::setTabletDetails();
    cout <<endl<< "Enter details for Syrup :: "<<endl;
    med.Syrup::setSyrupDetails();
    
    med.showDetails();
    
    return 0;
}
