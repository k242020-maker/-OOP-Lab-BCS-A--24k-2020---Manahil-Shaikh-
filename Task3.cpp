#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void findPrimesInRange(int start, int end) {
    for (int i = start + 1; i < end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:" << endl;
    findPrimesInRange(start, end);

    return 0;
}