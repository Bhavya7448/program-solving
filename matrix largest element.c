#include<stdio.h>
int main(){
int i,j,r,c;
int a[10][10];


printf("enter the number of rows and coloumns:");
scanf("%d %d",&r,&c);

printf("the elements of the matrix are:\n");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{scanf("%d",&a[i][j]);}}

int largest=a[0][0];

for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{if(a[i][j]>largest)
{largest=a[i][j];}}}

printf(" the largest element is %d",largest);

return 0;

}
