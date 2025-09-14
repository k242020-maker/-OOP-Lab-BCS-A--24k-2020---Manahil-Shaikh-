#include <iostream>
#include <string>
using namespace std;

void FirstAndLastIndex(string str, char ch, int *first, int *last){
    *first = -1;
    *last = -1;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ch){
            if(*first == -1)
                *first = i;
            *last = i;
        }
    }
}

int main(){
    string strr;
    char chh;
    int firstindex, lastindex;

    cout << "Enter a string : ";
    cin >> strr;
    cout << "Enter a character(you need to find) : ";
    cin >> chh;

    FirstAndLastIndex(strr, chh, &firstindex, &lastindex);
    cout << "First occurrence at index: " << firstindex << endl;
    cout << "Last occurrence at index: " << lastindex << endl;

    return 0;
}