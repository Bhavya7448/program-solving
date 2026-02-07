#include <stdio.h>
int compareStrings(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 1;
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else
        return 1;
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (compareStrings(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
