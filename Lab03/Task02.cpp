#include <iostream>
using namespace std;
class student{
    public:
        string name;

    void setrollnumber(int r){
        rollnumber = r;
    }
    int getrollnumber(){
        return rollnumber;
    }
    private:
        int rollnumber;
};
int main(){
    student s1;
    s1.name = "Manahil";
    s1.setrollnumber(242020);
    
    cout<<"Student Name: "<<s1.name<<endl;
    cout<<"Roll number: "<<s1.getrollnumber()<<endl;

    return 0;
}