#include <iostream>
using namespace std;
class student{
    public:
        string name;
        int rollnumber;
};
int main(){
    student s1;
    s1.name = "Manahil";
    s1.rollnumber = 242020;

    cout<<"Student name: "<<s1.name<<endl;
    cout<<"Roll number: "<<s1.rollnumber<<endl;

    return 0;
}