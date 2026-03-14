#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct student s[100];
    int choice, i, n = 0, key, found;

    while(1) {

        printf("\n---- Student Management ----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                printf("Enter roll: ");
                scanf("%d",&s[n].roll);

                printf("Enter name: ");
                scanf("%s",s[n].name);

                printf("Enter marks: ");
                scanf("%f",&s[n].marks);

                n++;
                break;

            case 2:
                printf("\nStudent Records\n");

                for(i=0;i<n;i++) {
                    printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
                }
                break;

            case 3:
                printf("Enter roll number to search: ");
                scanf("%d",&key);

                found = 0;

                for(i=0;i<n;i++) {
                    if(s[i].roll == key) {
                        printf("Record Found\n");
                        printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Record not found");

                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}
