#include <iostream>
using namespace std;
class Product {
public:
    int id;
    string name;
    float price;
    int stockQuantity;

    Product(int id, string name, float price, int stock) : id(id), name(name), price(price), stockQuantity(stock) {}
};

class ShoppingCart {
    Product* cart[100];
    int quantities[100];
    int count = 0;

public:
    void addProduct(Product* p, int qty) {
        if (p->stockQuantity >= qty) {
            cart[count] = p;
            quantities[count++] = qty;
            p->stockQuantity -= qty;
            cout << "Product added.\n";
        } else {
            cout << "Insufficient stock.\n";
        }
    }

    void removeProduct(int id) {
        for (int i = 0; i < count; i++) {
            if (cart[i]->id == id) {
                cart[i]->stockQuantity += quantities[i];
                for (int j = i; j < count - 1; j++) {
                    cart[j] = cart[j + 1];
                    quantities[j] = quantities[j + 1];
                }
                count--;
                cout << "Product removed.\n";
                return;
            }
        }
        cout<< "Product not found.\n";
    }

    void displayCart() const {
        for (int i = 0; i < count; i++)
            cout << cart[i]->name << " x" << quantities[i] << " = " << cart[i]->price * quantities[i] << endl;
    }

    float totalPrice() const {
        float total = 0;
        for (int i = 0; i < count; i++)
            total += cart[i]->price * quantities[i];
        return total;
    }
};
