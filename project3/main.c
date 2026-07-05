#include <stdio.h>

int main(){

    int choice;
    float weight;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilos to Pounds\n");
    printf("2. Pounds to Kilos\n");
    printf("");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter the weight in kilos: ");
        scanf("%f", &weight);
        weight = weight * 2.20462;
        printf("Your weight in pounds: %.3f", weight);
    }
    else if(choice == 2){
        printf("Enter the weight in pounds: ");
        scanf("%f", &weight);
        weight = weight / 2.20462;
        printf("Your weight in kilos: %.3f", weight);
    }
    else{
        printf("Invalid input!");
    }

    return 0;
}