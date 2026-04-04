#include <iostream>
using namespace std;

class A {
public:
    ~A() {
        cout << "Destroyed";
    }
};

int main() {
    A a;
}
