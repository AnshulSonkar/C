#include<stdio.h>
int main()
{
    int i,j,k=7,a[7]={1,3,4,6,-5,5,1};
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(a[i]+a[j]==k)
            {
                printf("\nElement of index %d and %d = %d",i,j,k);
            }
        } 
    }
}