#include <stdio.h>
#include <math.h>

int main(){

    char op = '\0';
    double x , y , z= 0.0;

    printf("Enter the first number x:");
    scanf("%lf",&x);
    
    printf("Enter  the operator( +, -, *,/):");
    scanf(" %c",&op);

    printf("Enter the first number y:");
    scanf("%lf",&y);

    switch(op){
        case '+':
            z = x + y;
            break;
        case '-':
            if (y<=-1){
                z = y - x;
            }
            z = x - y;
            
            break;
        case '/':
            if (y==0){
                printf("you cant divide by 0");
            }
            z = x / y;
            break;
        case '*':
            z = x * y;
            break;
        default:
            printf("Enter the operator:");
    }
    printf("you chose %c and the result is %.2f.", op ,z );
    return 0;
    
}