#include <iostream>
using namespace std;

class Test {
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }


    Test compare(Test t) {
        Test temp;

        // compare 'a'
        if (a > t.a)
            temp.a = a;
        else
            temp.a = t.a;

        // compare 'b'
        if (b > t.b)
            temp.b = b;
        else
            temp.b = t.b;

        return temp;
    }
};

int main() {
    Test t1, t2, t3;
    int a, b;

    cout << "Enter values for t1 (a b): ";
    cin >> a >> b;
    t1.setData(a, b);

    cout << "Enter values for t2 (a b): ";
    cin >> a >> b;
    t2.setData(a, b);


    t3 = t1.compare(t2);

    cout << "Greater values object:\n";
    t3.display();

    return 0;
}
