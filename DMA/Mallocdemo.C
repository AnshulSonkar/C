// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int *ptr;

//     ptr = (int *)malloc(5 * sizeof(int));

//     for(int i = 0; i < 5; i++) {
//         ptr[i] = i + 1;
//     }

//     for(int i = 0; i < 5; i++) {
//         printf("%d ", ptr[i]);
//     }

//     free(ptr);

//     return 0;
// } 


// User Input Array Using malloc()
// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int n;

//     printf("Enter Size: ");
//     scanf("%d", &n);

//     int *arr = (int *)malloc(n * sizeof(int));

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     free(arr);

//     return 0;
// } 


// Calloc 
// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int *ptr;

//     ptr = (int *)calloc(5, sizeof(int));

//     for(int i = 0; i < 5; i++) {
//         printf("%d ", ptr[i]);
//     }

//     free(ptr);

//     return 0;
// } 


// realloc()
#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;

    ptr = (int *)malloc(3 * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    ptr = (int *)realloc(ptr, 5 * sizeof(int));

    ptr[3] = 40;
    ptr[4] = 50;

    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}