// #include <stdio.h>

// int main() {
//     int n, i, prime = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n < 2) {
//         prime = 0;
//     }

//     for (i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             prime = 0;
//             break;
//         }
//     }

//     if (prime == 1) {
//         printf("%d is a Prime Number\n", n);
//     } else {
//         printf("%d is Not a Prime Number\n", n);
//     }

//     return 0;
// }

//WAP to find the addition of digits
// #include<stdio.h>
// int main()
// {
//     int n,rev=0,b;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     b=n;
//     for(;b!=0;b=b/10)
//     {
//         int last=b%10;
//         rev=rev*10+last;
//     }
//     printf("rev = %d",rev);
// }

//Digit Count

// #include<stdio.h>
// int main()
// {
//     int n,count=0,b;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     b=n;
//     if(n==0)
//     {
//         count=1;
//     }
//     else
//     {
//         for(;b!=0;b=b/10)
//         {
//             int last=b%10;
//             count++;
//         }
//     }
//     printf("count = %d",count);
// } 


