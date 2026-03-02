#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start = 0, end;

    printf("Enter sentence: ");
    gets(str);

    while(1) {
        if(str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Result: %s", str);
    return 0;
}
