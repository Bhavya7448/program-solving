#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i = 0, j = 0;

    printf("Enter string: ");
    gets(str);

    printf("Enter character to remove: ");
    scanf("%c", &ch);

    while(str[i] != '\0') {
        if(str[i] != ch)
            str[j++] = str[i];
        i++;
    }

    str[j] = '\0';

    printf("Result: %s", str);
    return 0;
}
