// Dynamic Memory
// int *arr;
// arr = (int *)malloc(100 * sizeof(int));
// Malloc()
// int *arr;
// arr = (int *)malloc(100 * sizeof(int));
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
// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int *ptr;

//     ptr = (int *)malloc(3 * sizeof(int));

//     ptr[0] = 10;
//     ptr[1] = 20;
//     ptr[2] = 30;

//     ptr = (int *)realloc(ptr, 5 * sizeof(int));

//     ptr[3] = 40;
//     ptr[4] = 50;

//     for(int i = 0; i < 5; i++) {
//         printf("%d ", ptr[i]);
//     }

//     free(ptr);

//     return 0; 
// } 


// Free()
// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int *ptr;

//     ptr = (int *)malloc(5 * sizeof(int));

//     free(ptr);

//     return 0;
// } 


// Sum of Dynamic Array
// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int n;
//     scanf("%d", &n);

//     int *arr = (int *)malloc(n * sizeof(int));

//     int sum = 0;

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }

//     printf("Sum = %d", sum);

//     free(arr);

//     return 0;
// } 


// Largest Element Using DMA
// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int n;
//     scanf("%d", &n);

//     int *arr = (int *)malloc(n * sizeof(int));

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int max = arr[0];

//     for(int i = 1; i < n; i++) {

//         if(arr[i] > max)
//             max = arr[i];
//     }

//     printf("Largest = %d", max);

//     free(arr);

//     return 0;
// } 


// Dynamic 2D Array 
// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int rows = 3;
//     int cols = 3;

//     int **arr;

//     arr = (int **)malloc(rows * sizeof(int *));

//     for(int i = 0; i < rows; i++) {
//         arr[i] = (int *)malloc(cols * sizeof(int));
//     }

//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             arr[i][j] = i + j;
//         }
//     }

//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i = 0; i < rows; i++) {
//         free(arr[i]);
//     }

//     free(arr);

//     return 0;
// } 


// DMA with Sructure 
// #include <stdio.h>
// #include <stdlib.h>

// struct Student {
//     int roll;
// };

// int main() {

//     struct Student *ptr;

//     ptr = (struct Student *)malloc(sizeof(struct Student));

//     ptr->roll = 101;

//     printf("%d", ptr->roll);

//     free(ptr);

//     return 0;
// }