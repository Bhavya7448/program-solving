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


    Student compare(Student s) {
        if (marks > s.marks)
            return *this;   // return current object
        else
            return s;       // return other object
    }
};

int main() {
    Student s1, s2, s3;
    int m;

    cout << "Enter marks of student 1: ";
    cin >> m;
    s1.setData(m);

    cout << "Enter marks of student 2: ";
    cin >> m;
    s2.setData(m);


    s3 = s1.compare(s2);

    cout << "Student with higher marks:\n";
    s3.display();

    return 0;
}
