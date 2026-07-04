/*
This project is named "Shopping Cart". 
The main goal is to get used to user input functions, prints and
mathematical operation, and also test the knowledge of git
*/

#include <stdio.h>
#include <string.h>

int main() {

    int quantity;
    float price;
    char items[30];

    printf("What item would you like to buy?: ");
    fgets(items, sizeof(items), stdin);
    items[strlen(items) - 1] = '\0';

    printf("What is the price of each?: ");
    scanf(" %f", &price);

    printf("How many would you like?: ");
    scanf(" %d", &quantity);

    float totalPrice;
    totalPrice = quantity * price;

    printf("You have bought %d %s/s\n", quantity, items);
    printf("The total is: %.2f $", totalPrice);
    
    return 0;
}