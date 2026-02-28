#include <stdio.h>

int main() {
    char str[100], sub[100];
    int i, j, found;

    printf("Enter string: "); gets(str);
    printf("Enter substring: "); gets(sub);

    for(i = 0; str[i] != '\0'; i++) {
        j = 0;
        found = 1;
        while(sub[j] != '\0') {
            if(str[i+j] != sub[j]) {
                found = 0;
                break;
            }
            j++;
        }
        if(found) {
            printf("Substring found at index %d", i);
            return 0;
        }
    }
    printf("Substring not found");
    return 0;
}
