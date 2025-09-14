#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    cout << "Enter 1st string: ";
    getline(cin, str1);
    cout << "Enter 2nd string: ";
    getline(cin, str2);

    string cstr = str1 + str2;
    cout << "\n1st string: " << str1 << endl;
    cout << "2nd string: " << str2 << endl;
    cout << "Concatenated string: " << cstr << endl;

    return 0;
}
