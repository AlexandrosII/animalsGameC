#include <stdio.h>
#include "game.h"
#include "animals.h"

void startGame() {
    char guess[50];
    int attempts = 3;
    const char* animal = getRandomAnimal();

    printf("Guess the animal! You have %d attempts.\n", attempts);

    while (attempts > 0) {
        printf("Enter your guess: ");
        scanf("%s", guess);

        if (strcmp(guess, animal) == 0) {
            printf("Congratulations! You guessed it right: %s\n", animal);
            return;
        } else {
            attempts--;
            printf("Wrong guess! You have %d attempts left.\n", attempts);
        }
    }

    printf("Sorry, you've run out of attempts! The animal was: %s\n", animal);
}
