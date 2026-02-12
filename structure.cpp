#include <iostream>
using namespace std;

// Define structure
struct Student
{
    int roll;
    string name;
    float marks;
};

// Function to input student data
void input(Student &s)
{
    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks: ";
    cin >> s.marks;
}

// Function to display student data
void display(Student s)
{
    cout << "\nStudent Details:" << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main()
{
    Student s1;   // structure variable

    input(s1);    // function call
    display(s1);  // function call

    return 0;
}
