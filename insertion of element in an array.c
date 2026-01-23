#include <stdio.h>

int main() {
    int n, i, pos, x;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter new element: ");
    scanf("%d", &x);

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = x;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
