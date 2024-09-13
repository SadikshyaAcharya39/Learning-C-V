#include <stdio.h>

int main()
{
    // int myNum = 3;
    // float floatNum = 33.33;
    // double doubleNum = 33.3333;

    // // printf("%d %.2f %.4f", myNum, floatNum, doubleNum);

    // printf("MyNum: %d\n\n", myNum);
    // printf("Float Number: %.2f\n\n", floatNum);
    // printf("Double Number: %.3f\n\n", doubleNum);


    // Characters
    // char myText[] = "Hello";
    // printf("%s", myText);


    // Numbers
    // printf("%f", 32.33);


// Scientific Numbers
    // float f1 = 35e3;
    // double d1 = 12E4;
    // printf("%f\n\n", f1);
    // printf("%1f\n\n", d1);


    // Decimal Precision

    float floatNum = 3.5;
    double myDoubleNum = 19.99;

    // Default will show 6 digits after decimal point

    printf("%f\n\n\n", floatNum);

    // Only show 1 digit

    printf("%.1f\n\n", floatNum);
    return 0;
}