#include<stdio.h>

int main()
{
    FILE *fp;
    char ch, key;
    int found = 0;

    printf("Enter character to search: ");
    scanf("%c",&key);

    fp = fopen("data.txt","r");

    while((ch = getc(fp)) != EOF)
    {
        if(ch == key)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Found");
    else
        printf("Not Found");

    fclose(fp);
}
