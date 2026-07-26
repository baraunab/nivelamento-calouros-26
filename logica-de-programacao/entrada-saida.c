// inclusão da biblioteca de entrada e saída de dados
#include <stdio.h>

// função principal
int main(){
    // variável que guarda número inteiro referente à idade
    int idade;

    // exibir mensagem para o usuário 
    printf("Digite sua idade: ");
    // entrada de dado do usuário
    scanf("%d", &idade);

    // imprimir a idade inserida pelo usuário
    printf("Voce tem %d anos\n", idade);

    // fim do programa
    return 0;
}
