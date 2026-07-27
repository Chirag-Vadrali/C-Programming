#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void hello(char name[],int age); //function protoype
void isage(int age);

int main(){
    hello("Ryujino" , 130);
    isage(230);
    return 0;
}


void hello(char name[], int age){
    printf("hello %s\n",name);
    printf("your age is %d\n", age); /// if run like this it will show erorr so we ahve to call the function protoype
}

void isage(int age){
    if (age>=18) {
        printf("Print you are eligble to vote");
    }
    else{
        printf("You are ineligible");
    }
}