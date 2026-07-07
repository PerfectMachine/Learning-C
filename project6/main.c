#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computerChoice();
int userChoice();
void checkWinner(int user, int computer);

int main(){

    srand(time(0));
    printf("Rock paper scissors game!\n");

    int user = userChoice();
    int computer = computerChoice();

    switch(user)
    {
    case 1:
        printf("You chose ROCK!\n");
        break;
    case 2:
        printf("You chose PAPER!\n");
        break;
    case 3:
        printf("You chose SCISSORS!\n");
        break;
    }

    switch(computer)
    {
    case 1:
        printf("Computer chose ROCK!\n");
        break;
    case 2:
        printf("Computer chose PAPER!\n");
        break;
    case 3:
        printf("Computer chose SCISSORS!\n");
        break;
    }

    checkWinner(user,computer);

    return 0;
}

int computerChoice(){
    return (rand() % 3) + 1;

}
int userChoice(){
    
    int localChoice = 0;
    do{
        printf("Choose an option\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Your choice: ");
        scanf(" %d", &localChoice);
    }while(localChoice < 1 || localChoice > 3);

    return localChoice;

}
void checkWinner(int user, int computer){

    if(user == computer){
        printf("It's a TIE!");
    }
    else if(user == 1 && computer == 2){
        printf("You LOST!");
    }
    else if(user == 1 && computer == 3){
        printf("You WON!");
    }
    else if(user == 2 && computer == 1){
        printf("You WON!");
    }
    else if(user == 2 && computer == 3){
        printf("You LOST!");
    }
    else if(user == 3 && computer == 1){
        printf("You LOST!");
    }
    else if(user == 3 && computer == 2){
        printf("You WON!");
    }
}
