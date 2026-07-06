#include <stdio.h>
#include <math.h>

int main(){

    float num1;
    float num2;
    char operator;

    printf("Calculator app is on!\n");
    printf("Enter the first number: ");
    scanf(" %f",&num1);
    printf("Choose operation (+ - * /): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf(" %f",&num2);

    switch (operator)
    {
    case '+':
        printf("Your result is %.2f", num1+num2);
        break;

    case '-':
        printf("Your result is %.2f", num1-num2);
        break;

    case '*':
        printf("Your result is %.2f", num1*num2);
        break;
    
    case '/':
        if(num2 == 0){
            printf("Invalid input! Division by zero\n");
            break;
        }
        printf("Your result is %.2f", num1/num2);
        break;
    default:
        printf("Invalid input! Make sure to use only defined operators (+ - * /)");
        break;
    }

    return 0;
}