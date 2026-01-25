#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], freq[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }


    for (i = 0; i < n; i++) {
        count = 1;
        if (freq[i] != 0) {
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }


    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (freq[i] < freq[j]) {
                int temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array sorted by frequency:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0)
            for (j = 0; j < freq[i]; j++)
                printf("%d ", a[i]);
    }

    return 0;
}
