//calculating the rectangle area:
#include <stdio.h>
int main(){
    float base, heigh;
    printf("Type a value for the rectangle base: \n");
    scanf("%f", &base);
    printf("Type a value for the rectangle heigh: \n");
    scanf("%f", &heigh);
    printf("The rectangle area is: %fcm²\n", base * heigh);

    return 0;
}