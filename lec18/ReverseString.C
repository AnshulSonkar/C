// #include <stdio.h>
// #include <string.h>

// int main() {

//     char str[] = "HELLO";

//     int start = 0;
//     int end = strlen(str) - 1;

//     while(start < end) {

//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;

//         start++;
//         end--;
//     }

//     printf("%s", str);

//     return 0;
// }


// Palindrome String

// #include <stdio.h>
// #include <string.h>

// int main() {

//     char str[] = "madam";

//     int start = 0;
//     int end = strlen(str) - 1;
//     int flag = 1;

//     while(start < end) {

//         if(str[start] != str[end]) {
//             flag = 0;
//             break;
//         }

//         start++;
//         end--;
//     }

//     if(flag)
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");

//     return 0;
// }


// Count vowels 

// #include <stdio.h>

// int main() {

//     char str[] = "Programming";
//     int count = 0;

//     for(int i = 0; str[i] != '\0'; i++) {

//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
//            str[i]=='o' || str[i]=='u' || str[i]=='A' ||
//            str[i]=='E' || str[i]=='I' || str[i]=='O' ||
//            str[i]=='U')
//         {
//             count++;
//         }
//     }

//     printf("Vowels = %d", count);

//     return 0;
// } 


// Count words in a String

#include <stdio.h>

int main() {

    char str[] = "Learning C is fun";
    int words = 1;

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] == ' ')
            words++;
    }

    printf("Words = %d", words);

    return 0;
}