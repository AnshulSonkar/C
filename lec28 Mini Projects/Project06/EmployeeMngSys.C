// Employee Management System
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// Required structure definition
// struct Employee
// {
//     int id;
//     char name[50];
//     float salary;
// };

// // Function prototypes using POINTERS for efficiency
// void addEmployee(const char *filename);
// void searchEmployee(const char *filename);
// void updateSalary(const char *filename);
// void deleteEmployee(const char *filename);
// void displayAllEmployees(const char *filename);

// int main() 
// {
//     // A constant pointer pointing to our file string literal
//     const char *dbFile = "employees.txt"; 
//     int choice;

//     while (1) 
//     {
//         printf("\n=== EMPLOYEE MANAGEMENT SYSTEM ===\n");
//         printf("1. Add Employee\n");
//         printf("2. Search Employee\n");
//         printf("3. Update Salary\n");
//         printf("4. Delete Employee\n");
//         printf("5. Display All Employees\n");
//         printf("6. Exit\n");
//         printf("Enter your choice (1-6): ");
        
//         if (scanf("%d", &choice) != 1) 
//         {
//             printf("Invalid system input! Please type a number.\n");
//             while (getchar() != '\n'); // Clear out stuck data buffer
//             continue;
//         }

//         switch (choice) 
//         {
//             case 1: addEmployee(dbFile); break;
//             case 2: searchEmployee(dbFile); break;
//             case 3: updateSalary(dbFile); break;
//             case 4: deleteEmployee(dbFile); break;
//             case 5: displayAllEmployees(dbFile); break;
//             case 6: printf("Exiting system. Have a great day!\n"); exit(0);
//             default: printf("Invalid choice! Please pick a number from 1 to 6.\n");
//         }
//     }
//     return 0;
// }

// // 1. Add Employee Feature
// void addEmployee(const char *filename) 
// {
//     // Pass the filename pointer to safely open the file in Append mode
//     FILE *fp = fopen(filename, "a");
//     if (fp == NULL) 
//     {
//         printf("Error: Could not open database file!\n");
//         return;
//     }

//     struct Employee emp;
//     struct Employee *ptr = &emp; // Utilizing structure pointer

//     printf("\nEnter Employee ID: ");
//     scanf("%d", &ptr->id);

//     // Pointer-based duplicate verification loop
//     FILE *chk = fopen(filename, "r");
//     if (chk != NULL) 
//     {
//         struct Employee temp;
//         struct Employee *tPtr = &temp;
//         while (fscanf(chk, "%d %49s %f", &tPtr->id, tPtr->name, &tPtr->salary) != EOF) 
//         {
//             if (tPtr->id == ptr->id) 
//             {
//                 printf("Error: Employee with ID %d already exists!\n", ptr->id);
//                 fclose(chk);
//                 fclose(fp);
//                 return;
//             }
//         }
//         fclose(chk);
//     }

//     printf("Enter Employee Name (no spaces): ");
//     scanf("%49s", ptr->name);
//     printf("Enter Monthly Salary: ");
//     scanf("%f", &ptr->salary);

//     // Save structured layout data cleanly in text file
//     fprintf(fp, "%d %s %.2f\n", ptr->id, ptr->name, ptr->salary);
//     fclose(fp);
    
//     printf("Employee added successfully!\n");
// }

// // 2. Search Employee Feature
// void searchEmployee(const char *filename) 
// {
//     FILE *fp = fopen(filename, "r");
//     if (fp == NULL) 
//     {
//         printf("No records found! Database file is empty.\n");
//         return;
//     }

//     int targetId, found = 0;
//     struct Employee emp;
//     struct Employee *ptr = &emp; // Using structural address pointers

//     printf("\nEnter Employee ID to Search: ");
//     scanf("%d", &targetId);

//     // Loop through the data file matching entries
//     while (fscanf(fp, "%d %49s %f", &ptr->id, ptr->name, &ptr->salary) != EOF) 
//     {
//         if (ptr->id == targetId) 
//         {
//             printf("\n--- Employee Found ---\n");
//             printf("ID    : %d\n", ptr->id);
//             printf("Name  : %s\n", ptr->name);
//             printf("Salary: INR %.2f\n", ptr->salary);
//             found = 1;
//             break;
//         }
//     }

