#include <stdio.h>
#include <string.h>
typedef struct {
    char model[25];
    int year;
    int price;
}car;

int main(){
    // array of structs =    Array where each elements contains struct{}
    // helps organize  and groups together  related data
    car Cars [] = {{"MUSTANG" , 2500, 36987450},
                    {"NANO" , 2500, 236547},
                    {"HI" , 2500,21450}
                };
    int number = sizeof(Cars) / sizeof(Cars[0]);

    for (int i = 0; i<number ; i++){
        printf("The care nam is %s Model is %d, price is $ %d\n", Cars[i].model,Cars[i].year,Cars[i].price);
    }

}