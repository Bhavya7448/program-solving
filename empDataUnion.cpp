#include <iostream>
using namespace std;

union Salary
{
    int monthly;
    float hourly;
};

void input(Salary &s)
{
    cout << "Enter monthly salary: ";
    cin >> s.monthly;
}

void display(Salary s)
{
    cout << "Monthly Salary: " << s.monthly;
}

int main()
{
    Salary s1;

    input(s1);
    display(s1);

    return 0;
}
