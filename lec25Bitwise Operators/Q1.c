#include<stdio.h>
struct student 
{
    char name[50];
    int Roll;
    int age;
    
};

int main()
{
    struct student s1[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter name : ");
        scanf(" %s",s1[i].name);
        
        printf("Enter age : ");
        scanf(" %d",&s1[i].age);

        printf("Enter Roll No : ");
        scanf("%d",&s1[i].Roll);
    }
    for(int i=0;i<3;i++)
    {
        printf("Name : %s",s1[i].name);
        printf("\nAge : %d",s1[i].age);
        printf("\nRoll no : %d",s1[i].Roll);
    }
}