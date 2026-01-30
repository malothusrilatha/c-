 #include <iostream>
using namespace std;

class Car {
private:
    int speed;
    string brand;

public:
    Car(string b, int s) : brand(b), speed(s) {}

    void display() {
        cout << "Brand: " << brand << "\nSpeed: " << speed << endl;
    }

    void modify(int s1) {
        speed = s1;
    }
};

int main() {
    Car mycar("Maruthi", 70);
    Car mycar2("BMW", 150);

    mycar.display();
    mycar.modify(120);
    mycar.display();

    mycar2.display();
    mycar2.modify(10);
    mycar2.display();

    return 0;
}


