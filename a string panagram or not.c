#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0}, i, flag = 1;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a'] = 1;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            freq[str[i] - 'A'] = 1;
    }

    for(i = 0; i < 26; i++) {
        if(freq[i] == 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Pangram");
    else
        printf("Not Pangram");

    return 0;
}
