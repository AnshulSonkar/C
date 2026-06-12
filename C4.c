#include<stdio.h>
int main()
{
    int i,j,a[5]={-10,20,30,-40,50},max=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j)
            if(a[i]+a[j]>max)
            {
                max=a[i]+a[j];
            }
        }
    }
    printf("Max=%d",max);
}