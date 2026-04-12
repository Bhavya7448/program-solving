#include<iostream>
using namespace std;class A {
public:
    int x;
    A(int x) { this->x = x; }
};

class B {
public:
    int y;

    B(A obj) {
        y = obj.x * 2;
    }
};

int main() {
    A a1(5);
    B b1 = a1;
    cout << b1.y;
}
