#include <stdio.h>

struct student{
    int roll;
    char name[50];
};

int main(){
    struct student s;
    struct student *p;

    p=&s;

    printf("Enter roll: ");
    scanf("%d",&p->roll);

    printf("Enter name: ");
    scanf("%s",p->name);

    printf("%d %s",p->roll,p->name);

    return 0;
}
