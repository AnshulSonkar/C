// Arrange the array in order of - Zero, Negative, Positive

#include<stdio.h>
// int main()
// {
//     int a[6]={-1,0,5,-2,0,3};
//     int size=sizeof(a)/sizeof(int);
//     int low=0,mid=0,high=size-1;
//     for(;mid<high;)
//     {
//         if(a[mid]==0)
//         {
//             int t=a[mid];
//             a[mid]=a[low];
//             a[low]=a[mid];
//             low++,mid++;
//         }
//         if(a[mid]<0)
//         {
//             mid++;
//         }
//         if(a[mid]>0)
//         {
//             int t=a[mid];
//             a[mid]=a[high];
//             a[high]=a[mid];
//             high--;
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }

int main()
{
    int a[6]={-1,0,5,-2,0,3};
    int b[6];
    int i,j;
    int size=sizeof(a)/sizeof(int);

    for(i=0,j=0;i<size;i++)
    {
        if(a[i]==0)
        {
            b[j]=a[i];
            j++;
        }

    }
    for(i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            b[j]=a[i];
            j++;
        }

    }
    for(i=0;i<size;i++)
    {
        if(a[i]>0)
        {
            b[j]=a[i];
            j++;
        }

    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",b[i]);
    }
}