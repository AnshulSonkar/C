// Bits Magic

// Find even / odd through bitwise


// It is more faster than usually


#include<stdio.h>


int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n&1)
    {
        printf("\nOdd");

    }
    else
    {
        printf("\nEven");
    }
}