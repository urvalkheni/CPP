#include <iostream>
using namespace std;
const int MAX_PRODUCTS = 100;
class Product {
public:
    int productId;
    string name;
    int quantity;
    double price;
    Product() {}
    Product(int id, string name, int qty, double price) {
        this->productId = id;
        this->name = name;
        this->quantity = qty;
        this->price = price;
    }
    void updateQuantity(int qty) {
        quantity += qty;
    }
    double getValue() {
        return quantity * price;
    }
};

class Inventory {
private:
    Product products[MAX_PRODUCTS];
    int productCount = 0;
public:
    void addProduct(int productId, string name, int quantity, double price) {
        for (int i = 0; i < productCount; i++) {
            if (products[i].productId == productId) {
                cout << "Product already exists!" << endl;
                return;
            }
        }
        if (productCount < MAX_PRODUCTS) {
            products[productCount++] = Product(productId, name, quantity, price);
            cout << "Product '" << name << "' added." << endl;
        } else {
            cout << "Inventory full!" << endl;
        }
    }
    void updateQuantity(int productId, int quantity) {
        for (int i = 0; i < productCount; i++) {
            if (products[i].productId == productId) {
                products[i].updateQuantity(quantity);
                cout << "Updated quantity of '" << products[i].name << "' to " << products[i].quantity << "." << endl;
                return;
            }
        }
        cout << "Product not found!" << endl;
    }
    void calculateTotalValue() {
        double totalValue = 0;
        for (int i = 0; i < productCount; i++) {
            totalValue += products[i].getValue();
        }
        cout << "Total inventory value: ₹" << totalValue << endl;
    }
};
int main() {
    Inventory inventory;
    inventory.addProduct(1, "Laptop", 10, 80000);
    inventory.addProduct(2, "Mouse", 50, 2000);
    inventory.updateQuantity(1, 5);
    inventory.calculateTotalValue();
    return 0;
}
