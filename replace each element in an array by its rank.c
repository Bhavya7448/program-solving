#include <stdio.h>

int main() {
    int n, i, j, rank;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], r[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        rank = 1;
        for (j = 0; j < n; j++) {
            if (a[j] < a[i])
                rank++;
        }
        r[i] = rank;
    }

    printf("Array after replacing elements by rank:\n");
    for (i = 0; i < n; i++)
        printf("%d ", r[i]);

    return 0;
}
