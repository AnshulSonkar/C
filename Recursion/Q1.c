// Move all negative no to left positive to right

#include<stdio.h>
int main()
{
    int arr[]={-1,4,2,-3,7,3,-4};
    int neg[3];
    int pos[4];
    int ans[7];
    int i,j,k;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0,j=0,k=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            neg[j]=arr[i];
            j++;
        }
        else
        {
            pos[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<3;i++)
    {
        ans[i]=neg[i];
    }
    for(j=0;i<7;i++,j++)
    {
        ans[i]=pos[j];
    }
    for(i=0;i<7;i++)
    {
        printf("%d\t",ans[i]);
    }

}