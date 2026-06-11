//WAP to find missing number

// #include<stdio.h>
// int main()
// {
//     int arr[5]={1,2,3,5,6},i;
//     for(i=0;i<4;i++)
//     {
//         if(arr[i]+1!=arr[i+1])
//         {
//             printf("Missing Number = %d",arr[i]+1);
//             break;
//         }
//     }
//     if(i==4)
//     {
//         printf("Nothing is missing !!");
//     }
// }

//Second Approach (According to sir)

#include<stdio.h>
int main()
{
    int a[5]={1,2,3,5,6};
    int sum=0,total=0,i;
    int size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
        
    }
    for(i=1;i<=a[size-1];i++)
    {
        total=total+i;    
    }
    int miss=total-sum;
    printf("Missing : %d",miss);
}