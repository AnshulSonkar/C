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
// #include <stdio.h>

// struct Student {
//     int roll;
//     char name[50];
// };

// int main() {

//     struct Student s1;

//     s1.roll = 101;

//     printf("Enter Name: ");
//     scanf("%s", s1.name);

//     printf("Roll = %d\n", s1.roll);
//     printf("Name = %s\n", s1.name);

//     return 0;
// } 


// Structure Initialization 
// #include <stdio.h>

// struct Student {
//     int roll;
//     float cgpa;
// };

// int main() {

//     struct Student s1 = {101, 8.9};

//     printf("%d %.2f", s1.roll, s1.cgpa);

//     return 0;
// } 


// Array of structures
// #include <stdio.h>

// struct Student {
//     int roll;
//     char name[20];
// };

// int main() {

//     struct Student s[3];

//     for(int i = 0; i < 3; i++) {

//         printf("Enter Roll and Name: ");
//         scanf("%d %s", &s[i].roll, s[i].name);
//     }

//     printf("\nStudent Details\n");

//     for(int i = 0; i < 3; i++) {

//         printf("%d %s\n", s[i].roll, s[i].name);
//     }

//     return 0;
// } 


// Structure and Function
#include <stdio.h>

struct Student {
    int roll;
};

void display(struct Student s) {
    printf("Roll = %d", s.roll);
}

int main() {

    struct Student s1;

    s1.roll = 101;

    display(s1);

    return 0;
}