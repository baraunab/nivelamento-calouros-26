#include <stdio.h>

int main() {
    // Variável que guarda uma senha numérica do usuário
    int senha_usuario = 4096;
    int senha_correta = 1234;

    // compara a senha do usuário com a senha correta, caso sejam iguais, exibir mensagem de acesso liberado
    if (senha_usuario == senha_correta) {
        printf("acesso liberado!\n");
    }

    // compara senha do usuário com senha correta, caso sejam diferentes, exibir mensagem de acesso negado
    if (senha_usuario != senha_correta) {
        printf("acesso negado! usuario não existe\n")
    }

    return 0;
}