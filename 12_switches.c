#include <stdio.h>

int main(){


    int isday = 0;
    printf("Enter the number (1-7):");
    scanf ("%d", &isday);
    switch(isday){
        case 1: 
            printf("it is monday");
        break;
        case 2:
            printf("it is tuesday");
        break;
        case 3:
            printf("it is wednesday");
        break;
        default:
            printf("please enter a valid number");
        break;
    }
    return 0;
}