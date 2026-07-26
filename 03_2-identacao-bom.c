/*
    Programa que recebe do usuário dois números e apresenta
    na tela o resultado da divisão entre eles.
*/

// isso é um comentário !!

/*
 isso também é um comentário,
 mas com várias linhas !!
*/

#include <stdio.h>

int main() {
    // declaração das variáveis
    float divisor;
    float dividendo;
    float resultado;

    // entrada dos números pelo usuário
    scanf("%f %f", &divisor, &dividendo);

    // cálculo da divisão
    resultado = diviso / dividendo;

    // exibição do resultado na tela
    printf("%f\n", resultado);
}