
// Number Guessing Game in C
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int secret_number, user_guess;
//     int attempts = 0;
//     int max_score = 100;
//     int score;

//     // 1. Seed the random number generator using the current time
//     srand(time(NULL));

//     // 2. Generate a random number between 1 and 100
//     secret_number = (rand() % 100) + 1;

//     printf("=========================================\n");
//     printf("   Welcome to the Number Guessing Game!  \n");
//     printf("=========================================\n");
//     printf("I have generated a secret number between 1 and 100.\n");
//     printf("Can you guess what it is? Try to use fewer attempts for a higher score!\n\n");

//     // 3. Game Loop using a do-while loop
//     do {
//         printf("Enter your guess: ");
        
//         // Validate if user input is an integer
//         if (scanf("%d", &user_guess) != 1) {
//             printf("Invalid input! Please enter a valid number.\n");
//             // Clear input buffer to prevent an infinite loop on bad input
//             while (getchar() != '\n');
//             continue;
//         }

//         attempts++; // Increment attempts tracker

//         // 4. Conditions to provide hints
//         if (user_guess > secret_number) {
//             printf("💡 Hint: Too High! Try a smaller number.\n\n");
//         } else if (user_guess < secret_number) {
//             printf("💡 Hint: Too Low! Try a larger number.\n\n");
//         } else {
//             // 5. Calculate final score (Deductions apply for extra attempts)
//             // Minimum score floor capped at 10 points
//             score = max_score - ((attempts - 1) * 10);
//             if (score < 10) {
//                 score = 10; 
//             }

//             printf("\n🎉 CONGRATULATIONS! You guessed the right number!\n");
//             printf("📊 Total Attempts: %d\n", attempts);
//             printf("🏆 Your Final Score: %d / 100\n", score);
//         }

//     } while (user_guess != secret_number);

//     printf("=========================================\n");
//     printf("        Thank you for playing!           \n");
//     printf("=========================================\n");

//     return 0;
// }
