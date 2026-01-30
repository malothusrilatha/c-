#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) {
        width = w;
    }

    int getwidth() {
        return width;
    }
};

int main() {
    Box b1(10);
    cout << "Width of the box = " << b1.getwidth() << endl;
    return 0;
}

