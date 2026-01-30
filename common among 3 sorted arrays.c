#include <stdio.h>

int main() {
    int A[50], B[50], C[50];
    int n1, n2, n3;
    int i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &A[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &B[i]);

    printf("Enter size of third array: ");
    scanf("%d", &n3);
    printf("Enter elements of third sorted array:\n");
    for (i = 0; i < n3; i++)
        scanf("%d", &C[i]);

    printf("Common elements: ");

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (A[i] == B[j]) {
                for (k = 0; k < n3; k++) {
                    if (A[i] == C[k]) {
                        printf("%d ", A[i]);
                        break;
                    }
                }
                break;
            }
        }
    }

    return 0;
}
