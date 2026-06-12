// Concat of array

#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[6],i,j;
    for(i=0;i<3;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<3;j++,i++)
    {
        c[i]=b[j];
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d\t",c[i]);
    }
    
}