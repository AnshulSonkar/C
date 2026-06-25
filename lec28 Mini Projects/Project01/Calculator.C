// #include <stdio.h>
// #include <stdlib.h>

// void displayMenu();
// double add(double a, double b);
// double subtract(double a, double b);
// double multiply(double a, double b);
// double divide(double a, double b);
// int modulus(int a, int b);

// int main() {
//     int choice;
//     double num1, num2, result;
//     int intNum1, intNum2, modResult;

//     do {
//         displayMenu();
//         printf("Enter your choice (1-6): ");
//         scanf("%d", &choice);

//         // Exit the program immediately if selected
//         if (choice == 6) {
//             printf("\nExiting the calculator. Goodbye!\n");
//             break;
//         }

//         // Handle invalid menu choice before asking for numbers
//         if (choice < 1 || choice > 6) {
//             printf("\nError: Invalid choice! Please select an option between 1 and 6.\n\n");
//             continue;
//         }

//         // Modulus operator (%) in C strictly requires integers
//         if (choice == 5) {
//             printf("Enter two integers for modulus: ");
//             if (scanf("%d %d", &intNum1, &intNum2) != 2) {
//                 printf("Invalid numeric input.\n");
//                 exit(1);
//             }
//         } else {
//             printf("Enter two numbers: ");
//             if (scanf("%lf %lf", &num1, &num2) != 2) {
//                 printf("Invalid numeric input.\n");
//                 exit(1);
//             }
//         }

//         // Switch case to process operations based on user selection
//         switch (choice) {
//             case 1:
//                 result = add(num1, num2);
//                 printf("\nResult: %.2lf + %.2lf = %.2lf\n\n", num1, num2, result);
//                 break;
//             case 2:
//                 result = subtract(num1, num2);
//                 printf("\nResult: %.2lf - %.2lf = %.2lf\n\n", num1, num2, result);
//                 break;
//             case 3:
//                 result = multiply(num1, num2);
//                 printf("\nResult: %.2lf * %.2lf = %.2lf\n\n", num1, num2, result);
//                 break;
//             case 4:
//                 // Handle division by zero error safely
//                 if (num2 == 0) {
//                     printf("\nError: Division by zero is undefined!\n\n");
//                 } else {
//                     result = divide(num1, num2);
//                     printf("\nResult: %.2lf / %.2lf = %.2lf\n\n", num1, num2, result);
//                 }
//                 break;
//             case 5:
//                 // Handle modulus by zero error safely
//                 if (intNum2 == 0) {
//                     printf("\nError: Modulus by zero is undefined!\n\n");
//                 } else {
//                     modResult = modulus(intNum1, intNum2);
//                     printf("\nResult: %d %% %d = %d\n\n", intNum1, intNum2, modResult);
//                 }
//                 break;
//             default:
//                 printf("\nUnexpected error occurred.\n\n");
//         }

//     } while (choice != 6);

//     return 0;
// }

// // Function definitions

// void displayMenu() {
//     printf("=== C MULTI-FUNCTION CALCULATOR ===\n");
//     printf("1. Addition (+)\n");
//     printf("2. Subtraction (-)\n");
//     printf("3. Multiplication (*)\n");
//     printf("4. Division (/)\n");
//     printf("5. Modulus (%%)\n");
//     printf("6. Exit\n");
//     printf("===================================\n");
// }

// double add(double a, double b) {
//     return a + b;
// }

// double subtract(double a, double b) {
//     return a - b;
// }

// double multiply(double a, double b) {
//     return a * b;
// }

// double divide(double a, double b) {
//     return a / b;
// }

// int modulus(int a, int b) {
//     return a % b;
// }