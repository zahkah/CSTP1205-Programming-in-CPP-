#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

class Item {
public:
    int id;
    string name;
    double price;

    Item(int id, string name, double price) : id(id), name(name), price(price) {}

    void print() const {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};

class ShoppingCart {
private:
    vector<Item> items;

public:
    void add_item(const Item& item) {
        items.push_back(item);
    }

    int count_items() const {
        return items.size();
    }

    void show_items() const {
        cout << "Items in the cart:" << endl;
        for (const auto& item : items) {
            item.print();
        }
    }

    double get_total_cost() const {
        double total = 0;
        for (const auto& item : items) {
            total += item.price;
        }
        return total;
    }

    void print_max_item() const {
        if (items.empty()) {
            cout << "Cart is empty." << endl;
            return;
        }
        auto max_item = max_element(items.begin(), items.end(), [](const Item& a, const Item& b) {
            return a.price < b.price;
            });
        cout << "Max item: ";
        max_item->print();
    }

    void print_min_item() const {
        if (items.empty()) {
            cout << "Cart is empty." << endl;
            return;
        }
        auto min_item = min_element(items.begin(), items.end(), [](const Item& a, const Item& b) {
            return a.price < b.price;
            });
        cout << "Min item: ";
        min_item->print();
    }

    string check_out() {
        if (items.empty()) {
            return "Cart is empty.";
        }
        string item_name = items.back().name;
        items.pop_back();
        return item_name;
    }
};

int main() {
    ShoppingCart cart;
    string name;
    double price;
    char choice;

    do {
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter item price: $";
        cin >> price;
        cart.add_item(Item(cart.count_items() + 1, name, price));

        cout << "Do you want to add another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    cout << "\nTotal cost: $" << cart.get_total_cost() << endl;
    cout << "Total items: " << cart.count_items() << endl;
    cart.print_max_item();
    cart.print_min_item();

    cout << "\nChecking out items:" << endl;
    while (cart.count_items() > 0) {
        cout << "Checked out: " << cart.check_out() << endl;
    }

    return 0;
}
