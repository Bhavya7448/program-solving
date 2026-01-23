#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Repeating elements are:\n");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}
