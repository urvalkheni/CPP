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
int productCount = 0;

// Check for duplicate product ID
bool isDuplicateID(int id) {
    for (int i = 0; i < productCount; i++) {
        if (inventory[i].id == id)
            return true;
    }
    return false;
}

// Add new product
void addProduct(int id, string name, int quantity, float price) {
    if (productCount >= MAX_PRODUCTS) {
        cout << "Inventory full! Cannot add more products.\n";
        return;
    }

    if (isDuplicateID(id)) {
        cout << "Error: Product ID already exists.\n";
        return;
    }

    if (quantity < 0 || price < 0) {
        cout << "Invalid quantity or price.\n";
        return;
    }

    inventory[productCount].id = id;
    inventory[productCount].name = name;
    inventory[productCount].quantity = quantity;
    inventory[productCount].price = price;
    productCount++;

    cout << "Product added successfully.\n";
}

// Update product quantity (positive = add, negative = sell)
void updateQuantity(int id, int quantity) {
    for (int i = 0; i < productCount; i++) {
        if (inventory[i].id == id) {
            if (inventory[i].quantity + quantity < 0) {
                cout << "Error: Not enough stock to remove.\n";
                return;
            }
            inventory[i].quantity += quantity;
            cout << "Quantity updated successfully.\n";
            return;
        }
    }
    cout << "Product ID not found.\n";
}

// Delete a product by ID
void deleteProduct(int id) {
    for (int i = 0; i < productCount; i++) {
        if (inventory[i].id == id) {
            for (int j = i; j < productCount - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            productCount--;
            cout << "Product deleted successfully.\n";
            return;
        }
    }
    cout << "Product ID not found.\n";
}

// Calculate total inventory value
float calculateTotalValue() {
    float total = 0;
    for (int i = 0; i < productCount; i++) {
        total += inventory[i].quantity * inventory[i].price;
    }
    return total;
}

// Display all products
void displayInventory() {
    cout << "\n--- Inventory ---\n";
    if (productCount == 0) {
        cout << "Inventory is empty.\n";
        return;
    }

    for (int i = 0; i < productCount; i++) {
        cout << "ID: " << inventory[i].id
             << ", Name: " << inventory[i].name
             << ", Quantity: " << inventory[i].quantity
             << ", Price: ₹" << inventory[i].price << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n========= INVENTORY MENU =========";
        cout << "\n1. Add Product";
        cout << "\n2. Update Quantity";
        cout << "\n3. Display Inventory";
        cout << "\n4. Calculate Total Value";
        cout << "\n5. Delete Product";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id, quantity;
                float price;
                string name;

                cout << "Enter Product ID: ";
                cin >> id;
                cout << "Enter Product Name: ";
                cin.ignore(); // clear buffer
                getline(cin, name);
                cout << "Enter Quantity: ";
                cin >> quantity;
                cout << "Enter Price: ";
                cin >> price;

                addProduct(id, name, quantity, price);
                break;
            }

            case 2: {
                int id, quantity;
                cout << "Enter Product ID to update: ";
                cin >> id;
                cout << "Enter quantity to add (use negative for sale): ";
                cin >> quantity;

                updateQuantity(id, quantity);
                break;
            }

            case 3:
                displayInventory();
                break;

            case 4:
                cout << "Total Inventory Value: ₹" << calculateTotalValue() << endl;
                break;

            case 5: {
                int id;
                cout << "Enter Product ID to delete: ";
                cin >> id;
                deleteProduct(id);
                break;
            }

            case 6:
                cout << "\nThank you for using the Inventory System!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 6);

    cout << "\n24CE055 <---> URVAL KHENI" << endl;

    return 0;
}
