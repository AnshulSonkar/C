#include <stdio.h>

struct Student {
    int roll;
    float cgpa;
};

int main() {

    struct Student s1;

    s1.roll = 101;
    s1.cgpa = 8.5;

    printf("Roll = %d\n", s1.roll);
    printf("CGPA = %.2f\n", s1.cgpa);

    return 0;
}