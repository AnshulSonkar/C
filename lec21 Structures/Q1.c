// First non repeating character

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[]="abcaafgh";
//     int ln = strlen(s);
//     int count=0;
//     char freq[256]={0};
//     for(int i=0;i<ln;i++)
//     {
//         freq[s[i]]++;
//     }
//     for(int i=0;i<ln;i++)
//     {
//         if(freq[s[i]]==1)
//         {
//             printf("%c is non repeating",s[i]);
//             count++;
//             break;
//         }
        
//     }
//     if(count==0)
//     {
//         printf("No non repeating character exist");
//     }
// }