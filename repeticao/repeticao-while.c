#include <stdio.h>

int main() {
    // declara variável de contagem
    int contador = 0;

    // verifica se contador é maior que 10
    while (contador < 2) {
        // caso não seja maior que 10 executar bloco interno
        printf("%d\n", contador)

        // incrementar contador por 1 e voltar para o inicio da repetição verificando se contador
        // é maior que 10 novamente
        contador += 1;
    }
}