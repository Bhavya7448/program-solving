#include <iostream>
using namespace std;

void swapFirstLast(int arr[], int n) {
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    swapFirstLast(arr, 5);

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}
