#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter size of a square matrix : ";
    cin >> N;

    int matrix[10][10];
    cout << "Enter matrix elements : ";
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> matrix[i][j];
        }
    }

    int leftdiagonal = 0, rightdiagonal = 0;
    for(int i = 0; i < N; i++){
        leftdiagonal += matrix[i][i];
        rightdiagonal += matrix[i][N - i - 1];
    }

    cout << "\nMatrix : \n";
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMain diagonal sum: " << leftdiagonal << endl;
    cout << "Secondary diagonal sum: " << rightdiagonal << endl;

    return 0;
}