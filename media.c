#include<stdio.h>
#include<stdlib.h>

int main(){

    float num1, num2, num3, respMed;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o segundo número: ");
    scanf("%f", &num3);

    respMed = (num1 + num2 + num3) / 3;

    printf("A média dos números é: %.2f", respMed);

    system("pause");
    return 0;
}