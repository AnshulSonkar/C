// Print Argc
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     printf("%d", argc);

//     return 0;
// } 


// Print All Arguments 
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     for(int i = 0; i < argc; i++)
//     {
//         printf("%s\n", argv[i]);
//     }

//     return 0;
// } 


// Print first Argument 
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     printf("%s", argv[1]);

//     return 0;
// }  


// Add two numbers
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[])
// {
//     int a = atoi(argv[1]);
//     int b = atoi(argv[2]);

//     printf("Sum = %d", a + b);

//     return 0;
// }  


// Multiply two numbers 
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[])
// {
//     int a = atoi(argv[1]);
//     int b = atoi(argv[2]);

//     printf("%d", a * b);

//     return 0;
// }


// Check number of Arguments
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     if(argc < 2)
//     {
//         printf("Argument Missing");
//         return 1;
//     }

//     printf("Argument Received");

//     return 0;
// }