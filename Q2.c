#include<stdio.h>
int x()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j || j==(4-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    x();
}