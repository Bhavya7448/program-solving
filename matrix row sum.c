#include<stdio.h>
int main(){
int i,j,r,c,a[10][10];

printf("enter the rows and coloumns of the matrix:");
scanf("%d %d",&r,&c);

printf("the elments of the matrix are:\n");
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
{scanf("%d",&a[i][j]);}}

for(i=0;i<r;i++)
{int sum=0;
for(j=0;j<c;j++)
{sum+=a[i][j];}
printf("the sum of row %d is %d",i+1,sum);


}




return 0;

}
