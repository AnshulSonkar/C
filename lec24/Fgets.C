#include <stdio.h>

int main() {

    FILE *fp;

    char str[100];

    fp = fopen("text.txt", "r");

    fgets(str, sizeof(str), fp);

    printf("%s", str);

    fclose(fp);

    return 0;
}