#include <stdio.h>

int main(){
    int num = 10;

    if(num % 2 == 0){
        printf("%d is even number...", num);
    }
    else if (num % 2 != 0){
        printf("%d is odd number...", num);
    }
    else{
        printf("Invalid!!!");
    }

    return 0;
}