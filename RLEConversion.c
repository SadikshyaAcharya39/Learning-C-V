#include <stdio.h>

int main(){
    int maxScore = 800;
    int usersScore = 400;
    float percentage = (float) usersScore / maxScore * 100.0;
    printf("%.2f", percentage);
    return 0;
}