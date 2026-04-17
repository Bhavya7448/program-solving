#include<iostream>
using namespace std;

class A {
public:
    int x;

    A(int x) {
        this->x = x;
    }
};

class B {
public:
    int y;

    B(A obj) {   // constructor using object
        y = obj.x;
    }

    void show() {
        cout << y;
    }
};

int main() {
    A obj1(30);
    B obj2 = obj1;   // conversion

    obj2.show();
}
