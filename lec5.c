// code 1 : Even numbers
// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("The even numbers :");
//     for(i=0;i<=10;i++)
//      if(i%2==0)
//         printf("\n%d",i);
// }

// code 2 : Reverse Loop
// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("The even numbers :");
//        for(i=10;i>=0;i--)
//                printf("\n%d",i);
// }

//code 3 : Sum till 10

// #include<stdio.h>
// int main()
// {
//     int i,sum;
//     printf("The sum of numbers till 10 :");
//     for(sum=0,i=0;i<=10;i++)
//     {
//         sum=sum+i;
//     }
//     printf("\nSum = %d",sum);
// }

//code 4 : Sum of digits 

// #include<stdio.h>
// int main()
// {
//     int n,sum;//lastdig;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for(sum=0;n!=0;n=n/10)
//     {
//         int lastdig=n%10;
//         sum= sum+lastdig;
//     }
//     printf("\nSum = %d",sum);
// }

//code 4 : Aproach 2

// #include<stdio.h>
// int main()
// {
//     int num,lastdig,sum=0;
//     printf("Enter Number : ");
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         lastdig=num%10;
//         num=num/10;
//         sum=sum+lastdig;
//     }
//     printf("Sum of digits = %d",sum);

// }


//WAP to check pelindrome
#include<stdio.h>
int main()
{
    int a,num,res=0;
    printf("Enter number : ");
    scanf("%d",&a);
    num=a;
    while (num!=0)
    {
        int last = num%10;
        res=res*10+last;
        num=num/10;
    }
    printf("%d",res);
    if(a==res)
        printf("\nIt is Pelindrome");
    else
        printf("\nIt is not Pelindrome");

}
