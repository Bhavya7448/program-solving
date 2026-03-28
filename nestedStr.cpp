#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    char name[50];
    struct Date dob;
};

int main() {
    struct Student s;

    printf("Enter roll, name and DOB (dd mm yyyy): ");
    scanf("%d %s %d %d %d", &s.roll, s.name,
          &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nRoll: %d\nName: %s\nDOB: %d-%d-%d",
           s.roll, s.name, s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
