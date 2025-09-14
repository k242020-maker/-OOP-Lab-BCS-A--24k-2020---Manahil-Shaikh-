#include <iostream>
using namespace std;

int sumArray(int *arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *(arr + i);
    }
    return sum;
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result;

    result = sumArray(numbers, size);
    cout << "Sum of array elements are : " << result << endl;

    return 0;
}