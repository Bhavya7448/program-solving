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

    // function taking object as argument
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    int r, i;

    cout << "Enter real and imaginary part of first number: ";
    cin >> r >> i;
    c1.setData(r, i);

    cout << "Enter real and imaginary part of second number: ";
    cin >> r >> i;
    c2.setData(r, i);

    // passing object as argument
    c3 = c1.add(c2);

    cout << "Sum = ";
    c3.display();

    return 0;
}
