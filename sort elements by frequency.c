#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Elements sorted by frequency:\n");

    for(i = 0; i < n; i++) {
        int count = 0;

        for(j = 0; j < n; j++)
            if(a[i] == a[j])
                count++;

        for(k = 0; k < count; k++)
            printf("%d ", a[i]);

        for(j = 0; j < n; j++)
            if(a[j] == a[i])
                a[j] = -1;
    }

    return 0;
}
