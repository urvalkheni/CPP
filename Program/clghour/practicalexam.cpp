#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
class Item {
public:
    string name;
    int quantity;
    float price;

    Item(string n, int q, float p) : name(n), quantity(q), price(p) {}
};

class Order {
public:
    string orderName;
    vector<Item> items;

    Order(string name) : orderName(name) {}

    void addItem(const Item& item) {
        items.push_back(item);
    }

    float totalPrice() const {
        float total = 0;
        for (const auto& item : items) {
            total += item.quantity * item.price;
        }
        return total;
    }

    void display() const {
        cout << "Order: " << orderName << endl;
        cout << "Total Price: " << static_cast<int>(totalPrice()) << endl;
        cout << "Item List:" << endl;
        for (const auto& item : items) {
            cout << item.name << " " << item.quantity << " " << static_cast<int>(item.price) << endl;
        }
        cout << endl;
    }
};
template<typename T>
void displayOrders(const vector<T>& orders) {
    if (orders.empty()) {
        cout << "No orders to display." << endl;
        return;
    }
    for (const auto& order : orders) {
        order.display();
    }
}
template<typename T>
void reverseOrders(vector<T>& orders) {
    reverse(orders.begin(), orders.end());
}
template<typename T>
void mostRecentOrder(const vector<T>& orders) {
    if (orders.empty()) {
        cout << "No orders to display." << endl;
        return;
    }
    orders.back().display();
}
int main() {
    int n;
    cin >> n;
    vector<Order> orders;
    for (int i = 0; i < n; ++i) {
        string orderName;
        int k;
        cin >> orderName >> k;
        Order order(orderName);
        for (int j = 0; j < k; ++j) {
            string itemName;
            int quantity;
            float price;
            cin >> itemName >> quantity >> price;
            order.addItem(Item(itemName, quantity, price));
        }
        orders.push_back(order);
    }
    int q;
    cin >> q;
    while (q--) {
        string command;
        cin >> command;
        if (command == "add") {
            string orderName;
            int k;
            cin >> orderName >> k;
            Order newOrder(orderName);
            for (int i = 0; i < k; ++i) {
                string itemName;
                int quantity;
                float price;
                cin >> itemName >> quantity >> price;
                newOrder.addItem(Item(itemName, quantity, price));
            }
            orders.push_back(newOrder);
        } else if (command == "reverse") {
            reverseOrders(orders);
        } else if (command == "display") {
            displayOrders(orders);
        } else if (command == "most_recent") {
            mostRecentOrder(orders);
        }
    }
    return 0;
}