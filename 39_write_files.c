#include <stdio.h>

int main (){
    FILE *pFile = fopen("output.txt", "w"); // here if you wirte the path then use "\\" for the convinence
    char text [] = "HI HELLO BYE GOODBYE!!!";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }
    fprintf(pFile,"%s",text);
    printf("File was written succesfully\n"); 
    fclose(pFile);
}

