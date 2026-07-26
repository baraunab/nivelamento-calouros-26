#include <stdio.h>

int main() {
    // Variável que guarda uma senha numérica do usuário
    int senha_usuario = 4096;
    int senha_correta = 1234;

    // compara a senha do usuário com a senha correta, caso sejam iguais, exibir mensagem de acesso liberado
    if (senha_usuario == senha_correta) {
        printf("acesso liberado!\n");
    } else if (senha_usuario == 1928) { // comparação adicional para senha do usuário, caso seja igual a 1928, indicar que senha foi banida 
        printf("acesso negado! Senha banida\n");
    } else { // caso contrário, se nenhuma das anteriores forem verdadeiras
        printf("acesso negado! usuario não existe\n");
    }
}