#include <iostream>
using namespace std;

class Area {
    float result;

public:

    Area(float r) {
        result = 3.14 * r * r;
        cout << "Area of Circle = " << result << endl;
    }


    Area(float l, float b) {
        result = l * b;
        cout << "Area of Rectangle = " << result << endl;
    }


    Area(float l, float b, float h) {
        result = 2 * (l*b + b*h + l*h);
        cout << "Surface Area of Cuboid = " << result << endl;
    }
};

int main() {
    float r, l, b, h;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    cout << "Enter length, breadth and height: ";
    cin >> l >> b >> h;


    Area a1(r);
    Area a2(l, b);
    Area a3(l, b, h);

    return 0;
}
