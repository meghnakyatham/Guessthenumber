#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main (){
    printf("WELCOME TO THE GUESS THE NUMBER GAME !! \n");
    printf("I HAVE CHOSEN A NUMBER BETWEEN 1 AND 100 \n");

    srand(time(0));
    int secret_number = rand() % 100 + 1;

    int guess, attempts = 0;

    while (1){
        printf("Enter your guess :");
        if (scanf("%d", &guess) != 1){
            printf("Invalid input. Please enter a valid number. \n");
            while(getchar() != '\n');
            continue;
        }
    attempts ++;
    if (guess < secret_number){
        printf("Too low ! Try again ! \n");
    } else if (guess > secret_number){
        printf("Too high ! Try again ! \n");
    } else {
        printf("Congratulations ! You guessed the number %d in %d attempts. \n", secret_number, attempts);
        break;
    }
    }
    return 0;
    }
