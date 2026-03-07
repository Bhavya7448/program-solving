#include <stdio.h>

int main()
{
    char str[100];
    int i, j, flag, count = 0;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        flag = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(i != j && str[i] == str[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            count++;
    }

    printf("Total non-repeating characters: %d", count);

    return 0;
}
