#include <iostream>
using namespace std;

int main() {
    int n, i, j, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1;   // assume prime

        if(num <= 1) {
            isPrime = 0;
        } else {
            for(j = 2; j <= num/2; j++) {
                if(num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime == 1) {
            count++;
        }
    }

    cout << "Total Prime Numbers = " << count;

    return 0;
}
