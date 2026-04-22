#include<stdio.h>
int main()
{
    FILE *fp;
    int n, sum=0;

    fp=fopen("num.txt","w");

    printf("Enter 5 numbers: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n);
        fprintf(fp,"%d ",n);
    }
    fclose(fp);

    fp=fopen("num.txt","r");

    while(fscanf(fp,"%d",&n)!=EOF)
    {
        sum += n;
    }

    printf("Sum=%d",sum);

    fclose(fp);
}
