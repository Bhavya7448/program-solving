#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using calloc
    arr = (int*) calloc(n, sizeof(int));

    // Check allocation
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print in reverse order
    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}
