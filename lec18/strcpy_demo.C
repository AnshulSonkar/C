#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "C Language";
    char str2[50];

    strcpy(str2, str1);

    printf("%s", str2);

    return 0;
}