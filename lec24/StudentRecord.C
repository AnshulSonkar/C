#include <stdio.h>

int main() {

    FILE *fp;

    int roll;
    char name[20];

    fp = fopen("student.txt", "w");

    printf("Enter Roll: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    fprintf(fp, "%d %s", roll, name);

    fclose(fp);

    return 0;
}