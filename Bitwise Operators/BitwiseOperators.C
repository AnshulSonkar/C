// Bitwise AND
// #include <stdio.h>

// int main() {

//     int a = 5;
//     int b = 3;

//     printf("%d", a & b);

//     return 0;
// } 


// Bitwise OR
// #include <stdio.h>

// int main() {

//     int a = 5;
//     int b = 3;

//     printf("%d", a | b);

//     return 0;
// }
 

// Bitwise XOR
// #include <stdio.h>

// int main() {

//     int a = 5;
//     int b = 3;

//     printf("%d", a ^ b);

//     return 0;
// } 


// Bitwise NOT
// #include <stdio.h>

// int main() {

//     int a = 5;

//     printf("%d", ~a);

//     return 0;
// } 


// Left shift <<
// #include <stdio.h>

// int main() {

//     int a = 5;

//     printf("%d", a << 1);

//     return 0;
// }


// Right shift >>
// #include <stdio.h>

// int main() {

//     int a = 20;

//     printf("%d", a >> 2);

//     return 0;
// } 


// Chcek Even or Add 
// #include <stdio.h>

// int main() {

//     int n = 12;

//     if(n & 1)
//         printf("Odd");
//     else
//         printf("Even");

//     return 0;
// } 


// Swap without third variable
// #include <stdio.h>

// int main() {

//     int a = 10;
//     int b = 20;

//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;

//     printf("%d %d", a, b);

//     return 0;
// } 


// Check power of 2
// #include <stdio.h>

// int main() {

//     int n = 16;

//     if((n & (n - 1)) == 0)
//         printf("Power of 2");
//     else
//         printf("Not Power of 2");

//     return 0;
// } 


// Count of sit bits
#include <stdio.h>

int main() {

    int n = 13;
    int count = 0;

    while(n) {

        if(n & 1)
            count++;

        n >>= 1;
    }

    printf("%d", count);

    return 0;
}