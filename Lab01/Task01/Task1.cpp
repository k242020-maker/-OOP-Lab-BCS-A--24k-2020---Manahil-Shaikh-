#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount in Rs: ";
    cin >> amount;

    int denoms[] = {5000, 1000, 500, 100, 20, 10, 5, 2, 1};
    int counts[9] = {0};
    int remaining = amount;

    for (int i = 0; i < 9; i++) {
        if (remaining >= denoms[i]) {
            counts[i] = remaining / denoms[i];
            remaining %= denoms[i];
        }
    }

    cout << "Minimum notes required for Rs. " << amount << " are:" << endl;
    for (int i = 0; i < 9; i++) {
        if (counts[i] > 0) {
            cout << denoms[i] << " x " << counts[i] << endl;
        }
    }

    return 0;
}