#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s[3], temp;
    int i,j;

    for(i=0;i<3;i++) {
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }

    for(i=0;i<2;i++) {
        for(j=i+1;j<3;j++) {
            if(s[i].marks > s[j].marks) {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    printf("\nSorted Records\n");

    for(i=0;i<3;i++) {
        printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
    }

    return 0;
}
