#include <iostream>
#include <string>

using namespace std;

#define MAX_PRODUCTS 100

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

Product inventory[MAX_PRODUCTS];
int count = 0;

void addProduct(int id, string name, int quantity, float price) {
    inventory[count].id = id;
    inventory[count].name = name;
    inventory[count].quantity = quantity;
    inventory[count].price = price;
    count++;
}

void updateQuantity(int id, int quantity) {
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == id) {
            inventory[i].quantity += quantity;
            return;
        }
    }
    cout << "Product ID not found." << endl;
}

float calculateTotalValue() {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += inventory[i].quantity * inventory[i].price;
    }
    return total;
}

void displayInventory() {
    cout << "\n--- Inventory ---" << endl;
    for (int i = 0; i < count; i++) {
        cout << "ID: " << inventory[i].id
             << ", Name: " << inventory[i].name
             << ", Quantity: " << inventory[i].quantity
             << ", Price: ₹" << inventory[i].price << endl;
    }
}

int main() {
    addProduct(101, "Soap", 30, 15.5);
    addProduct(102, "Shampoo", 20, 45.0);

    updateQuantity(101, 10);  // Restocking
    updateQuantity(102, -5);  // Sale

    displayInventory();

    cout << "\nTotal Inventory Value: ₹" << calculateTotalValue() << endl;

    cout<<endl<<"24CE055 <---> URVAL KHENI"<<endl;

    return 0;
}
