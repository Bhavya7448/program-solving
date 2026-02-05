#include<stdio.h>
int main(){
int i,j,r,c,a[10][10];

printf("enter the rows and coloumns of the matrix:");
scanf("%d %d",&r,&c);

printf("the elments of the matrix are:\n");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{scanf("%d",&a[i][j]);}}

int smallest=a[0][0];
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{if(smallest>a[i][j]){
smallest=a[i][j];}}}

printf("the smallest element is:%d",smallest);

return 0;

}
