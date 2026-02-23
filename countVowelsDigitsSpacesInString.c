#include <stdio.h>

int main() {
    char str[100];
    int i, vowels=0, cons=0, digits=0, spaces=0;

    gets(str);

    for(i=0; str[i]!='\0'; i++) {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowels++;
            else
                cons++;
        }
        else if(str[i]>='0' && str[i]<='9')
            digits++;
        else if(str[i]==' ')
            spaces++;
    }

    printf("Vowels=%d\nConsonants=%d\nDigits=%d\nSpaces=%d",
            vowels, cons, digits, spaces);

    return 0;
}
