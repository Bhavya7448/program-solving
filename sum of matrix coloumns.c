#include<stdio.h>
int main(){
int a[10][10];
int i,j,c,r;
int sum=0;

printf("enter the number of rows and coloumns:");
scanf("%d %d",&r,&c);

printf("the elements of the matrix are:\n");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{scanf("%d",&a[i][j]);}}

for(j=0;j<c;j++)
{
sum=0;
    for(i = 0; i < r; i++) {
        sum = sum + a[i][j];}


printf("coloumn %d sum=%d",j+1,sum);
}


return 0;



}
