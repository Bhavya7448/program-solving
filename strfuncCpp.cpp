#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float breadth;
};

float area(Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    Rectangle r;

    cout << "Enter length and breadth: ";
    cin >> r.length >> r.breadth;

    cout << "Area = " << area(r);

    return 0;
}
