// Student Management System
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define FILE_NAME "student.txt"
// #define MAX_STUDENTS 100

// struct Student {
//     int roll;
//     char name[50];
//     float marks;
// };

// // Function Prototypes
// void addStudent(struct Student s[], int *count);
// void displayStudents(struct Student s[], int count);
// void searchStudent(struct Student s[], int count);
// void updateStudent(struct Student s[], int count);
// void deleteStudent(struct Student s[], int *count);
// void saveToFile(struct Student s[], int count);
// int loadFromFile(struct Student s[]);

// int main() {
//     struct Student students[MAX_STUDENTS];
//     int count = 0;
//     int choice;

//     // Load existing data at startup
//     count = loadFromFile(students);

//     while (1) {
//         printf("\n=== STUDENT MANAGEMENT SYSTEM ===\n");
//         printf("1. Add Student\n");
//         printf("2. Display Students\n");
//         printf("3. Search Student\n");
//         printf("4. Update Student\n");
//         printf("5. Delete Student\n");
//         printf("6. Save To File\n");
//         printf("7. Exit\n");
//         printf("Enter your choice (1-7): ");
        
//         if (scanf("%d", &choice) != 1) {
//             printf("Invalid input. Please enter a number.\n");
//             while (getchar() != '\n'); // Clear input buffer
//             continue;
//         }

//         switch (choice) {
//             case 1: addStudent(students, &count); break;
//             case 2: displayStudents(students, count); break;
//             case 3: searchStudent(students, count); break;
//             case 4: updateStudent(students, count); break;
//             case 5: deleteStudent(students, &count); break;
//             case 6: saveToFile(students, count); break;
//             case 7: 
//                 printf("Saving data and exiting...\n");
//                 saveToFile(students, count);
//                 exit(0);
//             default: printf("Invalid choice. Try again.\n");
//         }
//     }
//     return 0;
// }

// // 1. Add a new student
// void addStudent(struct Student s[], int *count) {
//     if (*count >= MAX_STUDENTS) {
//         printf("Database full. Cannot add more students.\n");
//         return;
//     }

//     struct Student newStudent;
//     printf("Enter Roll Number: ");
//     scanf("%d", &newStudent.roll);
    
//     // Check for duplicate roll number
//     for (int i = 0; i < *count; i++) {
//         if (s[i].roll == newStudent.roll) {
//             printf("Error: Roll number %d already exists!\n", newStudent.roll);
//             return;
//         }
//     }

//     printf("Enter Name: ");
//     getchar(); // Clear newline from buffer
//     fgets(newStudent.name, sizeof(newStudent.name), stdin);
//     newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; // Remove newline

//     printf("Enter Marks: ");
//     scanf("%f", &newStudent.marks);

//     s[*count] = newStudent;
//     (*count)++;
//     printf("Student added successfully in memory!\n");
// }

// // 2. Display all students
// void displayStudents(struct Student s[], int count) {
//     if (count == 0) {
//         printf("No records found.\n");
//         return;
//     }

//     printf("\n%-10s %-30s %-10s\n", "Roll No", "Name", "Marks");
//     printf("--------------------------------------------------\n");
//     for (int i = 0; i < count; i++) {
//         printf("%-10d %-30s %-10.2f\n", s[i].roll, s[i].name, s[i].marks);
//     }
// }

// // 3. Search student by roll number
// void searchStudent(struct Student s[], int count) {
//     if (count == 0) {
//         printf("No records available to search.\n");
//         return;
//     }

//     int roll, found = 0;
//     printf("Enter Roll Number to search: ");
//     scanf("%d", &roll);

//     for (int i = 0; i < count; i++) {
//         if (s[i].roll == roll) {
//             printf("\nStudent Found:\n");
//             printf("Roll Number: %d\n", s[i].roll);
//             printf("Name:        %s\n", s[i].name);
//             printf("Marks:       %.2f\n", s[i].marks);
//             found = 1;
//             break;
//         }
//     }
//     if (!found) {
//         printf("Student with Roll Number %d not found.\n", roll);
//     }
// }

// // 4. Update student details
// void updateStudent(struct Student s[], int count) {
//     if (count == 0) {
//         printf("No records available to update.\n");
//         return;
//     }

//     int roll, found = 0;
//     printf("Enter Roll Number to update: ");
//     scanf("%d", &roll);

//     for (int i = 0; i < count; i++) {
//         if (s[i].roll == roll) {
//             printf("Current Name: %s\n", s[i].name);
//             printf("Enter New Name: ");
//             getchar(); 
//             fgets(s[i].name, sizeof(s[i].name), stdin);
//             s[i].name[strcspn(s[i].name, "\n")] = '\0';

//             printf("Current Marks: %.2f\n", s[i].marks);
//             printf("Enter New Marks: ");
//             scanf("%f", &s[i].marks);

//             printf("Record updated successfully in memory!\n");
//             found = 1;
//             break;
//         }
//     }
//     if (!found) {
//         printf("Student with Roll Number %d not found.\n", roll);
//     }
// }

// // 5. Delete a student record
// void deleteStudent(struct Student s[], int *count) {
//     if (*count == 0) {
//         printf("No records available to delete.\n");
//         return;
//     }

//     int roll, found = 0;
//     printf("Enter Roll Number to delete: ");
//     scanf("%d", &roll);

//     for (int i = 0; i < *count; i++) {
//         if (s[i].roll == roll) {
//             // Shift remaining elements left
//             for (int j = i; j < *count - 1; j++) {
//                 s[j] = s[j + 1];
//             }
//             (*count)--;
//             printf("Student record deleted successfully from memory!\n");
//             found = 1;
//             break;
//         }
//     }
//     if (!found) {
//         printf("Student with Roll Number %d not found.\n", roll);
//     }
// }

// // 6. Save current array data to student.txt
// void saveToFile(struct Student s[], int count) {
//     FILE *fp = fopen(FILE_NAME, "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing!\n");
//         return;
//     }

//     for (int i = 0; i < count; i++) {
//         // Uses a comma-separated or tab-separated format for easy reading
//         fprintf(fp, "%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
//     }

//     fclose(fp);
//     printf("All data successfully saved to %s!\n", FILE_NAME);
// }

// // Automatic Initialization: Load data from student.txt at startup
// int loadFromFile(struct Student s[]) {
//     FILE *fp = fopen(FILE_NAME, "r");
//     if (fp == NULL) {
//         // File doesn't exist yet, which is fine for the first run
//         return 0;
//     }

//     int count = 0;
//     // Read formatted data until the end of file
//     while (fscanf(fp, "%d\t%[^\t]\t%f\n", &s[count].roll, s[count].name, &s[count].marks) == 3) {
//         count++;
//         if (count >= MAX_STUDENTS) break;
//     }

//     fclose(fp);
//     printf("Loaded %d records from %s.\n", count, FILE_NAME);
//     return count;
// }
