#include <stdio.h>
#include <stdlib.h>

int main(){
    //malloc = A functionin C that dynamically allocates a specfied number of bytes in memory

    int number = 0;
    printf("Enter the numebr of grades: ");
    scanf("%d",&number);

    char *grades = malloc(number * sizeof(char)); // the memory we resevr eit is from heap, 
                                                  // but most sitation we store it form the stack

    if (grades == NULL){
        printf("Memry allocation failed \n");
        return 1;
    }

    for (int i = 0; i<number; i++){
        printf("Enter grade %d ", i +1);
        scanf(" %c",&grades[i]);
    }

    for (int i = 0;i<number ; i++){
        printf("%c ",grades[i]); 
    }
    free(grades); // returning the rented space back to the os
    grades = NULL ; //avoids dangling pointers
}