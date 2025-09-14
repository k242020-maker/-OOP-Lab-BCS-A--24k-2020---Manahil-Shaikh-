#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    int A[100], B[100];
    cout << "Enter " << n << " elements for the first array: ";
    for (int i = 0; i < n; i++) cin >> A[i];

    cout << "Enter " << n << " elements for the second array: ";
    for (int i = 0; i < n; i++) cin >> B[i];

    // Swap arrays
    for (int i = 0; i < n; i++) {
        int temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }

    cout << "\nArrays after swapping:\nFirst array: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << "\nSecond array: ";
    for (int i = 0; i < n; i++) cout << B[i] << " ";
    cout << endl;

    // Largest in first array
    int largest = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > largest) largest = A[i];
    }

    // Second largest in second array
    int max1 = B[0], max2 = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (B[i] > max1) max1 = B[i];
    }
    for (int i = 0; i < n; i++) {
        if (B[i] != max1 && B[i] > max2) max2 = B[i];
    }
    if (max2 == INT_MIN) max2 = max1;

    // Unique element in first array
    int uniqueVal = A[0];
    bool found = false;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (A[j] == A[i]) count++;
        }
        if (count == 1) {
            uniqueVal = A[i];
            found = true;
            break;
        }
    }
    if (!found) uniqueVal = A[0];

    cout << "\nLargest element in first array (after swapping): " << largest << endl;
    cout << "Second largest element in second array (after swapping): " << max2 << endl;
    cout << "Unique element in first array (after swapping): " << uniqueVal << endl;

    return 0;
}