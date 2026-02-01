#include <stdio.h>

int main() {
    int a[2][2];
    int i, j;

    // Input elements
    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display matrix
    printf("\n2x2 Matrix is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
