#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("\nHello");
                break;
        case 2 : printf("\nHii");
                break;
        default : printf("\nHehehe");
    }
}