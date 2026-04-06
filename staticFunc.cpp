#include <iostream>
using namespace std;

class Demo {
public:
    static int x;

    static void show() {
        cout << x;
    }
};

int Demo::x = 10;

int main() {
    Demo::show();
}
