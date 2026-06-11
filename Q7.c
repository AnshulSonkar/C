#include<stdio.h>
int main()
{
    int arr[5]={3,12,52,34,5};
    int n=5,i;
    for(i=0;i<5;i++)
    {
       if(n==arr[i])
        break;   
    }
    if(n==arr[i])
    {
         printf("Element is Found !!");
    }
    else
    {
        printf("Element is not Found !!");
    }

}