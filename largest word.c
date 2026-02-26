#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[100], largest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter sentence: ");
    gets(str);

    largest[0] = '\0';

    while(1) {
        j = 0;
        while(str[i] != ' ' && str[i] != '\0')
            word[j++] = str[i++];
        word[j] = '\0';

        if(j > max) {
            max = j;
            strcpy(largest, word);
        }

        if(str[i] == '\0') break;
        i++;
    }

    printf("Largest word: %s", largest);
    return 0;
}
