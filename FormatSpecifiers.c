// Format Specifiers

#include <stdio.h>

int main()
{
    // To print other types, use %c for char and %f for float

    // char character = 'A';
    // printf("%c\n", character);

    // float floatNum = 10.0;
    // printf("%f\n", floatNum);

    // int intNum = 200;
    // printf("%d\n", intNum);
    
    // char *txt = "This is a text...";
    // printf("%s\n", txt);


    int myNum = 15;
    char myLetter = 'C';
    printf("My num is: %d\n and my char is: %c\n", myNum, myLetter);
    
    // Print values with out variables
    printf("\nMy favourite number is: %d\n", 15);
    printf("\nMy favourite char is: %c\n", 'C');

    return 0;
}