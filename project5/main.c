#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int initial = (rand() % (100 - 1 + 1)) + 1;
    int guess = 0;
    int tries = 0;

    printf("Welcome to the guessing game!\n");
    printf("Guess random number between 1 and 100!\n");

    printf("Enter your guess!: ");
    scanf(" %d",&guess);
    
    while(initial != guess){
        if(guess > initial){
            tries++;
            printf("Too much!\n");
            printf("Try again!: ");
            scanf(" %d",&guess);
            
        }
        if(guess < initial){
            tries++;
            printf("Not enough!\n");
            printf("Try again!: ");
            scanf(" %d",&guess);
        }
    }

    printf("Congrats! You won!\n");
    printf("The initial number was %d\n", initial);
    printf("It took %d tried for you to guess the number!", tries);

    return 0;
}