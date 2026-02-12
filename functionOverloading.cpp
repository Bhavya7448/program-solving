#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "Sum of 2 numbers: " << add(10, 5) << endl;
    cout << "Sum of 3 numbers: " << add(10, 5, 2);

    return 0;
}
