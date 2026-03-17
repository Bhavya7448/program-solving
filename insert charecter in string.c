#include <stdio.h>

int main() {
    char str[100], ch;
    int i, pos, len = 0;

    printf("Enter string: ");
    gets(str);

    printf("Enter character to insert: ");
    scanf(" %c", &ch);

    printf("Enter position: ");
    scanf("%d", &pos);


    while(str[len] != '\0')
        len++;

    for(i = len; i >= pos; i--)
        str[i+1] = str[i];


    str[pos] = ch;

    printf("New string: %s", str);

    return 0;
}
