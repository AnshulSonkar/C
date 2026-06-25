// #include <stdio.h>
// #include <string.h>

// int main() {

//     char str1[] = "Apple";
//     char str2[] = "Apple";

//     if(strcmp(str1, str2) == 0)
//         printf("Strings are Equal");
//     else
//         printf("Strings are Not Equal");

//     return 0;
// }  


#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "Apple";
    char str2[] = "Mango";

    int result = strcmp(str1, str2);

    printf("%d", result);

    return 0;
}