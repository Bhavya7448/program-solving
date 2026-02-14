#include<iostream>
using namespace std;

int add(int, int);   // Prototype

int main()
{
    cout<<add(5,3);  // Function Call
    return 0;
}

int add(int a, int b)   // Definition
{
    return a+b;
}
