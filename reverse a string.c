#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i = 0, j, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0, j = length - 1; i < length; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';

    printf("Reversed string: %s", rev);

    return 0;
}
