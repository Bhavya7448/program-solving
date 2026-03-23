#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // multiply complex numbers
    Complex multiply(Complex c) {
        Complex temp;

        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);

        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    int r, i;

    cout << "Enter first complex number (real imag): ";
    cin >> r >> i;
    c1.setData(r, i);

    cout << "Enter second complex number (real imag): ";
    cin >> r >> i;
    c2.setData(r, i);

    // object as argument + returning object
    c3 = c1.multiply(c2);

    cout << "Multiplication = ";
    c3.display();

    return 0;
}
