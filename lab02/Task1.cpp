#include <iostream>
using namespace std;

void swapvalues(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    int x, y;
    cout << "Enter 1st number : ";
    cin >> x;
    cout << "Enter 2nd number : ";
    cin >> y;

    cout << "Before swapping : x = " << x << " & y = " << y << endl;
    swapvalues(&x, &y);
    cout << "After swapping: x = " << x << " & y = " << y << endl;

    return 0;
}