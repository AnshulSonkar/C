// #include <stdio.h>

// int main() {

//     int x = 10;
//     int *ptr = &x;

//     printf("%d\n", x);
//     printf("%p\n", &x);
//     printf("%p\n", ptr);

//     return 0;
// } 


// Differencing Pointers
// #include <stdio.h>

// int main() {

//     int x = 50;
//     int *ptr = &x;

//     printf("%d\n", *ptr);

//     return 0;
// }


// Modify Variable using pointer
// #include <stdio.h>

// int main() {

//     int x = 10;
//     int *ptr = &x;

//     *ptr = 100;

//     printf("%d", x);

//     return 0;
// } 


 // Pointer Arithmetic 
// #include <stdio.h>

// int main() {

//     int arr[] = {10,20,30,40};

//     int *ptr = arr;

//     printf("%d\n", *ptr);

//     ptr++;

//     printf("%d\n", *ptr);

//     return 0;
// } 


// Array Using Pointer
// #include <stdio.h>

// int main() {

//     int arr[] = {1,2,3,4,5};

//     int *ptr = arr;

//     for(int i=0;i<5;i++) {
//         printf("%d ", *(ptr+i));
//     }

//     return 0;
// }


// Sum of Array using pointer
// #include <stdio.h>

// int main() {

//     int arr[] = {10,20,30,40,50};
//     int *ptr = arr;

//     int sum = 0;

//     for(int i=0;i<5;i++) {
//         sum += *(ptr+i);
//     }

//     printf("Sum = %d", sum);

//     return 0;
// } 


// Swap two numbers using Pointer
// #include <stdio.h>

// void swap(int *a, int *b) {

//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {

//     int x = 10;
//     int y = 20;

//     swap(&x, &y);

//     printf("%d %d", x, y);

//     return 0;
// }


// Function using Pointer 
// #include <stdio.h>

// void square(int *n) {
//     *n = (*n) * (*n);
// }

// int main() {

//     int x = 5;

//     square(&x);

//     printf("%d", x);

//     return 0;
// } 


// Pointer to Pointer 
// #include <stdio.h>

// int main() {

//     int x = 10;

//     int *p = &x;

//     int **q = &p;

//     printf("%d\n", *p);
//     printf("%d\n", **q);

//     return 0;
// }


//String Using Pointer
// #include <stdio.h>

// int main() {

//     char str[] = "Hello";

//     char *ptr = str;

//     while(*ptr != '\0') {
//         printf("%c", *ptr);
//         ptr++;
//     }

//     return 0;
// } 


// Reverse Array Using Pointer
// #include <stdio.h>

// int main() {

//     int arr[] = {1,2,3,4,5};

//     int *start = arr;
//     int *end = arr + 4;

//     while(start < end) {

//         int temp = *start;
//         *start = *end;
//         *end = temp;

//         start++;
//         end--;
//     }

//     for(int i=0;i<5;i++)
//         printf("%d ", arr[i]);

//     return 0;
// }


// Adress operator 
// #include <stdio.h>

// int main() {
//     int x = 10;

//     printf("Value of x = %d\n", x);
//     printf("Address of x = %p\n", (void *)&x);

//     return 0;
// }


// 
#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;


  printf("%d\n", *ptr);
  printf("Address of x = %p\n", (void *)&x);

}