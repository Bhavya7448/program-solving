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
                    } }
for(i = 0; i < r; i++) {
        sum=0;
        for(j = 0; j < c; j++)
            sum += a[i][j];
        avg = (float)sum / c;
        printf("row %d sum=%d",i+1,sum);
        printf("Row %d average = %.2f\n", i+1, avg);
    }
    return 0;
}
