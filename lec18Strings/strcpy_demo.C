// #include <stdio.h>
// #include <string.h>

// int main() {

//     char str1[] = "C Language";
//     char str2[50];

//     strcpy(str2, str1);

//     printf("%s", str2);

//     return 0;
// }


#include <stdio.h>

int main() {

    char str1[] = "Hello";
    char str2[20];

    int i = 0;

    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("%s", str2);

    return 0;
}