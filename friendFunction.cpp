#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    void setData(int m) {
        marks = m;
    }

    void display() {
        cout << "Marks = " << marks << endl;
    }

    // declare friend function
    friend Student compare(Student s1, Student s2);
};

// friend function definition (outside class)
Student compare(Student s1, Student s2) {
    if (s1.marks > s2.marks)
        return s1;
    else
        return s2;
}

int main() {
    Student s1, s2, s3;
    int m;

    cout << "Enter marks of student 1: ";
    cin >> m;
    s1.setData(m);

    cout << "Enter marks of student 2: ";
    cin >> m;
    s2.setData(m);

    // calling friend function
    s3 = compare(s1, s2);

    cout << "Student with higher marks:\n";
    s3.display();

    return 0;
}
