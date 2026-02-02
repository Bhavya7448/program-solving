#include<stdio.h>
int main(){
int a[10][10];
int i,j,r,c,sum=0;

printf("enter the no of rows and coloumns:");
scanf("%d %d",&r,&c);

printf("enter elements;\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
sum+=a[i][j];
}
}

printf("\n sum of elements is %d",sum);



return 0;


}
