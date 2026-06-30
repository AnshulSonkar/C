// File Encryption
// #include <stdio.h>
// #include <stdlib.h>

// // Function prototypes
// void encryptFile(const char *sourceFile, const char *keyFile);
// void decryptFile(const char *keyFile, const char *outputFile);

// // Encryption XOR key constant defined from your formula (ch ^ 5)
// const int XOR_KEY = 5;

// int main() 
// {
//     const char *originalFile = "data.txt";
//     const char *encryptedFile = "encrypted.txt";
//     const char *decryptedFile = "decrypted.txt";
//     int choice;

//     while (1) 
//     {
//         printf("\n=== FILE ENCRYPTION SYSTEM ===\n");
//         printf("1. Encrypt File (data.txt -> encrypted.txt)\n");
//         printf("2. Decrypt File (encrypted.txt -> decrypted.txt)\n");
//         printf("3. Exit\n");
//         printf("Enter your choice (1-3): ");
        
//         if (scanf("%d", &choice) != 1) 
//         {
//             printf("Invalid input! Please enter a number.\n");
//             while (getchar() != '\n'); // Clear incorrect input buffer
//             continue;
//         }

//         switch (choice) 
//         {
//             case 1: 
//                 encryptFile(originalFile, encryptedFile); 
//                 break;
//             case 2: 
//                 decryptFile(encryptedFile, decryptedFile); 
//                 break;
//             case 3: 
//                 printf("Exiting security system. Goodbye!\n"); 
//                 exit(0);
//             default: 
//                 printf("Invalid option! Please pick a number from 1 to 3.\n");
//         }
//     }
//     return 0;
// }

// // 1. Encrypt File Feature
// void encryptFile(const char *sourceFile, const char *keyFile)
// {
//     // Open the source in read mode and destination in write mode
//     FILE *src = fopen(sourceFile, "r");
//     FILE *dest = fopen(keyFile, "w");

//     if (src == NULL)
//     {
//         printf("\nError: Could not open '%s'! Please make sure the file exists.\n", sourceFile);
//         if (dest) fclose(dest);
//         return;
//     }
//     if (dest == NULL)
//     {
//         printf("\nError: Could not create the encrypted file output destination.\n");
//         fclose(src);
//         return;
//     }

//     char ch;
//     // Read character-by-character until the end of the file (EOF)
//     while ((ch = fgetc(src)) != EOF)
//     {
//         // Apply Bitwise XOR encryption operator requirement
//         char encrypted_char = ch ^ XOR_KEY;
//         fputc(encrypted_char, dest);
//     }

//     fclose(src);
//     fclose(dest);
//     printf("\nSuccess: '%s' has been safely encrypted into '%s'!\n", sourceFile, keyFile);
// }

// // 2. Decrypt File Feature
// void decryptFile(const char *keyFile, const char *outputFile)
// {
//     FILE *src = fopen(keyFile, "r");
//     FILE *dest = fopen(outputFile, "w");

//     if (src == NULL)
//     {
//         printf("\nError: Could not open encrypted file '%s'!\n", keyFile);
//         if (dest) fclose(dest);
//         return;
//     }
//     if (dest == NULL)
//     {
//         printf("\nError: Could not create decrypted file output destination.\n");
//         fclose(src);
//         return;
//     }

//     char ch;
//     while ((ch = fgetc(src)) != EOF)
//     {
//         // XOR is reversible! Running it again with 5 restores the original character.
//         char decrypted_char = ch ^ XOR_KEY;
//         fputc(decrypted_char, dest);
//     }

//     fclose(src);
//     fclose(dest);
//     printf("\nSuccess: '%s' has been decrypted back into '%s'!\n", keyFile, outputFile);
// }
