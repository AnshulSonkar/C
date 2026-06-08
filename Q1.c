// Swapping of two nodes using bitwise operators

#include<stdio.h>
int main()
{
    int a = 5;
    int b = 3;

    printf("Before a = %d b = %d\n",a,b);


    a = a^b;
    b = a^b;
    a = a^b;

    printf("After a = %d b = %d",a,b);

}