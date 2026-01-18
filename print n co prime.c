#include <stdio.h>

int main() {
    int n, num, i = 1, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter N: ");
    scanf("%d", &n);

    while (count < n) {
        int a = i, b = num;
        while (b) {
            int t = b;
            b = a % b;
            a = t;
        }
        if (a == 1) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    printf("\n");
    return 0;
}
