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

    // variável `soma` recebe a operação aritmética de soma entre `numero1` e `numero2`
    soma = numero1 + numero2;
    printf("\nSoma: %d", soma);

    // variável `multiplicacao` recebe a operação aritmética de multiplicação entre `numero1` e `numero2`
    multiplicacao = numero1 * numero2;
    printf("\nMultiplicacao: %d", multiplicacao);

    // variável `divisao` recebe a operação aritmética de divisão entre `numero1` e `numero2`
    divisao = numero1 / numero2;
    printf("\nDivisao: %d", divisao);

    // variável `subtracao` recebe a operação aritmética de subtração entre `numero1` e `numero2`
    subtracao = numero1 - numero2;
    printf("\nSubtracao: %d", subtracao);
}
