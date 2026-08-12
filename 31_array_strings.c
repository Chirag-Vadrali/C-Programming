#include <stdio.h>
#include<string.h>

int main(){
    char fruits[][10] = {"Apple", 
                        "Banana" , 
                        "Orange"};
    
    
/*     for (int i = 0 ; i<3;i++){
        for (int j = 0; j<10;j++){
            printf("%c ", fruits[i][j]);
        }
        printf("\n");
    } */

/*     

fruits[0][0] = 'R';

for (int i = 0; i<size;i++){
    printf("%s\n", fruits[i]);
    } */
   
   //EXE
   
   int size = sizeof(fruits)/sizeof(fruits[0]);
   printf("%d is the szie of fruits \n",size);
   printf("%d\n", sizeof(fruits));
   printf("%d", sizeof(fruits[0]));

   
    char names [4][25] = {0};
    int rows = sizeof(names)/sizeof(names[0]);

    for (int i = 0; i<rows; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]),stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    for (int i = 0;i<rows;i++){
        printf("%s\n",names[i]);
    }
}