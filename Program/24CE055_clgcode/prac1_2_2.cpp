#include <iostream>
#include <string>
using namespace std;

#define MAX_PRODUCTS 100

class Product {
public:
    int id;
    string name;
    int quantity;
    float price;

    Product() {
        id = 0;
        name = "";
        quantity = 0;
        price = 0.0;
    }

    void inputProduct() {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayProduct() const {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Quantity: " << quantity
             << ", Price: ₹" << price << endl;
    }
};

class Inventory {
private:
    Product inventory[MAX_PRODUCTS];
    int count;

public:
    Inventory() {
        count = 0;
    }

    void addProduct() {
        if (count >= MAX_PRODUCTS) {
            cout << "Inventory full! Cannot add more products.\n";
            return;
        }
        Product p;
        p.inputProduct();
        inventory[count++] = p;
        cout << "Product added successfully.\n";
    }

    void updateQuantity() {
        int id, qty;
        cout << "Enter Product ID to update: ";
        cin >> id;
        cout << "Enter quantity to add (use negative number for sale): ";
        cin >> qty;

        for (int i = 0; i < count; i++) {
            if (inventory[i].id == id) {
                inventory[i].quantity += qty;
                cout << "Quantity updated successfully.\n";
                return;
            }
        }
        cout << "Product ID not found.\n";
    }

    void displayInventory() const {
        cout << "\n--- Inventory ---" << endl;
        for (int i = 0; i < count; i++) {
            inventory[i].displayProduct();
        }
    }

    void calculateTotalValue() const {
        float total = 0;
        for (int i = 0; i < count; i++) {
            total += inventory[i].quantity * inventory[i].price;
        }
        cout << "Total Inventory Value: ₹" << total << endl;
    }
};

int main() {
    Inventory inv;
    int choice;

    do {
        cout << "\n========= INVENTORY MENU =========";
        cout << "\n1. Add Product";
        cout << "\n2. Update Quantity";
        cout << "\n3. Display Inventory";
        cout << "\n4. Calculate Total Value";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inv.addProduct();
                break;

            case 2:
                inv.updateQuantity();
                break;

            case 3:
                inv.displayInventory();
                break;

            case 4:
                inv.calculateTotalValue();
                break;

            case 5:
                cout << "\nThank you for using the Inventory System!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);

    cout << "\n24CE055 <---> URVAL KHENI" << endl;

    return 0;
}
