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
// #include <stdio.h>

// int power(int a, int b) {

//     if(b == 0)
//         return 1;

//     return a * power(a, b - 1);
// }

// int main() {

//     printf("%d", power(2, 5));

//     return 0;
// } 


// GCD Using Recursion
// #include <stdio.h>

// int gcd(int a, int b) {

//     if(b == 0)
//         return a;

//     return gcd(b, a % b);
// }

// int main() {

//     printf("%d", gcd(24, 18));

//     return 0;
// } 


// Decimal to binary 
// #include <stdio.h>

// void binary(int n) {

//     if(n == 0)
//         return;

//     binary(n / 2);

//     printf("%d", n % 2);
// }

// int main() {

//     binary(10);

//     return 0;
// } 


// Reverse String Using Recursion
// #include <stdio.h>
// #include <string.h>

// void reverse(char str[], int index) {

//     if(index < 0)
//         return;

//     printf("%c", str[index]);

//     reverse(str, index - 1);
// }

// int main() {

//     char str[] = "HELLO";

//     reverse(str, strlen(str) - 1);

//     return 0;
// } 


// Palindrome Using Recursion 
// #include <stdio.h>
// #include <string.h>

// int palindrome(char str[], int start, int end) {

//     if(start >= end)
//         return 1;

//     if(str[start] != str[end])
//         return 0;

//     return palindrome(str, start + 1, end - 1);
// }

// int main() {

//     char str[] = "madam";

//     if(palindrome(str, 0, strlen(str) - 1))
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");

//     return 0;
// } 


// Recursive Binary Search
// #include <stdio.h>

// int binarySearch(int arr[], int low, int high, int key) {

//     if(low > high)
//         return -1;

//     int mid = (low + high) / 2;

//     if(arr[mid] == key)
//         return mid;

//     if(key < arr[mid])
//         return binarySearch(arr, low, mid - 1, key);

//     return binarySearch(arr, mid + 1, high, key);
// }

// int main() {

//     int arr[] = {10,20,30,40,50};

//     int pos = binarySearch(arr, 0, 4, 40);

//     printf("%d", pos);

//     return 0;
// }  


// Tower of Hanoi
// #include <stdio.h>

// void hanoi(int n, char source, char helper, char destination) {

//     if(n == 1) {
//         printf("Move Disk 1 from %c to %c\n",
//                source,
//                destination);
//         return;
//     }

//     hanoi(n - 1, source, destination, helper);

//     printf("Move Disk %d from %c to %c\n",
//            n,
//            source,
//            destination);

//     hanoi(n - 1, helper, source, destination);
// }

// int main() {

//     hanoi(3, 'A', 'B', 'C');

//     return 0;
// } 


// Swapping of two nodes using bitwise operators

// #include<stdio.h>
// int main()
// {
//     int a = 5;
//     int b = 3;

//     printf("Before a = %d b = %d\n",a,b);


//     a = a^b;
//     b = a^b;
//     a = a^b;

//     printf("After a = %d b = %d",a,b);

// }