#include <stdio.h>


int findLargest(int arr[], int n);

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int largest = findLargest(arr, n);

    printf("Largest number = %d\n", largest);

    return 0;
}


int findLargest(int arr[], int n) {
    int i;
    int largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}
