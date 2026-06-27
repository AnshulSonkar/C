// // Library Management System
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Exact structure requested
// struct Book {
//     int id;
//     char name[100];
//     int pages; 
// };

// // Function Prototypes
// void loadBooks(struct Book **books, int *count, int *capacity);
// void saveBooks(struct Book *books, int count);
// void addBook(struct Book **books, int *count, int *capacity);
// void searchBook(struct Book *books, int count);
// void issueBook(struct Book *books, int count);
// void returnBook(struct Book *books, int count);
// void displayBooks(struct Book *books, int count);

// int main() {
//     struct Book *library = NULL;
//     int count = 0;
//     int capacity = 4; // Initial capacity for DMA

//     // Allocate initial memory block
//     library = (struct Book *)malloc(capacity * sizeof(struct Book));
//     if (library == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     // Load existing records from file on startup
//     loadBooks(&library, &count, &capacity);

//     int choice;
//     while (1) {
//         printf("\n=================================");
//         printf("\n    LIBRARY MANAGEMENT SYSTEM    ");
//         printf("\n=================================");
//         printf("\n1. Add Book");
//         printf("\n2. Search Book");
//         printf("\n3. Issue Book");
//         printf("\n4. Return Book");
//         printf("\n5. Display All Books");
//         printf("\n6. Save & Exit");
//         printf("\n=================================");
//         printf("\nEnter your choice: ");
        
//         if (scanf("%d", &choice) != 1) {
//             printf("Invalid input. Exiting...\n");
//             break;
//         }

//         switch (choice) {
//             case 1:
//                 addBook(&library, &count, &capacity);
//                 break;
//             case 2:
//                 searchBook(library, count);
//                 break;
//             case 3:
//                 issueBook(library, count);
//                 break;
//             case 4:
//                 returnBook(library, count);
//                 break;
//             case 5:
//                 displayBooks(library, count);
//                 break;
//             case 6:
//                 saveBooks(library, count);
//                 printf("Data saved successfully. Goodbye!\n");
//                 free(library);
//                 return 0;
//             default:
//                 printf("Invalid option! Please try again.\n");
//         }
//     }

//     free(library);
//     return 0;
// }

// // 1. Dynamic File Loading on Startup
// void loadBooks(struct Book **books, int *count, int *capacity) {
//     FILE *fp = fopen("books.txt", "r");
//     if (fp == NULL) {
//         // File does not exist yet; it will be created on save
//         return;
//     }

//     struct Book temp;
//     // Read formatted data from file matching the txt structure
//     while (fscanf(fp, "%d | %[^\n] | %d\n", &temp.id, temp.name, &temp.pages) == 3) {
//         // Resize array dynamically if data exceeds current capacity
//         if (*count >= *capacity) {
//             *capacity *= 2;
//             struct Book *tempMemory = (struct Book *)realloc(*books, (*capacity) * sizeof(struct Book));
//             if (tempMemory == NULL) {
//                 printf("Memory reallocation failed during file load!\n");
//                 fclose(fp);
//                 return;
//             }
//             *books = tempMemory;
//         }
//         (*books)[*count] = temp;
//         (*count)++;
//     }
//     fclose(fp);
// }

// // 2. Permanent File Saving Module
// void saveBooks(struct Book *books, int count) {
//     FILE *fp = fopen("books.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing!\n");
//         return;
//     }

//     for (int i = 0; i < count; i++) {
//         fprintf(fp, "%d | %s | %d\n", books[i].id, books[i].name, books[i].pages);
//     }
//     fclose(fp);
// }

// // 3. Feature: Add Book with Dynamic Array Resizing
// void addBook(struct Book **books, int *count, int *capacity) {
//     if (*count >= *capacity) {
//         *capacity *= 2;
//         struct Book *tempMemory = (struct Book *)realloc(*books, (*capacity) * sizeof(struct Book));
//         if (tempMemory == NULL) {
//             printf("Memory full! Cannot add more books.\n");
//             return;
//         }
//         *books = tempMemory;
//     }

