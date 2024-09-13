#include <stdio.h>

int main(){
    int day = 3;

    switch(day){

        case 1:
        printf("Sunday\n\n");
        break;

        case 2:
        printf("Monday\n\n");
        break;

        case 3:
        printf("Tuesday\n\n");
        break;

        case 4:
        printf("Wednesday\n\n");
        break;

        case 5:
        printf("Thursday\n\n");
        break;

        case 6:
        printf("Friday\n\n");
        break;

        default:
        printf("Saturday\n\n");    
    }

    return 0;
}