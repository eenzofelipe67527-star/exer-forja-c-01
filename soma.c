#include<stdio.h>
#include<stdlib.h>

int main(){

    float num1, num2, respSoma;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    respSoma = num1 + num2;

    printf("A soma dos números é: %.2f", respSoma);

    system("pause");
    return 0;
}