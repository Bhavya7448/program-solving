#include <stdio.h>

int main() {
    int arr[100], n, i;
    int left = 0, right;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    right = n - 1;

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (left <= right) {
        if (arr[left] < 0) {
            left++;
        } else if (arr[right] >= 0) {
            right--;
        } else {

            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    printf("Array after moving negatives to one side:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
