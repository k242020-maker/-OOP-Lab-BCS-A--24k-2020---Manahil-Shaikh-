#include <iostream>
using namespace std;
class calculator{
    private:
        int num1;
        int num2;
    public:
        void setnumbers(int a, int b){
            num1 = a;
            num2 = b;
        }
        int add(){
            return num1 + num2;
        }
};
int main(){
    calculator cal;
    cal.setnumbers(30,30);
    cout<<"sum: " <<cal.add()<<endl;
}