#include <stdio.h>

int smallest(int a[], int n);

int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Smallest number = %d", smallest(a, n));

    return 0;
}

int smallest(int a[], int n) {
    int i, min = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }

    return min;
}
