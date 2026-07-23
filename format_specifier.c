#include <stdio.h>
 //format specifier = special tokens that begin with a % dumbol,
 // followed by a character that specidies the data and optiona modifiers
 // they control how data is sipayed or interpreted

 int main(){
    //width
    int num1 = 1;
    int num2 = 20;
    int num3 = 100;
    printf("%-4d\n",num1);
    printf("%3d\n",num2);
    printf("%05d\n",num3);

    //precision
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.0;

    printf("%.1f\n",price1);
    printf("%-5.2f\n",price2); 
    printf("%+7.2f\n",price3);

 }