#include <stdio.h>

int square(int num){
    return num*num;
}
int cube(int num){
    return num*num*num;
}

int main(){
    int x = square(3);
    int y = cube(4);

    printf("%d\n",x);
    printf("%d\n",y);
}