// RECURSION
// #include <stdio.h>

// void fun(int n) {

//     if(n == 0)
//         return;

//     printf("%d ", n);

//     fun(n - 1);
// }

// int main() {

//     fun(5);

//     return 0;
// } 


// 2nd Code
// #include <stdio.h>

// void print(int n) {

//     if(n == 0)
//         return;

//     print(n - 1);

//     printf("%d ", n);
// }

// int main() {

//     print(5);

//     return 0;
// } 


// #include <stdio.h>

// void print(int n) {

//     if(n == 0)
//         return;

//     printf("%d ", n);

//     print(n - 1);
// }

// int main() {

//     print(5);

//     return 0;
// } 


// Fcatorial Using Recurion 
// #include <stdio.h>

// int factorial(int n) {

//     if(n == 0 || n == 1)
//         return 1;

//     return n * factorial(n - 1);
// }

// int main() {

//     printf("%d", factorial(5));

//     return 0;
// } 


// Sum of First N numbers
// #include <stdio.h>

// int sum(int n) {

//     if(n == 0)
//         return 0;

//     return n + sum(n - 1);
// }

// int main() {

//     printf("%d", sum(5));

//     return 0;
// } 


// Fibonacci Series 
// #include <stdio.h>

// int fib(int n) {

//     if(n == 0)
//         return 0;

//     if(n == 1)
//         return 1;

//     return fib(n - 1) + fib(n - 2);
// }

// int main() {

//     for(int i = 0; i < 8; i++) {
//         printf("%d ", fib(i));
//     }

//     return 0;
// } 


// Power of Number 
#include <stdio.h>

int power(int a, int b) {

    if(b == 0)
        return 1;

    return a * power(a, b - 1);
}

int main() {

    printf("%d", power(2, 5));

    return 0;
}