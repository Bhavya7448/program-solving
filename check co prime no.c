#include <stdio.h>

int main() {
    int a, b, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }

    if (x == 1)
        printf("%d and %d are co-prime\n", a, b);
    else
        printf("%d and %d are not co-prime\n", a, b);
    return 0;
}
