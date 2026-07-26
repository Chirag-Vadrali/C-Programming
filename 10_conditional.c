/* #include <stdio.h>
int main (){
    int age = 12;

    if(age >=  12){
        printf("age is greater");
    }
    //else if(){
    // } 
    //else(){
    // }
} */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/* int main(){
    bool isStudent = true;
    if (isStudent == true){
        printf("You are a student");
    }
    else{
        printf("you are not a student");
    }
    return 0;
} */

int main(){

    char name[50] = " ";

    printf("Enter our name:");
    fgets(name, sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
    

    if (strlen(name) == 0){
        printf("You have not entered anything");
    }
    else {
        printf("hello %s", name);
    }
    return 0;
}
