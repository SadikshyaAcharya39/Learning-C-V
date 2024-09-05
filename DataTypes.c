#include <stdio.h>

int main()
{
    int myNum = 3;
    float floatNum = 33.33;
    double doubleNum = 33.3333;

    // printf("%d %.2f %.4f", myNum, floatNum, doubleNum);

    printf("MyNum: %d\n\n", myNum);
    printf("Float Number: %.2f\n\n", floatNum);
    printf("Double Number: %.3f\n\n", doubleNum);

    return 0;
}