#include <stdio.h>

int main(){

    int numero1;
    int numero2;
    int soma;
    int multiplicacao;
    int divisao;
    int subtracao;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    printf("\nSoma: %d", soma);

    multiplicacao = numero1 * numero2;
    printf("\nMultiplicacao: %d", multiplicacao);

    divisao = numero1 / numero2;
    printf("\nDivisao: %d", divisao);

    subtracao = numero1 - numero2;
    printf("\nSubtracao: %d", subtracao);
}
