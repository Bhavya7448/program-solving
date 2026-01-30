#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = 4;
    int count[10] = {0};

    for (int i = 0; i <= n; i++) {
        count[arr[i]]++;
        if (count[arr[i]] > 1) {
            printf("Duplicate element is: %d", arr[i]);
            break;
        }
    }

    return 0;
}

