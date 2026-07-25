## Nivelamento TADS - Calouros 2026/2
Repositório utilizado para armazenar exercícios e como base de estudos para introdução ao conteúdo de Git & GitHub.


<details open><summary>

  ## Sumário

</summary>

* [ 1. Lógica de Programação, Linguagem C e Ferramentas](#1-lógica-de-programação-linguagem-c-e-ferramentas)
* [2. Git & GitHub](#2-git--github)

</details>


## 1. Lógica de Programação, Linguagem C e Ferramentas
### Conceitos Básicos
- Algoritmos: conjunto de instruções lógicas, finitas e bem definidas, que tem o objetivo de executar tarefas específicas
Exemplo: Passo a passo de fazer café:

Algoritmo em Texto | Fluxograma
--- | ---
<img width="479" height="176" alt="image" src="https://github.com/user-attachments/assets/90ac1526-6e79-40c2-a263-c709df4006fe" /> | <img width="283" height="520" alt="image" src="https://github.com/user-attachments/assets/bcd4063b-cfb9-4f8e-b835-69a45e63ed4b" />

 - IDE: Significa "Ambiente de Desenvolvimento Integrado", aplicação utilizada para codificar programas.

Durante o nivelamento, foi apresentado a **linguagem C**, que será usada para a introdução à lógica de programação. A sintáxe básica de C funciona da seguinte forma
``` C
#include <stdio.h>

int main () {
  printf("Olá Mundo!");
  return 0;
}
```
- Acima, vemos um bloco de programa básico com apenas uma intrução de saída de dados por meio da função `printf`. Ela é _**incluida**_ no programa por meio da biblioteca `stdio.h` (Standard Input and Output Reference)
- Uma biblioteca guarda funções prontas. A `stdio.h` guarda a função `printf`, que exibe tudo que é escrito dentro dela em um terminal
``` C
#include <stdio.h> // biblioteca

// int - tipo de inteiro de retorno, o que a função vai devolver depois que executar os comandos 
// função main (principal) - mostra no terminal tudo que é escrito dentro dela
int main () {
  printf("Olá Mundo!"); // função de saída de dados no terminal
  return 0; // retorno inteiro
}
```

### Ferramentas
- IDEs: Recomendamos o CodeBlocks ou Dev C++, já que uma dessas IDEs será usada durante as aulas do período
- Site: Caso você não consiga acesso as ferramentas anteriores, o **Online GBD** é um alternativa
- Compiladores: Para Windows, a melhor opção é o uso do **MingGW** ou **GCC**.


## 2. Git & GitHub
## Terminal e DOS
O Git é composto por muitos comandos de terminal, portanto é extremamente importante ter um conhecimento básico do funcionamento de terminais.
- O terminal pode navegar entre os arquivos e pastas de um computador. As **pastas** são chamadas de **diretórios**.
- DOS: Significa "Sistema Operacional de Disco", um sistema que roda no terminal e possui um interpretador de comandos. Os comandos mais básicos do DOS são:

Comandos | Significado
--- | ---
dir | "directory", lista tudo que está dentro de determinado diretório
cd | "change directory", navega entre diretórios
mkdir | "make directory", cria um novo diretório
UNIDADE: | muda de disco com a determinada letra da unidade ("C:", "D:")

## Comandos do GIT
O Git é uma ferramenta de versionamento que salva o progresso durante o desenvolvimento de algum código ou projeto.
- Os comandos básicos do Git são:

Comandos | Significado
--- | ---
git init | Inicia o repositório no diretório do projeto
git add . | Rastreia os arquivos para adicionados/modificados/excluido, salvando suas modificações*
git commit -m "Mensagem" | Todos os arquivos rastreados são guardados juntos no mesmo "commit" e descritos pela mensagem**

###### * O `.` em `git add .` inclui todos os arquivos a serem rastreados. O `.` pode ser modificado pelo nome de um arquivo. Exemplo: Queremos rastrear o `arquivo.txt`, o comando será: `git add arquivo.txt`
###### ** O `-m` significa "menssagem", ele classifica que tudo que vem em seguida dentro de aspas duplas será uma menssagem descrevendo aquele commit.

## GitHub
Para salvar um arquivo de maneira remota na nuvem, é utilizado o GitHub. Tudo que está no repositório local é enviado para um repositório no site que pode ser acessado de qualquer lugar. O passo a passo a seguir cobre o processo de enviar os arquivos locais para um repositório remoto:

1. Configurar dados do usuários
  - Dentro do terminal, você deve colocar as informações da sua conta usando os seguintes comandos

Comandos | Significado
--- | ---
git config --global user.email "exemplo@email.com" | Adicione o email que está relacionado a sua conta do GitHub
git config --global user.name "seu-usuario" | Adicione o seu nome de usuário do GitHub


## 3. Tabela Verdade

## 4. Tipos de variáveis

## 5. Operações aritméticas

## 6. Condicional

## 7. Repetição
