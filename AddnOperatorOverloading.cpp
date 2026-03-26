#include <iostream>
using namespace std;

class Test {
    int i, j;

public:
    // constructor
    Test(int x, int y) {
        i = x;
        j = y;
    }

    // operator + (no return, direct output)
   operator+(Test t2) {
        cout << "Sum = " << i + t2.i << " , " << j + t2.j << endl;
    }
};

int main() {
    int x, y;

    cout << "Enter values for t1 (i j): ";
    cin >> x >> y;
    Test t1(x, y);

    cout << "Enter values for t2 (i j): ";
    cin >> x >> y;
    Test t2(x, y);

    t1 + t2;   // operator call

    return 0;
}
