#include<iostream>
using namespace std;

class A {
public:
    int x = 5;
};

class B {
public:
    int y = 10;
};

class C : public A, public B {
public:
    void show() {
        cout << x + y;
    }
};

int main() {
    C obj;
    obj.show();
}
