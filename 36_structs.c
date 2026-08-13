#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float CGPA;
    bool isFulltime;
}Student;

void printstudent (Student student);
int main (){

    //struct = A custom container holds multiple  pieces of related information, simialr to objects in other language
    Student student1 = {"Chirag" , 10 , 20.2 , true};
    Student student2 = {0};
    strcpy(student2.name, "JIMMY");
    printstudent(student1); 
    printstudent(student2);


}

void printstudent (Student student){
    printf("Name : %s\n", student.name);
    printf("age : %d\n", student.age);
    printf("CGPA : %.2f\n", student.CGPA);
    printf("STUD : %d\n", student.isFulltime);

}