//     fclose(fp);
//     if (!found) 
//     {
//         printf("Employee with ID %d was not found in the records.\n", targetId);
//     }
// }

// // 3. Update Salary Feature
// void updateSalary(const char *filename) 
// {
//     FILE *fp = fopen(filename, "r");
//     FILE *tempFp = fopen("temp_emp.txt", "w");
//     if (fp == NULL || tempFp == NULL) 
//     {
//         printf("Database error or empty file system!\n");
//         if (fp) fclose(fp);
//         if (tempFp) fclose(tempFp);
//         return;
//     }

//     int targetId, found = 0;
//     float newSalary;
//     struct Employee emp;
//     struct Employee *ptr = &emp; // Utilizing pointer mapping to modify structure properties

//     printf("\nEnter Employee ID to Update Salary: ");
//     scanf("%d", &targetId);

//     while (fscanf(fp, "%d %49s %f", &ptr->id, ptr->name, &ptr->salary) != EOF) 
//     {
//         if (ptr->id == targetId) 
//         {
//             found = 1;
//             printf("Current Salary for %s is %.2f\n", ptr->name, ptr->salary);
//             printf("Enter New Salary: ");
//             scanf("%f", &newSalary);
//             ptr->salary = newSalary; // Mutate value via struct memory fields
//             printf("Salary updated successfully!\n");
//         }
//         // Repopulate active streaming lines to the temp file
//         fprintf(tempFp, "%d %s %.2f\n", ptr->id, ptr->name, ptr->salary);
//     }

//     fclose(fp);
//     fclose(tempFp);

//     // Swap physical files safely 
//     remove(filename);
//     rename("temp_emp.txt", filename);

//     if (!found) 
//     {
//         printf("Employee with ID %d not found.\n", targetId);
//     }
// }

// // 4. Delete Employee Feature
// void deleteEmployee(const char *filename) 
// {
//     FILE *fp = fopen(filename, "r");
//     FILE *tempFp = fopen("temp_emp.txt", "w");
//     if (fp == NULL || tempFp == NULL) 
//     {
//         printf("Database error or empty file system!\n");
//         if (fp) fclose(fp);
//         if (tempFp) fclose(tempFp);
//         return;
//     }

//     int targetId, found = 0;
//     struct Employee emp;
//     struct Employee *ptr = &emp;

//     printf("\nEnter Employee ID to Delete: ");
//     scanf("%d", &targetId);

//     while (fscanf(fp, "%d %49s %f", &ptr->id, ptr->name, &ptr->salary) != EOF) 
//     {
//         if (ptr->id == targetId) 
//         {
//             found = 1; // Mark found and bypass writing to temp file to drop it
//             printf("Employee record for %s [ID: %d] has been removed.\n", ptr->name, ptr->id);
//         } 
//         else 
//         {
//             fprintf(tempFp, "%d %s %.2f\n", ptr->id, ptr->name, ptr->salary);
//         }
//     }

//     fclose(fp);
//     fclose(tempFp);

//     remove(filename);
//     rename("temp_emp.txt", filename);

//     if (!found) 
//     {
//         printf("Employee with ID %d not found.\n", targetId);
//     }
// }

// // 5. Display All Feature
// void displayAllEmployees(const char *filename) 
// {
//     FILE *fp = fopen(filename, "r");
//     if (fp == NULL) 
//     {
//         printf("No records found! Database file is completely empty.\n");
//         return;
//     }

//     struct Employee emp;
//     struct Employee *ptr = &emp;
//     int count = 0;

//     printf("\n==================================================\n");
//     printf("%-10s %-25s %-15s\n", "EMP ID", "EMPLOYEE NAME", "SALARY");
//     printf("==================================================\n");

//     // Cycle through file line streams using pointers and clean table-formatted printing
//     while (fscanf(fp, "%d %49s %f", &ptr->id, ptr->name, &ptr->salary) != EOF) 
//     {
//         printf("%-10d %-25s INR %-12.2f\n", ptr->id, ptr->name, ptr->salary);
//         count++;
//     }

//     printf("==================================================\n");
//     printf("Total Active Employee Count: %d\n", count);
//     fclose(fp);
// }
