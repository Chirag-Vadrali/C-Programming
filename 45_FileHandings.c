#include <stdio.h>

int main(){
    FILE *fp;
    char line[] = "HI EVERYONE WELCOME TO MY CHANNEL!!";
    fp = fopen("typo.txt", "w");

    if (fp == NULL){
        printf("File not found!\n");
        return 1;
    }
    fprintf(fp,"%s",line);
    fclose(fp);
    printf("The file has been written successfully!!!\n");
}