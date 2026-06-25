// #include <stdio.h>
// #include <string.h>

// int main() {

//     char str[] = "Hello";

//     printf("Length = %lu", strlen(str));

//     return 0;
// }


#include <stdio.h>

int main() {

    char str[] = "Programming";
    int count = 0;

    while(str[count] != '\0') {
        count++;
    }

    printf("Length = %d", count);

    return 0;
}