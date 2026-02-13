#include <iostream>
using namespace std;

union Data
{
    int i;
    float f;
    char ch;
};

// Function to store integer
void setInt(Data &d)
{
    cout << "Enter integer value: ";
    cin >> d.i;
}

// Function to store float
void setFloat(Data &d)
{
    cout << "Enter float value: ";
    cin >> d.f;
}

// Function to store character
void setChar(Data &d)
{
    cout << "Enter character: ";
    cin >> d.ch;
}

// Function to display union value
void displayInt(Data d)
{
    cout << "Integer value: " << d.i << endl;
}

void displayFloat(Data d)
{
    cout << "Float value: " << d.f << endl;
}

void displayChar(Data d)
{
    cout << "Character value: " << d.ch << endl;
}

int main()
{
    Data d1;

    setInt(d1);
    displayInt(d1);

    setFloat(d1);      // Overwrites previous value
    displayFloat(d1);

    setChar(d1);       // Overwrites previous value
    displayChar(d1);

    return 0;
}
