
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempt;
    char choice;

    do
    {
        srand(time(0));            
        number = rand() % 100 + 1; 
        attempt = 0;

        printf("\nGuess a Number (between 1 to 100): ");

        do
        {
            scanf("%d", &guess);
            attempt++;

            if (guess > number)
            {
                printf("Guess Lower Number Please: ");
            }
            else if (guess < number)
            {
                printf("Guess Higher Number Please: ");
            }
            else
            {
                printf("Congratulation! You Have Guessed the Number in %d Attempts\n", attempt);
            }
        } while (guess != number);

       
        printf("Do You Want to Play Again? (Y/N): ");
        scanf(" %c", &choice); 
    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}