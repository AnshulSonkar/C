// #include<stdio.h>
// int main()
// {
//     int num,i=2;
//     printf("Enter number : ");
//     scanf("%d",&num);
//     while(i<=num)
//     {
//         if(num%i==0)
//         {
//             break;
//         }
//         i++;
//     }
//     if(i>num/2)
//         printf("\nIt is a prime number");
//     else
//         printf("\nIt is not prime number");
// }


// fabonacci series

// #include<stdio.h>
// int main()
// {
//     int num,a,b,next;
//     printf("\nEnter : ");
//     scanf("%d",&num);
//     a=0;
//     b=1;
//     next=0;
//     while(next<=num)
//     {
//         printf("\t%d",a);
//        next=a+b;
//        a=b;
//        b=next;
//     }
    
// }
//approach 2
// #include<stdio.h>
// int main()
// {
//     int num,a,b,next,i;
//     printf("\nEnter : ");
//     scanf("%d",&num);
//     a=0;
//     b=1;
//     for(i=1;i<=num;i++)
//     {
//         printf("\t%d",a);
//        next=a+b;
//        a=b;
//        b=next;
//     }
    
// }


#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter : ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        fact = fact*i;
    }
    printf("Factorial : %d",fact);
}