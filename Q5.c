#include<stdio.h>
int main()
{
    int arr[5]={1,6,0,4,2};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
        
    }
    printf("Sum of array : %d",sum);
}