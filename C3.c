#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},i;
    int t=a[0];
    for(i=0;i<4;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=t;
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
    }
}