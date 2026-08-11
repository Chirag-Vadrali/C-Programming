#include <stdio.h> 

int main(){

    int rows = 0;
    int col = 0;
    char symbol = '\0';

    printf("Ener number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of col: ");
    scanf("%d",&col);

    printf("Enter the symbol: ");
    scanf(" %c",&symbol);

    for (int i = 0; i < rows; i++){
        /* printf("%c", &symbol); */
        for(int j = 0; j< col; j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
    return 0;
}