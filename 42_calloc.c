#include <stdio.h>
#include <stdlib.h>

int main (){
    //calloc = Contiguous Allocation, Allocates memory dynamically and sets all the memory to 0 bytes
    // malloc is faster but the calloc() is less bugs calloc (#,size)
    int number = 0;
    printf("Enter the umber of players: ");
    scanf("%d", &number);

    int *scores = calloc(number , sizeof(int));
    if (scores == NULL){
        printf("MEmory allocation failed");
        return 1;
    }
    for(int i = 0; i<number ; i++){
        printf("Enter scores #%d: ", i+1);
        scanf("%d" , &scores[i]);
    }
    for(int i = 0; i<number ; i++){
        printf("%d ", scores[i]);
    }
    free(scores);  
    scores = NULL;

}