#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max1 = 0, max2 = 0;
    char first, second;

    printf("Enter string: ");
    gets(str);

    // Count frequency
    for(i = 0; str[i] != '\0'; i++)
        freq[(int)str[i]]++;

    // Find first and second maximum frequency
    for(i = 0; i < 256; i++) {
        if(freq[i] > max1) {
            max2 = max1;
            second = first;

            max1 = freq[i];
            first = i;
        }
        else if(freq[i] > max2 && freq[i] != max1) {
            max2 = freq[i];
            second = i;
        }
    }

    printf("Second most frequent character: %c\n", second);

    return 0;
}
