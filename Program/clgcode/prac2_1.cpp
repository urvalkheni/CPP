#include <iostream>

using namespace std;

const int MAX_PRODUCTS = 100;
int productCount = 0;

struct Product {
    int productId;
    string name;
    int quantity;
    double price;
};

Product inventory[MAX_PRODUCTS];

void addProduct(int productId, string name, int quantity, double price) {
    for (int i = 0; i < productCount; i++) {
        if (inventory[i].productId == productId) {
            cout << "Product already exists!" << endl;
            return;
        }
    }
    if (productCount < MAX_PRODUCTS) {
        inventory[productCount++] = {productId, name, quantity, price};
        cout << "Product '" << name << "' added." << endl;
    } else {
        cout << "Inventory full!" << endl;
    }
}

void updateQuantity(int productId, int quantity) {
    for (int i = 0; i < productCount; i++) {
        if (inventory[i].productId == productId) {
            inventory[i].quantity += quantity;
            cout << "Updated quantity of '" << inventory[i].name << "' to " << inventory[i].quantity << "." << endl;
            return;
        }
    }
    cout << "Product not found!" << endl;
}

void calculateTotalValue() {
    double totalValue = 0;
    for (int i = 0; i < productCount; i++) {
        totalValue += inventory[i].quantity * inventory[i].price;
    }
    cout << "Total inventory value: ₹" << totalValue << endl;
}

int main() {
    addProduct(1, "Laptop", 10, 80000);
    addProduct(2, "Mouse", 50, 2000);
    updateQuantity(1, 5);
    calculateTotalValue();
    return 0;
}
