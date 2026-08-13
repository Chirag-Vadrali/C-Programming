#include <stdio.h>

//enum is used to as a user defined data typethat consists of a set of named integer costants.
// replaces the numbers with the readable names
// typedef enum {
//     SUNDAY , MONDAY , TUESDAY , WEDNESDAY , THURSDAY , FRIDAY , SATURDAY
// }day;
// int main (){
//     day Today = SATURDAY;
//     printf("%d" , Today);
// }



typedef enum {
    SUCCESS, PENDING, ERROR
}Status;
void connectstatus(Status status);
int main(){

    Status status = PENDING;
    connectstatus(status);
    return 0;
}

void connectstatus(Status status){
    switch (status){
        case SUCCESS:
            printf("connection successfull\n");
            break;
        case PENDING:
            printf("connectios is pending\n");
            break;
        case ERROR:
            printf("ERROR CONNECTIONS\n");
            break;
    }
}