#include <iostream>
using namespace std;

int area(int side) {
    return side * side;   // square
}

int area(int length, int breadth) {
    return length * breadth;  // rectangle
}

int main() {
    cout << "Area of square: " << area(5) << endl;
    cout << "Area of rectangle: " << area(4, 6) << endl;
    return 0;
}
