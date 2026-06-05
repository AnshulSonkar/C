// Pelindrome

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="madam";
    int ln=strlen(str);
    int i,j,count=0;
    for (i = 0,j=ln-1;j>=0; i++,j--)
    {
        if(str[i]!=str[j])
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Pelindrome");
    }
    else
    {
        printf("Not Pelindrome");
    }


    
}