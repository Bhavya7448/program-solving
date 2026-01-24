#include <stdio.h>

int main() {
    int n, i, j;
    int maxProd, prod;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    maxProd = a[0];

    for (i = 0; i < n; i++) {
        prod = 1;
        for (j = i; j < n; j++) {
            prod = prod * a[j];
            if (prod > maxProd)
                maxProd = prod;
        }
    }

    printf("Maximum product subarray is: %d", maxProd);
    return 0;
}
