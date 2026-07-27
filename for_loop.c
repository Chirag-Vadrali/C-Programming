#include <stdio.h>
#include <windows.h>

int main (){

    // for loop =  for (intialization,condition,update)
    /* int i = 0;
    for (i;i<10;i++){
        printf("%d\n",i);
    }
    return 0; */

    int i = 10;
    for(i; i>=0; i--){
        Sleep(1000);
        printf("%d\n",i);
    }
}