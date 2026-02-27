#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], replace[50], temp[200];
    int i = 0, j, k;

    printf("Enter sentence: ");
    gets(str);
    printf("Enter word to replace: ");
    gets(word);
    printf("Enter replacement word: ");
    gets(replace);

    temp[0] = '\0';

    while(str[i] != '\0') {
        j = 0;
        char current[50];
        while(str[i] != ' ' && str[i] != '\0')
            current[j++] = str[i++];
        current[j] = '\0';

        if(strcmp(current, word) == 0)
            strcat(temp, replace);
        else
            strcat(temp, current);

        if(str[i] != '\0')
            strcat(temp, " ");
        if(str[i] != '\0') i++;
    }

    printf("Modified sentence: %s", temp);
    return 0;
}
