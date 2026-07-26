#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = 10;
    char name[50] = " ";
    
    printf("Enter Your age:");
    scanf("%d" , &age);
    
    printf("Enter your gpa:");
    scanf("%f",&gpa);
    
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    getchar();
    printf("Enter your name:");
    // scanf("%s", &name);  //stops when there is a white space
    fgets(name,sizeof(name),stdin); //has /n buffer at the end
    name[strlen(name) -1 ] ='\0';   // removes the /n buffer
    
    printf("%s\n",name);
    printf("%d\n",age);
    printf("%f\n",gpa);
    printf("%c\n",grade);

    return 0;

}