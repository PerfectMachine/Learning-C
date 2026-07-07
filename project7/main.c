#include <stdio.h>
#include <stdbool.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);


int main(){

    float balance = 1000.00;
    bool isAlive = true;
    int choose;

    printf(" \n");
    printf("Welcome to the banking account!\n");
    printf(" \n");

    while(isAlive){
        printf("Please choose option\n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf(" \n");
        printf("Enter option: ");
        scanf(" %d", &choose);
        printf(" \n");

        switch(choose)
        {
        case 1:
            checkBalance(balance);
            continue;
        case 2:
            balance += deposit();
            continue;
        case 3:
            balance = withdraw(balance);
            continue;
        case 4:
            printf("You exited the app!\n");
            printf("Have a good day!\n");

            isAlive = false;
            break;
        
        default:
            printf("Invalid input! Please choose option 1-4!\n");
            printf(" \n");
            continue;
        }


    }

    return 0;
}

void checkBalance(float balance){
    printf(" \n");
    printf("Your current balance is: %.2f$\n",balance);
    printf(" \n");
}

float deposit(){
    printf(" \n");
    printf("Enter the amount of money in $ you want to deposit: ");
    float localDep = 0.00;
    scanf(" %f", &localDep);
    if(localDep > 0){
        printf("You succesfully deposited %.2f$!\n", localDep);
        printf(" \n");
        return localDep;
    }
    else{
        printf(" \n");
        printf("Invalid input! The deposit should be a positive number!\n");
        printf(" \n");
    }
}

float withdraw(float balance){
    float localWith = 0.00;
    printf("Enter the amount of money in $ you want to withdraw: ");
    scanf(" %f", &localWith);
    if(localWith > balance){
        printf("Error! You don't have such amount on your account!\n");
        printf(" \n");
    }
    else if(localWith <= 0.00){
        printf(" \n");
        printf("Invalid input! The withdraw should be a positive number!\n");
        printf(" \n");
    }
    else{
        balance = balance - localWith;
        printf("You succesfully withdrawed %.2f$!\n",localWith);
        printf(" \n");
        return balance;
    }
}