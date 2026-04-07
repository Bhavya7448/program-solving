#include <iostream>
using namespace std;

class Num {
private:
    int x;

public:
    void set(int a) {
        x = a;
    }

    friend void sum(Num, Num);
};

void sum(Num a, Num b) {
    cout << a.x + b.x;
}

int main() {
    Num n1, n2;

    int a, b;
    cin >> a >> b;

    n1.set(a);
    n2.set(b);

    sum(n1, n2);
}
