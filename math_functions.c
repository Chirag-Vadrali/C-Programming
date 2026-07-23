#include <stdio.h>
#include<math.h>

int main(){
    int x = 9;
    int y = 20;

    x = sqrt(x);
    x = pow(x,4);
    x = round(x);
    x = floor(x);
    x = ceil(x);
    x = abs(x);
    x = log(x); 
    //like this sin,cos,tan etc...

    printf("%d",x);
    return 0;
}