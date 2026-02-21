#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    Date dob;
};

int main() {
    Student s;

    cout << "Enter roll: ";
    cin >> s.roll;

    cout << "Enter DOB (dd mm yyyy): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\nRoll: " << s.roll;
    cout << "\nDOB: " << s.dob.day << "/"
         << s.dob.month << "/"
         << s.dob.year;

    return 0;
}
