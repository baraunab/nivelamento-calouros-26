#include <stdio.h>

int main() {
    int contador = 0;

    do {
        // contador é incrementado
        contador += 1;

        // exibe na tela
        printf("%d\n", contador);
    } while (contador < 2); // avalia condição no final
}