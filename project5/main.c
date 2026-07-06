#include <stdio.h>
#include <stdlib.h>

int main(){

    int initial = rand();
    int guess = 0;

    printf("Enter your guess!: ");
    scanf("%d",&guess);
    
    while(initial != guess){
        if(guess > initial){
            printf("Too much!\n");
            printf("Try again!: ");
            scanf("%d",&guess);
        }
        if(guess < initial){
            printf("Not enough!\n");
            printf("Try again!: ");
            scanf("%d",&guess);
        }
    }

    printf("Congrats! You won!\n");
    printf("The initial number was %d", initial);

    return 0;
}