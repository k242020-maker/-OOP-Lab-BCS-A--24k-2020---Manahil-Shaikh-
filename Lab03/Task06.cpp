#include <iostream>
using namespace std;
class vehicle{
    public:
        string make;
        string model;

        void displayinfo(){
            cout<<"Make: "<<make<<endl;
            cout<<"Model: "<<model<<endl;
        }
};
class car : public vehicle{
public:
    string enginetype;
    void displayinfo(){
        vehicle::displayinfo();
        cout<<"Engine Type: "<<enginetype<<endl;
    }
};
int main(){
    car mycar;
    mycar.make = "Mercedes-Benz";
    mycar.model = "E-class";
    mycar.enginetype = "Electric";

    mycar.displayinfo();
    return 0;
}