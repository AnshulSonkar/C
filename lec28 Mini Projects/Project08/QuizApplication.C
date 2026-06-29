// Quiz Application
// Quiz Appliction Project
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Required structure definition for a Question
struct Question
{
    char question[100];
    char optionA[50];
    char optionB[50];
    char optionC[50];
    char optionD[50];
    char answer;
};

// Function prototypes
void loadQuestions(struct Question quiz[], int *totalQuestions);
void runQuiz(const struct Question quiz[], int totalQuestions, int *score);
void displayResult(int score, int totalQuestions);

int main() 
{
    // Array of structures to store our questions
    struct Question quizBank[10]; 
    int totalQuestions = 0;
    int finalScore = 0;
    int choice;

    // Load initial set of questions into our structure array
    loadQuestions(quizBank, &totalQuestions);

    while (1) 
    {
        printf("\n=== COMPILER QUIZ APPLICATION ===\n");
        printf("1. Start Quiz\n");
        printf("2. Exit\n");
        printf("Enter your choice (1-2): ");
        
        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input! Please enter a valid menu number.\n");
            while (getchar() != '\n'); // Clear incorrect input from buffer
            continue;
        }

        switch (choice) 
        {
            case 1: 
                finalScore = 0; // Reset score for a new attempt
                runQuiz(quizBank, totalQuestions, &finalScore); 
                displayResult(finalScore, totalQuestions);
                break;
            case 2: 
                printf("Thank you for playing! Goodbye.\n"); 
                exit(0);
            default: 
                printf("Invalid option! Please pick 1 or 2.\n");
        }
    }
    return 0;
}

// 1. Function to initialize the array of Question structures
void loadQuestions(struct Question quiz[], int *totalQuestions)
{
    // Question 1
    snprintf(quiz[0].question, sizeof(quiz[0].question), "Which programming language is known as the mother of all languages?");
    snprintf(quiz[0].optionA, sizeof(quiz[0].optionA), "Python");
    snprintf(quiz[0].optionB, sizeof(quiz[0].optionB), "C Language");
    snprintf(quiz[0].optionC, sizeof(quiz[0].optionC), "Java");
    snprintf(quiz[0].optionD, sizeof(quiz[0].optionD), "C++");
    quiz[0].answer = 'B';

    // Question 2
    snprintf(quiz[1].question, sizeof(quiz[1].question), "What is the size of an 'int' data type in most 32-bit C compilers?");
    snprintf(quiz[1].optionA, sizeof(quiz[1].optionA), "1 Byte");
    snprintf(quiz[1].optionB, sizeof(quiz[1].optionB), "2 Bytes");
    snprintf(quiz[1].optionC, sizeof(quiz[1].optionC), "4 Bytes");
    snprintf(quiz[1].optionD, sizeof(quiz[1].optionD), "8 Bytes");
    quiz[1].answer = 'C';

    // Question 3
    snprintf(quiz[2].question, sizeof(quiz[2].question), "Which keyword is used to prevent any changes to a variable in C?");
    snprintf(quiz[2].optionA, sizeof(quiz[2].optionA), "static");
    snprintf(quiz[2].optionB, sizeof(quiz[2].optionB), "immutable");
    snprintf(quiz[2].optionC, sizeof(quiz[2].optionC), "volatile");
    snprintf(quiz[2].optionD, sizeof(quiz[2].optionD), "const");
    quiz[2].answer = 'D';

    *totalQuestions = 3; // Setting total questions loaded
}

// 2. Function to execute the quiz and calculate the score
void runQuiz(const struct Question quiz[], int totalQuestions, int *score)
{
    char userAns;
    printf("\n--- The Quiz Has Started! Good Luck! ---\n");

    // Loop through our array of structures
    for (int i = 0; i < totalQuestions; i++)
    {
        printf("\nQ%d: %s\n", i + 1, quiz[i].question);
        printf("A. %s\n", quiz[i].optionA);
        printf("B. %s\n", quiz[i].optionB);
        printf("C. %s\n", quiz[i].optionC);
        printf("D. %s\n", quiz[i].optionD);
        
        // Loop until valid answer choice is typed
        while (1)
        {
            printf("Your Answer (A/B/C/D): ");
            scanf(" %c", &userAns); // Space before %c skips trailing newlines
            userAns = toupper(userAns); // Standardise option case mapping

            if (userAns == 'A' || userAns == 'B' || userAns == 'C' || userAns == 'D')
            {
                break;
            }
            printf("Invalid Option! Please choose A, B, C, or D.\n");
        }

        // Score calculation block
        if (userAns == quiz[i].answer)
        {
            printf("Correct Answer!\n");
            (*score)++;
        }
        else
        {
            printf("Wrong Answer! The correct option was %c.\n", quiz[i].answer);
        }
    }
}

// 3. Function to display the final result metric summary
void displayResult(int score, int totalQuestions)
{
    float percentage = ((float)score / totalQuestions) * 100;

    printf("\n==================================\n");
    printf("           QUIZ RESULT            \n");
    printf("==================================\n");
    printf("Total Questions: %d\n", totalQuestions);
    printf("Correct Answers: %d\n", score);
    printf("Your Score     : %.2f%%\n", percentage);
    
    if (percentage >= 70.0)
    {
        printf("Status         : PASSED 🎉\n");
    }
    else
    {
        printf("Status         : FAILED ❌ (Try Again!)\n");
    }
    printf("==================================\n");
}


