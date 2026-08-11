/* 1. check balance 
2. deposit money 
3. withdraw money 
4. exit */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void chekbalance(float balance);
float deposit();
float withdraw(float balance);

int main (){
    int choice = 0;
    float balance = 0.0f;

    printf("***Welcome to the Bank***");
    do{
        printf("\n select an option\n");
        printf("1. check balance \n");
        printf("2. deposit money \n");
        printf("3. withdraw money\n");
        printf("4. exit\n");

        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                chekbalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3: 
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\n thank you for accessing the bank\n");
                break;
            default:
                printf("\nInvalid choice!, please select form 1-4\n");
             
        }
    }while(choice !=4);

    return 0;
}

void chekbalance(float balance){
    printf("\nYour current balance is: $%.2f\n",balance);
}
float deposit(){
    float amount = 0.0f;
    printf("\nEnter amount to deposit: $");
    scanf("%f", &amount);

    if (amount < 0){
        printf("Invalid amount");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n", amount);
    }
    return amount;
}
float withdraw(float balance){
    float amount = 0.0f;
    printf("Enter amount you want to withdraw : $ ");
    scanf("%f", &amount);
    if (amount < 0){
        printf("Invalid amount");
        return 0.0f;
    }
    else if (amount > balance){
        printf("Insufficent funds! Your balance is $%.2f\n", balance);
    }
    else{
        printf("Successfully withdrew $%.2f", amount);
        return amount;
    }
    return 0.0f;

} 