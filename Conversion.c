#include <stdio.h>

int main(){

    // Implicit Conversion

    // Done automatically by compiler

    // float floatNum = 9;
    // printf("%f", floatNum);  // Output = 9.0000

    // Automatic conversion form float to int

    // int floatValue = 9.99;
    // printf("%i", floatValue);


    // Explicit Conversion

    // Manual conversion

    // float  rem = 5 / 2;
    // printf("%f", rem);

    // float  rem1 = (float) 5 / 2;
    // printf("%f", rem1);


    int num1 = 6;
    int num2 = 3;
    float divide = (float) num1 / num2;
    printf("%d", divide);
    return 0;
}