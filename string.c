#include <stdio.h>
#include <string.h>

int main(){

    char noun[50]="";
    char verb[50]="";
    char adjective1[50]="";
    char adjective2[50]="";
    char adjective3[50]="";

    printf("Enter an adjective1: ");
    fgets(adjective1,sizeof(adjective1),stdin); 
    adjective1[strlen(adjective1)-1] = '\0';
    printf("Enter an noun: ");
    fgets(noun,sizeof(noun),stdin); 
    noun[strlen(noun)-1] = '\0';
    printf("Enter an verb: ");
    verb[strlen(verb)-1] = '\0';
    fgets(verb,sizeof(verb),stdin); 
    printf("Enter an adjective2: ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2)-1] = '\0';
    printf("Enter an adjective3: ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3)-1] = '\0';
    
    printf("These are adjectives %s ,%s, %s\n",adjective1, adjective2, adjective3);
    
    printf("This is a Noun %s\n",noun);
    printf("This is a Verb %s",verb);
     

    return 0;

}