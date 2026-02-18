#include <iostream>
using namespace std;

struct Student {
    int roll;
    int m1, m2, m3;
};

int main() {
    Student s;

    cout << "Enter Roll and 3 marks: ";
    cin >> s.roll >> s.m1 >> s.m2 >> s.m3;

    int total = s.m1 + s.m2 + s.m3;
    float avg = total / 3.0;

    cout << "Total = " << total << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
