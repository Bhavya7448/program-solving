#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s[3];
    int i,key,found=0;

    for(i=0;i<3;i++) {
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }

    printf("Enter roll to search: ");
    scanf("%d",&key);

    for(i=0;i<3;i++) {
        if(s[i].roll==key) {
            printf("Record Found\n");
            printf("%d %s %.2f",s[i].roll,s[i].name,s[i].marks);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Record not found");

    return 0;
}
