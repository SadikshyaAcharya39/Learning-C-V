#include <stdio.h>

int main()
{
    // Size of int - 2 or 4 bytes
    // Size of float - 4 bytes
    // Size of double - 8 bytes
    // Size of char - 1 byte

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    // usage of sizeof

    printf("Size of int: %lu bytes\n\n", sizeof(myInt));
    printf("Float value: %lu bytes\n\n", sizeof(myFloat));  
    printf("Size of double: %lu bytes\n\n", sizeof(myDouble));
    printf("Size of char: %lu byte\n\n", sizeof(myChar));

    return 0;
}
