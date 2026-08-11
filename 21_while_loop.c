// perform the condition or loop until the given condtion is true
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
/* 
int main(){

    char name[50] = "";
    printf("Enter Your name:");
    fgets(name ,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    while (strlen(name) == 0){
        printf("ENter a valid name, please enter a valid name:");
        fgets(name ,sizeof(name),stdin);
        name[strlen(name)-1] = '\0';
    }
    printf("%s",name);
    return 0;
} */


int main(){
    bool isrunning = true;
    char response = '\0';

    while(isrunning){
        printf("You are playing a game\n");
        printf("Would you like to continue the game (y = yes) , (n = No): ");
        scanf(" %c", &response);

        if (response == 'n'){
            isrunning = false;
        }
    }

    printf("You exit the game");
    
}

