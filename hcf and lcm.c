#include <stdio.h>

int main() {
    int a, b, x, y, t, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // calculate GCD using Euclid's algorithm
    while (y != 0) {
        t = y;
        y = x % y;
        x = t;
    }
    gcd = x;
    lcm = (a * b) / gcd;

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
