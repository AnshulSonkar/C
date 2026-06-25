// Check if the substring exists or not in the main string

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[]="ababbbbb";
//     char target[]="abb";
//     int k=3;
//     char a[k];
//     int ln=0,i,j,l,m,count=0;

    
//     for( i=0;i<s[i]!='\0';i++)
//     {
//         ln++;
//     }

//     for( i=0;i<ln-k;i++)
//     {
//         for(j=i,l=0;j<i+k;j++,l++)
//         {
//             a[l]=s[j];
//         }
//         for(m=0;m<k;m++)
//         {
//             if(target[m]!=a[m])
//             {
//                 break;
//             }
//         }
//         if(m==k)
//         {
//             count++;
//             break;
//         }
        
//     }
//     if(count>0)
//     {
//         printf("Substring exists");
//     }
//     else
//     {
//         printf("Substring does not exist");
//     }
// }