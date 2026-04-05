#include <iostream>
using namespace std;

// Base class A
class A {
protected:
    int a;

public:
    void setA(int x) {
        a = x;
    }
};

// Class B inherits A
class B : public A {
protected:
    int b;

public:
    void setB(int y) {
        b = y;
    }
};

// Separate class D
class D {
protected:
    int d;

public:
    void setD(int z) {
        d = z;
    }
};

// Class C inherits B and D (Hybrid)
class C : public B, public D {
public:
    void display() {
        int sum = a + b + d;
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
        cout << "D = " << d << endl;
        cout << "Total = " << sum << endl;
    }
};

int main() {
    C obj;

    obj.setA(10);
    obj.setB(20);
    obj.setD(30);

    obj.display();

    return 0;
}
