// Structres
// #include <stdio.h>

// struct Student {
//     int roll;
//     float cgpa;
// };

// int main() {

//     struct Student s1;

//     s1.roll = 101;
//     s1.cgpa = 8.5;

//     printf("Roll = %d\n", s1.roll);
//     printf("CGPA = %.2f\n", s1.cgpa);

//     return 0;
// } 


// Structre with string
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
};

int main() {

    struct Student s1;

    s1.roll = 101;

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Roll = %d\n", s1.roll);
    printf("Name = %s\n", s1.name);

    return 0;
}