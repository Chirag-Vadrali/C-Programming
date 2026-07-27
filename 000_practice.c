#include <stdio.h>


int main(){
    int x;

    while(1){

        printf("Enter a number:");
        scanf("%d",&x);

        if (x%2 == 0){
            printf("You have entered a even number\n");
        }
        else{
            printf("You have entered an odd number\n");
            break;
        }
    }

    return 0;
}