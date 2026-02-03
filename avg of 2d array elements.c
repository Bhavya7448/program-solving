#include<stdio.h>

int main() {
    int a[10][10];
    int i, j, r, c;
    int sum = 0;
    float avg;

    printf("Enter the no of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix :\n");
     for(i = 0; i < r; i++)
        { for(j = 0; j < c; j++)
           { scanf("%d", &a[i][j]);
                sum += a[i][j];    } }


    avg = (float)sum / (r * c);


    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
