#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];
    int count = 0;

    // Write to file
    fp = fopen("text.txt", "w");

    printf("Enter 3 lines:\n");
    for (int i = 0; i < 3; i++) {
        fgets(str, sizeof(str), stdin);
        fputs(str, fp);
    }

    fclose(fp);

    // Read from file and count lines
    fp = fopen("text.txt", "r");

    printf("\nFile contents:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
        count++;
    }

    fclose(fp);

    printf("\nTotal number of lines = %d\n", count);

    return 0;
}
