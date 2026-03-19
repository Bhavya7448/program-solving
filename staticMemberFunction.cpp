#include <iostream>
using namespace std;

class Student {
    int roll;
    static int count;   // static data member

public:
    void setData() {
        cout << "Enter roll number: ";
        cin >> roll;
        count++;   // increment count when object is created
    }

    void display() {
        cout << "Roll Number = " << roll << endl;
    }

    // static member function
    static void showCount() {
        cout << "Total Students = " << count << endl;
    }
};

// definition of static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.setData();
    s2.setData();
    s3.setData();

    s1.display();
    s2.display();
    s3.display();

    // calling static function
    Student::showCount();

    return 0;
}
