#include <stdio.h>

int main()
{

    // Type Conversion
    int x = 5;
    int y = 2;
    int remainder = x / y;
    printf("%d", remainder);


    // Implicit Conversion (Automatically)
    // Explicit Conversion (Manually)

    float myFloat = 9;
    printf("%f", myFloat);  // Compiler automatically converts int into float in this case

    float remainder0 = 5 / 2;
    printf("%f\n\n", remainder0);  // Output = 2 

    float remainder1 = (float) 5 / 2;
    printf("%f\n\n", remainder1);   // Output = 2.5;

    return 0;
}