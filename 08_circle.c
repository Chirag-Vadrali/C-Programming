#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double surfacearea = 0.0;
    double volume  = 0.0;
    const double pi = 3.14159;

    printf("Enter the radius:");
    scanf("%lf",&radius);

    area = pi * pow(radius,2);
    surfacearea = 4*pi*pow(radius,2);
    volume = (4/3)*pi*pow(radius,3);
    
    printf("Area: %lf\n", area);
    printf("surface_area: %.2lf\n",surfacearea);
    printf("Volume: %.2lf",volume);


    
    
    return 0;

}

