#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int roll;
    string name;
    Date dob;   // nested structure
};

int main() {
    Student s;

    cout << "Enter Roll and Name: ";
    cin >> s.roll >> s.name;

    cout << "Enter Date of Birth (dd mm yyyy): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\nDetails:\n";
    cout << s.roll << " " << s.name << endl;
    cout << s.dob.day << "/" << s.dob.month << "/" << s.dob.year;

    return 0;
}
