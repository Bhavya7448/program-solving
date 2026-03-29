#include <iostream>
using namespace std;

class Test {
    int value;

public:
    void setData(int v) {
        value = v;
    }

    void display() {
        cout << "Value = " << value << endl;
    }

    // compare two objects and return greater
    Test compare(Test t) {
        if (value > t.value)
            return *this;
        else
            return t;
    }
};

int main() {
    Test t1, t2, t3, temp, result;
    int x;

    cout << "Enter value for t1: ";
    cin >> x;
    t1.setData(x);

    cout << "Enter value for t2: ";
    cin >> x;
    t2.setData(x);

    cout << "Enter value for t3: ";
    cin >> x;
    t3.setData(x);

    // step-by-step comparison
    temp = t1.compare(t2);
    result = temp.compare(t3);

    cout << "\nMaximum value:\n";
    result.display();

    return 0;
}
