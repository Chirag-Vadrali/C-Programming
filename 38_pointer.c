    // pointer - A variable that stores the memory address of another variable.
    // Benefit  : They help avoid wasting memory by allowing you to pass
    // the addressof a largedata structure instead of copying the entire data.
    // *= dereference operator

#include <stdio.h>
void birthday(int* age);
int main (){

    int age = 25;
    int *pAge = &age;

    // printf("%p\n", &age);
    // printf("%p\n", pAge);

    birthday(pAge);
    //instead uing pAge we can use &age also.
    printf("You are %d years old" , age); // the answer will be 25, But still the answer is 25
}
/* void birthday(int age){
    //pass by value - when you pass a value in a function we actually make a copy of it and we are not chaning the orginal value 
    // we are chaning the copy of it
    age++;
} */

/* void birthday(int *age){
    // pass by reference - emans passing it using pointer
    age++;
} */

void birthday (int *age){
    (*age)++; // dereference the age and then increae it by 1
}