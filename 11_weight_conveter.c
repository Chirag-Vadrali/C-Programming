#include <stdio.h>
int main (){
    int choice = 0;
    float kilo = 0.0f;
    float pound = 0.0f;

    printf("Converison calculator for pounds and kilo\n");
    printf("1. kilo to pound\n");
    printf("2. Pound to kilo\n");
    printf("Enter the choice :");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Conversion of kilo to pound\n");
        printf("Enter the weight in kilo:");
        scanf("%f", &kilo);
        pound = kilo * 2.02046;
        printf("Conversion of %.2f kg to pounds is : %.2f",kilo , pound);
    }
    else if (choice == 2){
        printf("Conversion of pound to kilo\n");
        printf("Enter the weight in pound:");
        scanf("%f", &pound);
        kilo = pound / 2.02046;
        printf("Conversion of %.2f pound to kilo is : %.2f",pound , kilo);
    }
    else {
        printf("Invalid choice");
    }
    return 0;
}

