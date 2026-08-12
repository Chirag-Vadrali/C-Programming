#include <stdio.h>
int main(){

    // array - a fixed size collection of elementsof the same data type (similar variable)
    int numbers[] = {10,20,30,40};
    char grades[] = {'A','B','C','D','\0'};
    char name[] = "Ryujino Kurosaki";

/*     printf("%c\n", name[0]);
    printf("%d\n", numbers[0]);
    printf("%c", grades[0]);
 */

/*     numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;
    numbers[3] = 400;

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
 */

    // printf("%d\n",sizeof(numbers));
    // printf("%d",sizeof(numbers[1]));

    int size = sizeof(numbers)/sizeof(numbers[0]);

    for (int i=0; i < size; i++){
        printf("%d\n",numbers[i]);
    }
}