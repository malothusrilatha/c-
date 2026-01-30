 #include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    int speed;

    void setSpeed(int s) {
        speed = s;
    }

    void showSpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    string brand;

    void setBrand(string b) {
        brand = b;
    }

    void showCarInfo() {
        cout << "Car Brand: " << brand << endl;
        showSpeed();   // inherited function
    }
};

int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setSpeed(160);
    myCar.showCarInfo();
    return 0;
}






