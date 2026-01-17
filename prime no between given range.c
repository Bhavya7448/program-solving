#include <stdio.h>

int main() {
    int a, b, i, j;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        if (i < 2) continue;
        for (j = 2; j <= i/j; j++)
            if (i % j == 0) break;
        if (j > i/j) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
