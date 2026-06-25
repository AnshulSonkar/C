// Spiral

// 1 2 3
// 4 5 6
// 7 8 9

//Output : 1 2 3 6 9 8 7 4 5

#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int left=0,right=2;
    int t=0,b=2;
    while(left<=right && t<=b)
    {
        for(int i=left;i<=right;i++)
        {
            printf("%d ",a[t][i]);
        }
        t++;
        for(int i=t;i<=b;i++)
        {
            printf("%d ",a[i][right]);
        }
        right--;
        for(int i=right;i>=left;i--)
        {
            printf("%d ",a[b][i]);
        }
        b--;
        for(int i=b;i>=t;i--)
        {
            printf("%d ",a[i][left]);
        }
        left++;
    }
    
    
}