//     struct Book newBook;
//     printf("\nEnter Book ID (Integer): ");
//     scanf("%d", &newBook.id);
    
//     // Check for ID duplication
//     for(int i = 0; i < *count; i++) {
//         if((*books)[i].id == newBook.id) {
//             printf("Error: A book with ID %d already exists!\n", newBook.id);
//             return;
//         }
//     }

//     printf("Enter Book Name: ");
//     scanf(" %[^\n]", newBook.name); // Consumes spaces inside string safely
//     printf("Enter Number of Pages: ");
//     scanf("%d", &newBook.pages);

//     if (newBook.pages <= 0) {
//         printf("Pages must be a positive non-zero integer!\n");
//         return;
//     }

//     (*books)[*count] = newBook;
//     (*count)++;
//     printf("Book added successfully!\n");
// }

// // 4. Feature: Search Book
// void searchBook(struct Book *books, int count) {
//     if (count == 0) {
//         printf("\nThe library is completely empty.\n");
//         return;
//     }

//     int searchId;
//     printf("\nEnter Book ID to search: ");
//     scanf("%d", &searchId);

//     for (int i = 0; i < count; i++) {
//         if (books[i].id == searchId) {
//             printf("\nBook Found!");
//             printf("\nID: %d", books[i].id);
//             printf("\nName: %s", books[i].name);
//             // Decode issue/availability state dynamically from the pages attribute
//             if (books[i].pages < 0) {
//                 printf("\nPages: %d", -books[i].pages);
//                 printf("\nStatus: Issued\n");
//             } else {
//                 printf("\nPages: %d", books[i].pages);
//                 printf("\nStatus: Available\n");
//             }
//             return;
//         }
//     }
//     printf("Book with ID %d not found.\n", searchId);
// }

// // 5. Feature: Issue Book
// void issueBook(struct Book *books, int count) {
//     int issueId;
//     printf("\nEnter Book ID to issue: ");
//     scanf("%d", &issueId);

//     for (int i = 0; i < count; i++) {
//         if (books[i].id == issueId) {
//             if (books[i].pages < 0) {
//                 printf("Book is already issued to someone else!\n");
//                 return;
//             }
//             // Sign flip logic ensures state tracking inside standard struct parameters
//             books[i].pages = -books[i].pages; 
//             printf("Book '%s' has been issued successfully!\n", books[i].name);
//             return;
//         }
//     }
//     printf("Book with ID %d not found.\n", issueId);
// }

// // 6. Feature: Return Book
// void returnBook(struct Book *books, int count) {
//     int returnId;
//     printf("\nEnter Book ID to return: ");
//     scanf("%d", &returnId);

//     for (int i = 0; i < count; i++) {
//         if (books[i].id == returnId) {
//             if (books[i].pages > 0) {
//                 printf("This book was not issued. It is already in the library!\n");
//                 return;
//             }
//             books[i].pages = -books[i].pages; // Revert to positive numbers
//             printf("Book '%s' returned successfully!\n", books[i].name);
//             return;
//         }
//     }
//     printf("Book with ID %d does not belong to this library.\n", returnId);
// }

// // 7. Feature: Display Books
// void displayBooks(struct Book *books, int count) {
//     if (count == 0) {
//         printf("\nNo books to display.\n");
//         return;
//     }

//     printf("\n%-10s | %-30s | %-10s | %-12s", "Book ID", "Book Title", "Pages", "Availability");
//     printf("\n-------------------------------------------------------------------------");
//     for (int i = 0; i < count; i++) {
//         if (books[i].pages < 0) {
//             printf("\n%-10d | %-30s | %-10d | %-12s", books[i].id, books[i].name, -books[i].pages, "Issued");
//         } else {
//             printf("\n%-10d | %-30s | %-10d | %-12s", books[i].id, books[i].name, books[i].pages, "Available");
//         }
//     }
//     printf("\n");
// }
