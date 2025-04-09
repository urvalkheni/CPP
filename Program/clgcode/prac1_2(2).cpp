#include <iostream>
#include <vector>
using namespace std;

class Product {
private:
    int id;
    string name;
    int quantity;
    float price;

public:
    Product(int id, string name, int quantity, float price) {
        this->id = id;
        this->name = name;
        this->quantity = quantity;
        this->price = price;
    }

    int getId() const { return id; }
    float getValue() const { return quantity * price; }

    void updateQuantity(int change) {
        quantity += change;
    }

    void display() const {
        cout << "ID: " << id << ", Name: " << name
             << ", Quantity: " << quantity
             << ", Price: ₹" << price << endl;
    }
};

class Inventory {
private:
    vector<Product> products;

public:
    void addProduct(int id, string name, int quantity, float price) {
        products.push_back(Product(id, name, quantity, price));
    }

    void updateProductQuantity(int id, int change) {
        for (auto& p : products) {
            if (p.getId() == id) {
                p.updateQuantity(change);
                return;
            }
        }
        cout << "Product ID not found.\n";
    }

    void displayInventory() const {
        cout << "\n--- Inventory ---\n";
        for (const auto& p : products) {
            p.display();
        }
    }

    float calculateTotalValue() const {
        float total = 0;
        for (const auto& p : products) {
            total += p.getValue();
        }
        return total;
    }
};

int main() {
    Inventory store;

    store.addProduct(101, "Soap", 30, 15.5);
    store.addProduct(102, "Shampoo", 20, 45.0);

    store.updateProductQuantity(101, 10);  // Restocking
    store.updateProductQuantity(102, -5);  // Sale

    store.displayInventory();

    cout << "\nTotal Inventory Value: ₹" << store.calculateTotalValue() << endl;

    cout<<endl<<"24CE055 <---> URVAL KHENI"<<endl;

    return 0;
}
