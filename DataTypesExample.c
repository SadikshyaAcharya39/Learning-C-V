#include <stdio.h>

int main()
{
    int number_of_items = 2;
    float cost_of_items = 9.99;
    char currency = '$';

    float total_cost_of_items = number_of_items * cost_of_items;
    printf("Total Cost of Items:  %c %.1f", currency, total_cost_of_items);

    return 0;
}