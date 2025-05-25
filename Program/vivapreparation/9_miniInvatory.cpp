#include <iostream>
#include <vector>
#include <fstream>
#include <stdexcept>
using namespace std;

class Product {
    int id;
    string name;
    double price;
    int quantity;
public:
    Product(int i, string n, double p, int q) : id(i), name(n), price(p), quantity(q) {}

    double getTotal() const { return price * quantity; }

    void display() const {
        cout << "ID: " << id << ", Name: " << name
             << ", Price: " << price << ", Quantity: " << quantity
             << ", Total: " << getTotal() << endl;
    }
};

int main() {
    vector<Product> inventory = {
        Product(1, "Pen", 10.0, 100),
        Product(2, "Book", 50.0, 40),
        Product(3, "Bag", 250.0, 10)
    };

    try {
        ofstream fout("inventory.txt");
        if (!fout) throw runtime_error("File error");

        for (auto &p : inventory) {
            p.display();
            fout << p.getTotal() << endl;
        }

        fout.close();
    } catch (exception &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
