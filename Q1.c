#include<stdio.h>
int main()
{
    int a=1234;
    int n=a,last,sum;
    for(;n!=0;)
    {            
            sum=0;
            for(;n!=0;n=n/10)
            {
                int last=n%10;
                sum=sum+last;
               // printf("%d\n",sum);
                    
            }
            if(sum>9)
            {
                n=sum;
            }
    }
    if(sum==1)
    {
        printf("It's a magic number !!");
    }
    else
    {
        printf("It's not a magic number !! %d",sum);
    }
}