#include <stdio.h>

int main() {
    // repetição com variável contadora na sintaxe
    for (int contador = 0; contador < 2; ++contador) {
        // variável contadora só é acessível de dentro do bloco da repetição
        printf("%d\n", contador);
    }
}