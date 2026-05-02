// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     switch(a)
//     {
//         case 1: printf("\nHello");
//                 break;
//         case 2 : printf("\nHii");
//                 break;
//         default : printf("\nHehehe");
//     }
// } 


// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a day : ");
//     scanf("%d",&a);
//     switch(a)
//     {
//         case 1: printf("\nMonday");
//                 break;
//         case 2: printf("\nTuesday");
//                 break;
//         case 3: printf("\nWednesday");
//                 break;
//         case 4: printf("\nThursday");
//                 break;
//         case 5: printf("\nFriday");
//                 break;
//         case 6: printf("\nSaturday");
//                 break;
//         case 7: printf("\nSunday");
//                 break;
//         default : printf("\nInvalid Input");
//     }

// } 


#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter Two Numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nExamaple : +,-,*,/");
    printf("Enter Choice : ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+' : printf("\nThe addition of two number : %d",a+b);
                    break;
        case '-' : printf("\nThe addition of two number : %d",a-b);
                    break;
        case '*' : printf("\nThe addition of two number : %d",a*b);
                    break;
        case '/' : if(b!=0)
                        printf("\nThe addition of two number : %.2f",(float)a/b);
                    else 
                        printf("\nCannot devide by zero");
                    break;

        default : printf("\nInvalid Input");

    }
}