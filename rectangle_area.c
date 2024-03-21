//calculating the rectangle area:
#include <stdio.h>
int main(){
    float base, altura;
    printf("Digite o valor da base do retângulo: \n");
    scanf("%f", &base);
    printf("Digite o valor da altura do retângulo: \n");
    scanf("%f", &altura);
    printf("A área desse retângulo é: %fcm²\n", base * altura);

    return 0;
}