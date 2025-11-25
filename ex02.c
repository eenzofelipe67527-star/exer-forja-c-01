#include<stdio.h>
#include<stdlib.h>

int main(){

    char cidade[50], estado[50];
    int nascimento, ano;

    printf("Qual sua cidade: ");
   fgets(cidade, 50, stdin);
    printf("Qual seu estado: ");
    fgets(estado, 50, stdin);
    printf("Qual seu ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Qual ano atual: ");
    scanf("%d", &ano);

    ano - nascimento = nascimento;

    printf("Você nasceu na cidade %sno estado %s e tem %d anos. \n", cidade, estado, ano);
    system("pause");
    return 0;
}