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
#include <stdio.h>

int main() {

    int arr[] = {1,2,3,4,5};

    int *ptr = arr;

    for(int i=0;i<5;i++) {
        printf("%d ", *(ptr+i));
    }

    return 0;
}


