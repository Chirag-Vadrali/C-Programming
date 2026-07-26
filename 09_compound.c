#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompound = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (%%): ");
    scanf("%lf", &rate);

    rate = rate / 100;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &timesCompound);

    total = principal * pow(1 + rate / timesCompound,timesCompound * years);

    printf("After %d years, the total amount will be %.2lf\n",years, total);

    return 0;
}