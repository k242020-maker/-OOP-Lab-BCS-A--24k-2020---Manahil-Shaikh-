#include <iostream>
using namespace std;
class concrete{
    private:
        string message;
    public:
        concrete(string msg){
            message = msg;
        }
        void displaymessage(){
            cout<<"Message: "<<message<<endl;
        }
};
int main(){
    concrete obj("Welcome to C++");
    obj.displaymessage();

    return 0;
}