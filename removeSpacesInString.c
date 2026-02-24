#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0') {
        if(str[i] != ' ') {
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0';

    printf("String without spaces: %s", result);
    return 0;
}
