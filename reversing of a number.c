#include <stdio.h>
int main() {
    int num, ReversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    for (ReversedNumber = 0; num != 0; num /= 10)
     {
        remainder = num % 10;
        ReversedNumber = ReversedNumber * 10 + remainder;
    }
    printf("Reversed Number = %d\n", ReversedNumber);
    return 0;
}
