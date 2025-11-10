#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    char choice;

    srand(time(0)); 

        int min = 1, max = 100;
        number = rand() % (max - min + 1) + min;
        attempts = 0;

        printf("A random number has been selected between %d and %d\n", min, max);
        printf("\nTry to guess it!\n");

        do{
            printf("\nEnter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > number)
                printf("Too high! Try again.\n");
            else if (guess < number)
                printf("Too low! Try again.\n");
            else
                printf("Correct! You guessed it in %d attempts.\n", attempts);

        }while (guess != number);
        
    return 0;
}