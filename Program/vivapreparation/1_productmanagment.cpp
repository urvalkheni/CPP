#include <iostream>
#include <vector>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;
    int quantity;
public:
    Product(int i, string n, double p, int q) : id(i), name(n), price(p), quantity(q) {}

    double getTotalValue() {
        return price * quantity;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name
             << ", Price: " << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    vector<Product> products = {
        Product(101, "Pen", 10.5, 50),
        Product(102, "Notebook", 45.0, 20),
        Product(103, "Eraser", 5.0, 100)
    };

    for (auto &p : products) {
        p.display();
        cout << "Total Value: " << p.getTotalValue() << endl << endl;
    }
    return 0;
}
