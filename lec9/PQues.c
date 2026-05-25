// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// } 

// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             sum=sum+1;
//             printf("%d ",sum);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int c=65; //for small a to z - c=97
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf("%c ",c++);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         for(int j=4;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(int k=0;k<=i;k++)
//         {
//             printf("*");
//         }
//         for(int l=1;l<=i;l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         for(int j=4;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(int k=0;k<=i;k++)
//         {
//             printf("*");
//         }
//         for(int l=1;l<=i;l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0; j<=i;j++)
//         {
//             printf(" ");
//         }
//         for(int k=4; k>=i;k--)
//         {
//             printf("*");
//         }
//         for(int l=2; l>0;l--)
//         {
//             printf("*");
//         }
//         for(int m=0;m<=i;m++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// } 

// #include<stdio.h>
// int main()
// {
//     int ch=65;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0; j<=i;j++)
//         {
//             printf("  ");
//         }
//         for(int k=4; k>=i;k--)
//         {
//             printf("%c ",ch++);
//         }
//         for(int l=4; l>i;l--)
//         {
//             printf("%c ",ch++);
//         }
//         printf("\n");
//     }
// }

// Butterfly Pattern 

// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf("*");
//         }
//         for(int k=4;k>i;k--)
//         {
//             printf(" ");
//         }
//         for(int m=4;m>i;m--)
//         {
//             printf(" ");
//         }
//         for(int l=0;l<=i;l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=1;i<5;i++)
//     {
        
//         for(int n=4;n>=i;n--)
//         {
//             printf("*");
//         }
//         for(int o=1;o<=i;o++)
//         {
//             printf(" ");
//         }
        
//         for(int p=1;p<=i;p++)
//         {
//             printf(" ");
//         }
//         for(int q=4;q>=i;q--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }



