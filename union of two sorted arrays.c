#include <stdio.h>

int main() {
    int a[50], b[50], n1, n2;
    int i = 0, j = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first sorted array:\n");
    for (int k = 0; k < n1; k++) {
        scanf("%d", &a[k]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second sorted array:\n");
    for (int k = 0; k < n2; k++) {
        scanf("%d", &b[k]);
    }

    printf("Union: ");

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            printf("%d ", a[i++]);
        } else if (a[i] > b[j]) {
            printf("%d ", b[j++]);
        } else {
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }

    while (i < n1)
        printf("%d ", a[i++]);

    while (j < n2)
        printf("%d ", b[j++]);

    return 0;
}
