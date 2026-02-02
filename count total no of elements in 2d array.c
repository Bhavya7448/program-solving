#include<stdio.h>
int main(){
int a[10][10];
int i,j,r,c;

printf("enter the no of rows and coloumns:");
scanf("%d %d",&r,&c);

printf("enter elements;");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
}

printf("\n total no of elements");

printf("%d",r*c);


return 0;


}
