#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 10;       //integer 4 bytes
    float number = 10.5;//floating 4 bytes
    double pi = 3.14159;//double float 8 bytes
    char grade = 'A';   //character 1 byte
    char name[] = "Ryujino";//string size varies
    // bool isonline = false;
    bool isoffline = true; //boolean true or false 1 byte , requires<stdbool.h>

    printf("You are %d years old\n", age);  //d = number
    printf("The number is %f\n", number);   //f = flaoting number
    printf("The pi value is %lf\n", pi);     //lf = long flaoting point number
    printf("The pi value is %.5lf\n", pi);     //lf = long flaoting point number
    printf("The grade is %c\n", grade);     //c = for character   
    printf("The name is %s\n", name);     //s = for string   
    // printf("%d\n", isonline);     //0 = false   
    printf("%d\n", isoffline);     //1 = true   


    if (isoffline){
        printf("The user is offline");      // prints this becuase the bool decared is true
    }
    else{
        printf("The user is online");
    }
    return 0;


}