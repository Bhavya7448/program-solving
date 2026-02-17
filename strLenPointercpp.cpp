#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char *p = str;
    int length = 0;

    cout << "Enter string: ";
    cin >> str;

    while(*p != '\0')
    {
        length++;
        p++;
    }

    cout << "Length = " << length;

    return 0;
}
