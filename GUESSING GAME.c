#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    int number,guess,attempts=0;
    srand(time(0));
    
    number=rand()%100;
    
    printf("Welcome to the Number Guessing Game!\n");
   printf("I have chosen a number between 1 and 100.\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
            printf("Too high! Try again.");
        else if (guess < number)
            printf("Too low! Try again.");
        else
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);

    } while (guess != number);

}