#include <iostream>
using namespace std;

class calculator {
private:
    int a, b;

public:
    calculator() : a(0), b(0) {}

    void read() {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }

    int add() {
        return a + b;
    }

    int sub() {
        return a - b;
    }

    int multiply() {
        return a * b;
    }

    double division() {
        if (b != 0)
            return (double)a / b;
        else {
            cout << "Division not possible\n";
            return 0;
        }
    }
};

int main() {
    calculator c;
    c.read();
    cout << "Add = " << c.add() << endl;
    cout << "Sub = " << c.sub() << endl;
    cout << "Multiply = " << c.multiply() << endl;
    cout << "Division = " << c.division() << endl;
    return 0;
}

