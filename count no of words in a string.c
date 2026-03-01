#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Enter sentence: ");
    gets(str);

    while(str[i] != '\0') {
        if(str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))
            count++;
        i++;
    }

    printf("Total words: %d", count);
    return 0;
}
