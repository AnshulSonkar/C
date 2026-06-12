//Binary Search : 

#include<stdio.h>
int main()
{
    int a[5]={1,2,5,9,11};
    int n;
    int size=sizeof(a)/sizeof(a[0]);
    int l=0,h=size-1;
    int mid;
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("Enter a number : ");
    scanf("%d",&n);
    for(;l<=h;)
    {
        mid=(l+h)/2;
        if(a[mid]==n)
        {
            break;
        }
        else
        {
            if(n>mid)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
         
        }
    }
    if(h<l)
    {
        printf("Element Not Found");
    }
    else
    {
        printf("Element Found");
    }
}