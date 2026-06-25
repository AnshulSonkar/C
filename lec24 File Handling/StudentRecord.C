// #include <stdio.h>

// int main() {

//     FILE *fp;

//     int roll;
//     char name[20];

//     fp = fopen("student.txt", "w");

//     printf("Enter Roll: ");
//     scanf("%d", &roll);

//     printf("Enter Name: ");
//     scanf("%s", name);

//     fprintf(fp, "%d %s", roll, name);

//     fclose(fp);

//     return 0;
// }  


// Read Student Record 
// #include <stdio.h>

// int main() {

//     FILE *fp;

//     int roll;
//     char name[20];

//     fp = fopen("student.txt", "r");

//     fscanf(fp, "%d %s", &roll, name);

//     printf("Roll = %d\n", roll);
//     printf("Name = %s\n", name);

//     fclose(fp);

//     return 0;
// } 


// Copy one file to another 
// #include <stdio.h>

// int main() {

//     FILE *source;
//     FILE *target;

//     char ch;

//     source = fopen("source.txt", "r");
//     target = fopen("target.txt", "w");

//     while((ch = fgetc(source)) != EOF) {

//         fputc(ch, target);
//     }

//     fclose(source);
//     fclose(target);

//     return 0;
// } 


// Count Characters in file
// #include <stdio.h>

// int main() {

//     FILE *fp;

//     char ch;

//     int count = 0;

//     fp = fopen("data.txt", "r");

//     while((ch = fgetc(fp)) != EOF) {

//         count++;
//     }

//     printf("Characters = %d", count);

//     fclose(fp);

//     return 0;
// } 