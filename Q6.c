//WAP to find magic number if sum digit =1 (magic)
//1+2+3+4=10=1+0=1(Magic)

#include<stdio.h>
int magic(int n)
{
    int sum=0;
    int b=n;
    l1:
    for(sum=0;b!=0;b=b/10)
    {
        int last=b%10;
        sum=sum+last;
    }
    if(sum>=10)
    {
        b=sum;
        
        goto l1;
    }
    else
    {
        if(sum==1)
            printf("magic");
        else
            printf("not magic");
    }
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    magic(n);
}