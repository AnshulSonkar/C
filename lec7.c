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


// #include<stdio.h>
// int main()
// {
//     int a,b;
//     char ch;
//     printf("Enter Two Numbers : ");
//     scanf("%d%d",&a,&b);
//     printf("\nExamaple : +,-,*,/");
//     printf("Enter Choice : ");
//     scanf(" %c",&ch);
//     switch(ch)
//     {
//         case '+' : printf("\nThe addition of two number : %d",a+b);
//                     break;
//         case '-' : printf("\nThe addition of two number : %d",a-b);
//                     break;
//         case '*' : printf("\nThe addition of two number : %d",a*b);
//                     break;
//         case '/' : if(b!=0)
//                         printf("\nThe addition of two number : %.2f",(float)a/b);
//                     else 
//                         printf("\nCannot devide by zero");
//                     break;

//         default : printf("\nInvalid Input");

//     }
// } 


// #include<stdio.h>
// int main()
// {
//     int rup,ch;
//     printf("Enter rupee : ");
//     scanf("%d",&rup);
//     printf("\nChoices : ");
//     printf("\n Enter 1 : Doller");
//     printf("\n Enter 2 : Euro");
//     printf("\n Enter 3 : Canadian Doller");
//     printf("\n Enter 4 : Saudi Riyal");
//     printf("\nEnter choice : ");
//     scanf("%d",&ch);

//     switch(ch)
//     {
//         case 1 : printf("\nIn doller : %.2f",(float)rup/87.85);
//                     break;
//         case 2 : printf("\nIn Euro : %.2f",(float)rup/102.39);
//                     break;
//         case 3 : printf("\nIn Canadian Dollar : %.2f",(float)rup/63.71);
//                     break;
//         case 4 : printf("\nIn Saudi Riyal : %.2f",(float)rup/23.85);
//                     break;
//         default : printf("\nInvalid Input");
        
//     }
// } 


#include<stdio.h>
int main()
{
    int bal = 1000,ch,amt;
    printf("\nWelcome to ATM : ");
    printf("\n1.Check Balalance");
    printf("\n2.Deposit");
    printf("\n3.Withdraw");
    printf("\n4.Exit");
    printf("\nEnter Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("\nBalance = %d",amt);
                break;
        case 2 : printf("\nEnter Amount : ");
                scanf("%d",&amt);
                bal=bal+amt;

                printf("\n%d is deposited\nCurrent Balance : %d",amt,bal);
                break;
        case 3 : printf("\nEnter Amount : ");
                scanf("%d",&amt);
                if(bal<=amt)
                {
                    bal=bal-amt;
                    printf("\n%d is deposited\nCurrent Balance : %d",amt,bal);
                }
        case 4 : printf("\nThank You For Visiting");
                break;
        default : printf("\nInvalid input");        
    }

}