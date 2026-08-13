#include <stdio.h>

int main(){
    int x = 2;
    int y = 1;
    int max= (x>y) ? x : y;
    int min  =(x<y) ? x : y;
    // (condition) ? if it is true : if it is false
    //short hand for if else value
    printf("%d\n",max);
    printf("%d",min);
}