#include<stdio.h>
int main()
{
    int a[5]={1,0,5,9,7};
    int max=a[0],min=a[0];
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("Min = %d max = %d",min,max);
}