#include <iostream>
using namespace std;
class calculator{
    private:
        int num1;
        int num2;
    public:
        void setnumbers(int n1, int n2);
        int add();
};
void calculator::setnumbers(int n1, int n2){
    num1 = n1;
    num2 = n2;
}
int calculator::add(){
    return num1 + num2;
}
int main(){
    calculator cal;
    cal.setnumbers(15,20);
    cout<<"Sum: "<<cal.add()<<endl;

    return 0;
}