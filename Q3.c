#include<stdio.h>
int evenodd(int n)
{
    if(n%2==0)
        printf("Even Number");
    else
        printf("Odd");
}
int main()
{
    int n;
   printf("Enter a number to check : ");
   scanf("%d",&n);
   evenodd(n);
}