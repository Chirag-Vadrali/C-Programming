#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    srand(time(NULL));
    int guess = 0;
    int tries = 0;
    int max = 100;
    int min = 1;
    int answer = (rand() % (max-min+1)) + min;

   printf("Number guessing game\n");

   do{
    printf("Guess the number between %d - %d: " , min , max);
    scanf("%d", &guess);
    tries ++ ; 

    if (guess < answer){
        printf("TOO LOW!!!\n");
    }
    else if (guess > answer){
        printf("TOO HIGH!!!\n");
    }
    else{
        printf("CORRECT");
    }
   }
   while(guess != answer);
   return 0;
   
}