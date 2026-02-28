#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j, k;

    printf("Enter string: "); gets(str);

    k = 0;
    for(i = 0; str[i] != '\0'; i++) {
        int flag = 0;
        for(j = 0; j < k; j++) {
            if(result[j] == str[i]) {
                flag = 1;
                break;
            }
        }
        if(!flag)
            result[k++] = str[i];
    }
    result[k] = '\0';

    printf("String without duplicates: %s", result);
    return 0;
}
