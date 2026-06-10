#include<stdio.h>
int prime(int n)
{
    int count=0;
    if(n<2)
    {
       printf("\nNot Prime"); 
    }
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("\nPrime");
        else
            printf("\nNot prime");
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    prime(n);
}

