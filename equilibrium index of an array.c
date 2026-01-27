#include <stdio.h>

int main() {
    int n, i;
    int leftSum = 0, rightSum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        rightSum += a[i];
    }

    for (i = 0; i < n; i++) {
        rightSum -= a[i];

        if (leftSum == rightSum) {
            printf("Equilibrium index is: %d", i);
            return 0;
        }

        leftSum += a[i];
    }

    printf("No equilibrium index found");
    return 0;
}
