#include <stdio.h>

int main() {

    FILE *fp;

    char ch;

    fp = fopen("char.txt", "r");

    ch = fgetc(fp);

    printf("%c", ch);

    fclose(fp);

    return 0;
}