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

    // Find length
    while(str[len] != '\0')
        len++;

    // Shift characters to right
    for(i = len; i >= pos; i--)
        str[i+1] = str[i];

    // Insert character
    str[pos] = ch;

    printf("New string: %s", str);

    return 0;
}
