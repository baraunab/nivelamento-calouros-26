## Nivelamento TADS - Calouros 2026/2
Repositório utilizado para armazenar exercícios e como base de estudos para introdução ao conteúdo de Git & GitHub.

<details open><summary>

  ## Sumário

</summary>

* [1. Lógica de Programação, Linguagem C e Ferramentas](#1-lógica-de-programação-linguagem-c-e-ferramentas)
* [2. Git & GitHub](#2-git--github)

</details>

## 1. Lógica de Programação, Linguagem C e Ferramentas
### Conceitos Básicos
- Algoritmos: conjunto de instruções lógicas, finitas e bem definidas, que tem o objetivo de executar tarefas específicas <br>
Exemplo: Passo a passo de fazer café:

Algoritmo em Texto | Fluxograma
--- | ---
<img width="479" height="176" alt="image" src="https://github.com/user-attachments/assets/90ac1526-6e79-40c2-a263-c709df4006fe" /> | <img width="283" height="520" alt="image" src="https://github.com/user-attachments/assets/bcd4063b-cfb9-4f8e-b835-69a45e63ed4b" />

 - IDE: Significa "Ambiente de Desenvolvimento Integrado", aplicação utilizada para codificar programas.

Durante o nivelamento, foi apresentado a **linguagem C**, que será usada para a introdução à lógica de programação. A sintaxe básica de C funciona da seguinte forma:
``` C
#include <stdio.h>

int main () {
  printf("Olá Mundo!\n");
  return 0;
}
```
- Acima, vemos um bloco de programa básico com apenas uma intrução de saída de dados por meio da função `printf`. Essa função é _**incluída**_ no programa por meio da biblioteca `stdio.h` (Standard Input and Output Reference);
- Uma biblioteca guarda funções prontas para você utilizar em seu programa. A `stdio.h` guarda a função `printf`, que exibe tudo que é escrito dentro dela em um terminal.
``` C
#include <stdio.h> // incluir biblioteca

// int - tipo de inteiro de retorno, o que a função vai devolver depois que executar os comandos 
// função main (principal) - é o ponto de entrada do programa, por onde ele começa a ser executado
int main () {
  printf("Olá Mundo!\n"); // função de saída de dados no terminal
  return 0; // retorno inteiro
}
```

### Ferramentas
- IDEs: Recomendamos o CodeBlocks ou Dev C++, já que uma dessas IDEs será usada durante as aulas;
- Site: Caso você não consiga acesso as ferramentas anteriores, o <a href="https://www.onlinegdb.com/">**Online GBD**</a> é um alternativa, podendo ser utilizada através do navegador;

#### Compiladores
&emsp;O que são compiladores afinal? Vocês já devem ter pelo menos ouvido o termo algumas vezes e eles podem até parecer objetos místicos que fogem da compreensão humana. No entanto, apesar de serem bastante complexos em sua construção, compiladores são bem simples de se utilizar. <br><br>
&emsp;Primeiramente deve-se compreender que o que se escreve, o código em C, não é algo que a sua máquina consegue entender. O que a máquina entende é o chamado *código de máquina*, que são essencialmente, explicado de maneira simplória, conjuntos de 0 e 1 que pode ser interpretado pelo processador do computador para realizar determinadas tarefas (contas matemáticas, colocar caracteres na tela, guardar coisas na memória etc.). Dito isso, pense como seria absurdamente trabalhoso e inconveniente digitar sequências gigantescas de 0 e 1, sem saber onde fica cada parte do código e o que significa o que. Difícil né? Pois é. <br><br>
&emsp;Para resolver justamente esse problema, a notável analista e matemática <a href="https://pt.wikipedia.org/wiki/Grace_Hopper">Grace Hopper</a> propôs que utilizassemos um programa que pudesse converter palavras da língua escrita (linguagem de programação) para o código de máquina, permitindo escrevermos programas de uma maneira muito mais legível e facilitando absurdamente sua manutenção.<br><br>
&emsp;Assim surge o conceito de compilador, que em suma, é nada mais que um programa que recebe seu texto escrito em uma linguagem de programação e converte para o código de máquina de um modo que seu computador possa executá-lo. Com o passar dos anos, compiladores foram aprimorados e cresceram muito em complexidade, mas a ideia continua sendo a mesma.<br>

#### Qual compilador usar e como?
  - Para Windows, a melhor opção de compilador para a Linguagem C é o <a href="https://www.mingw-w64.org/">**MingGW-W64**</a>
  - Para Linux o mais utilizado é o <a href="https://gcc.gnu.org/">GNU GCC</a>.
  - Quando o MinGW-W64 ou GNU GCC estiver instalado no seu sistema será possível invocar o comando `gcc` do terminal. Digite `gcc --verison` para verificar! Isso irá exibir a versão do gcc instalada em sua máquina.

<img width="922" height="396" alt="image" src="https://github.com/user-attachments/assets/b3cb1591-141b-40ee-bb93-450075968789" />

  - Para compilar do terminal, deverá ser especificado o nome do arquivo que vai ser compilado e qual será o nome do executável gerado:

```cmd
gcc <arquivo do código> -o <nome do arquivo executável>
```
  - Em seguida, para rodar o executável criado, deve-se digitar o nome dele no terminal:

```cmd
./<nome do executável>
```

<img width="877" height="187" alt="image" src="https://github.com/user-attachments/assets/a2da4e24-dd18-4758-b6e2-ab43b58455cb" />

  - Prontinho! Essa é uma demonstração da compilação do código de exemplo de código em C mencionado acima.

## 2. Git & GitHub
### Terminal e DOS
O Git é composto por muitos comandos de terminal, portanto é extremamente importante ter um conhecimento básico do funcionamento de terminais.
- O terminal pode navegar entre os arquivos e pastas de um computador. As **pastas** são chamadas de **diretórios**.
- DOS: Significa "Sistema Operacional de Disco", um sistema que roda no terminal e possui um interpretador de comandos. Os comandos mais básicos do DOS são:

Comandos | Significado
--- | ---
dir | "directory", lista tudo que está dentro de determinado diretório
cd | "change directory", navega entre diretórios
mkdir | "make directory", cria um novo diretório
UNIDADE: | muda de disco com a determinada letra da unidade ("C:", "D:")

### Comandos do GIT
O Git é uma ferramenta de versionamento que salva o progresso durante o desenvolvimento de algum código ou projeto.
- Os comandos básicos do Git são:

Comandos | Significado
--- | ---
git init | Inicia o repositório no diretório do projeto
git add . | Rastreia os arquivos para adicionados/modificados/excluido, salvando suas modificações[^1]
git commit -m "Mensagem" | Todos os arquivos rastreados são guardados juntos no mesmo "commit" e descritos pela mensagem[^2]

### GitHub
Para salvar um arquivo de maneira remota na nuvem, é utilizado o GitHub. Tudo que está no repositório local é enviado para um repositório no site que pode ser acessado de qualquer lugar. O passo a passo a seguir cobre o processo de enviar os arquivos locais para um repositório remoto:

1. Configurar dados do usuários
  - Dentro do terminal, você deve colocar as informações da sua conta usando os seguintes comandos

Comandos | Significado
--- | ---
git config --global user.email "exemplo@email.com" | Adicione o email que está relacionado a sua conta do GitHub
git config --global user.name "seu-usuario" | Adicione o seu nome de usuário do GitHub

2. Adicionar um destino remoto
  - Será necessário adicionar um destino remoto para que o Git saiba para onde as mudanças do repositório devem ser enviadas. É possível adicionar mais de um destino e remover ou alterar destinos existentes.

Comandos | Significado
--- | ---
git remote add \<nome do destino\> \<link de repositorio\> | Cria um novo destino remoto com um link para determinado repositório.
git remote remove \<nome do destino\> | Remove um destino criado.
git remote set-url \<nome do destino\> \<novo link\> | Altera o link de determinado destino já existente.
git remote get-url \<nome do destino\> | Ver link definido para determinado destino remoto.

## 3. Tabela Verdade

## 4. Tipos de variáveis
&emsp;Os números, caracteres e dados de um modo geral quando armazenados na memória do computador ocupam uma determinada quantidade de espaço. A depender do tipo de dado que vai ser guardado, ele pode ocupar mais ou menos espaço. Como podemos saber quanto espaço aquele dado deve ocupar? Para isso existem os _**tipos de dados**_.<br><br>
&emsp;Pela linguagem C ser estaticamente tipada, você é obrigado a sempre indicar o tipo de uma variável quando esta for declarada (algumas linguagens fazem isso automaticamente para você), informando o compilador quanto espaço aquela informação vai ocupar na memória.<br><br>
&emsp;Assim, existem diversos tipos de dados, mas os mais fundamentais que serão usados nesse primeiro período são:

Sintaxe | Nome | Descrição
--- | --- | ---
**int** | Inteiro | Guarda números inteiros, negativos e positivos (-4, 0, 2 etc).
**float** | Real | Guarda números reais (3.1415, 0.5, 10.00 etc).
**char** | Caractere | Guarda um único caractere ('a', 'b', 'c' etc).

&emsp;Para declarar variáveis de determinado tipo, deve-se escrever sua sintaxe primeiro seguido do nome[^3] pelo qual aquela variável vai ser referida posteriormente e opcionalmente atribuir um valor inicial.

```cpp
int nome_da_variavel;
```

&emsp;Ou

```cpp
int nome_da_variavel = 10;
```

&emsp;Note que antes do valor inicial deve haver um sinal de igualdade indicando atribuição e obrigatoriamente toda declaração em C deve terminar com ponto e vírgula (;)!

> [!IMPORTANT]
> Uma má prática muito comum entre programadores é nomear variáveis abreviando e isso é fortemente contraindicado devido a dificultar a compreensão ao fazer manutenção do código ou ser lido por outros desenvolvedores! Nomeie suas variáveis de um modo mais descritivo possível!<br><br>**Evite**: num_prox_al<br> **Faça**: numero_proximo_aluno.

## 5. Operações aritméticas

## 6. Condicional

## 7. Repetição

[^1]: O `.` em `git add .` inclui todos os arquivos a serem rastreados. O `.` pode ser modificado pelo nome de um arquivo. Exemplo: Queremos rastrear o `arquivo.txt`, o comando será: `git add arquivo.txt`
[^2]: O `-m` significa "menssagem", ele classifica que tudo que vem em seguida dentro de aspas duplas será uma menssagem descrevendo aquele commit.
[^3]: Nomes de variáveis *não podem* começar com números.
