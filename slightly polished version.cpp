 #include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car c;

    cout << "Enter car brand: ";
    getline(cin, c.brand);

    cout << "Enter speed: ";
    cin >> c.speed;

    cout << "\nCar Details\n";
    c.display();

    return 0;
}



