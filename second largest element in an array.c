#include <stdio.h>

// Function declaration
int findSecondLargest(int arr[], int n);

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int secondLargest = findSecondLargest(arr, n);

    printf("Second largest number = %d\n", secondLargest);

    return 0;
}

int findSecondLargest(int arr[], int n) {
    int i;
    int largest, secondLargest;


    largest = secondLargest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
