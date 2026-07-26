# Nivelamento TADS - Calouros 2026/2
Repositório utilizado para armazenar exercícios e como base de estudos para introdução ao conteúdo de Git & GitHub.

## Introdução
Olá! Preparamos esse super resumão de tudo que falamos durante o nivelamento. Use esse arquivo como uma pequena cola durante as aulas do período! :D

<details open><summary>

  ## Sumário

</summary>

* [0. Terminal e DOS](#0-terminal-e-dos)
* [1. Git & GitHub](#1-git--github)
* [2. Lógica de Programação, Linguagem C e Ferramentas](#2-lógica-de-programação-linguagem-c-e-ferramentas)
* [3. Identação e Legibilidade](#3-identação-e-legibilidade)
* [4. Tipos de variáveis](#4-tipos-de-variáveis)
* [5. Operações aritméticas](#5-operações-aritméticas)
* [6. Condicional](#6-condicional)
* [7. Repetição](#7-repetição)

</details>

## 0. Terminal e DOS
Antes de começar é necessário ter um conhecimento básico do funcionamento de terminais, para o uso de algumas ferramentas que serão abordadas ao longo desse material, especialmente o Git e GitHub!
- O terminal pode navegar entre os arquivos e pastas de um computador. As **pastas** são chamadas de **diretórios**.
- DOS: Significa "Sistema Operacional de Disco", um sistema que roda no terminal e possui um interpretador de comandos. Os comandos mais básicos do DOS são:

Comandos | Significado
--- | ---
dir | "directory", lista tudo que está dentro de determinado diretório
cd | "change directory", navega entre diretórios
mkdir | "make directory", cria um novo diretório
UNIDADE: | muda de disco com a determinada letra da unidade ("C:", "D:")

## 1. Git & GitHub

### Comandos do GIT
O Git é uma ferramenta de versionamento que salva o progresso durante o desenvolvimento de algum código ou projeto.
- Os comandos básicos do Git são:

Comandos | Significado
--- | ---
git init | Inicia o repositório no diretório do projeto
git add . | Rastreia os arquivos para adicionados/modificados/excluido, salvando suas modificações[^1]
git commit -m "Mensagem" | Todos os arquivos rastreados são guardados juntos no mesmo "commit" e descritos pela mensagem[^2]
git status | Mostra o estado do repositório e o rastreio dos arquivos
git log | Mostra o histórico de commits

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
git remote get-url \<nome do destino\> | Ver link definido para determinado destino remoto

### Indo além...
Complementando o que foi falado durante nossa prática introdutória do Git durando o nivelamento, vamos adicionar nessa seção alguns elementos a mais.

### Clonando repositórios
Uma vez que temos nosso repositório na nuvem, a gente consegue devolver ele para nossa máquina local utilizando os seguintes passos:

1. Pegar a URL
  - Na página do nosso repositório remoto no GitHub, clicamos no botão `CODE` e copiamos a URL.
<img width="599" height="525" alt="image" src="https://github.com/user-attachments/assets/130ee0d2-0659-4575-a21d-daff1f6bc312" />

<hr>

2. Clonando no Terminal
  - Em um diretório, utilizamos o seguinte comando:

Comandos | Significado
--- | ---
git clone https://github.com/usuario/nome-projeto.git |  Cria um novo diretório contendo o projeto salvo na URL

<hr>

3. Acessando o projeto
  - Utilizando os comandos do DOS previamente mencionados, acessamos os arquivos dentro do novo diretório!

<img width="800" height="449" alt="Gravando2026-07-25210304-ezgif com-video-to-gif-converter" src="https://github.com/user-attachments/assets/6d1504a4-0315-4f7d-b76d-88cbc652d3c4" />

<hr>

4. Atualizando o repositório local
  - Com o projeto na nossa máquina, podemos atualizar o repositório e puxar modificações da nuvem com o seguinte comando:

Comandos | Significado
--- | ---
git pull | Puxa tudo que está na nuvem para o repositório local

<hr>

### Branches
Um dos principais elementos que torna o Git na melhor ferramenta de trabalhos em equipe são as **branches** (galhos). Imagine que seu repositório é uma árvore e todos os arquivos, com um código estável e funcional, formam o tronco dessa árvore. A partir do tronco, é possível que um novo galho nasça, uma ramificação do tronco que possui acesso aos "elementos" do tronco. 
- Nesse exemplo, o tronco representa a branch `main`, o lugar onde a versão estável de um projeto é guardada. Ela deve ser preservada com segurança para garantir que nada importante do progresso seja perdido.
- Dentro das branches é possível fazer adição de funcionalidades, testes e todo tipo de modificação.
- Uma vez que as modificações estejam estáveis e funcionais, é possível integrar as novas modificações na branch principal, aumentando e melhorando o projeto de maneira segura.

1. Criando uma branch
  - Para criar uma branch é possível utilizar os seguintes comandos:

Comandos | Significado
--- | ---
git checkout -b nome-branch | Cria uma nova ramificação a partir da sua branch atual[^3]

<img width="760" height="202" alt="image" src="https://github.com/user-attachments/assets/1d77facb-aad8-4f25-b74d-7ce18768c0de" />

<hr>

2. Modificando arquivos
  - Dentro da sua nova branch, você pode criar novos arquivos, fazer modificações e criar novos commits. Quando todas as suas modificações estiverem **finalizadas e commitadas**, você deve voltar para a branch principal.

Comandos | Significado
--- | ---
git checkout nome-branch | Muda de ramificação

<img width="1031" height="372" alt="image" src="https://github.com/user-attachments/assets/64b2ce85-7b59-4471-97d8-139b28600f78" />

<hr>

3. Mesclando as modificações
  - Na sua branch `main`, você deve puxar as novas mudanças da sua branch de modificações com o comando:

Comandos | Significado
--- | ---
git merge nome-branch | Puxa as mudanças dos commits da branch descrita no comando para a sua branch atual

<img width="1114" height="627" alt="image" src="https://github.com/user-attachments/assets/1207d881-99a0-4ab6-9df4-b3e222b32381" />

<hr>

## 2. Lógica de Programação, Linguagem C e Ferramentas
### Conceitos Básicos
- Algoritmos: conjunto de instruções lógicas, finitas e bem definidas, que tem o objetivo de executar tarefas específicas <br>
Exemplo: Passo a passo de fazer café:

Algoritmo em Texto | Fluxograma
--- | ---
<img width="479" height="176" alt="image" src="https://github.com/user-attachments/assets/90ac1526-6e79-40c2-a263-c709df4006fe" /> | <img width="256" alt="image" src="https://github.com/user-attachments/assets/44f7c739-0088-4671-8918-2c3daf95c139" />

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

## 3. Identação e Legibilidade
&emsp;É de grande importância que vocês, como desenvolvedores, escrevam um código legível. Pode não parecer um detalhe para se dar tanta ênfase assim mas acreditem, é sim.<br><br>
&emsp;Existem muitas maneiras e estilos diferentes de escrever código que não afetam o resultado final do programa mas que podem ser mais ou menos confusos para quem estiver desenvolvendo. Um exemplo disso é o seguinte programa:

```cpp
#include <stdio.h>
int main()
{
float d;float dv;float r;
scanf("%f %f",&d,&dv);
printf("%f\n",d/dv);return 0;
}
```

&emsp;O que é `d`? O que é `dv`? Certo, eles dividem. É uma calculadora de divisão? <br><br>
&emsp;Aposto que com algum esforço vai ser possível descobrir o que o programa faz, mas imagine programas verdadeiramente grandes e complexos! Não seria esse esforço poupado se ao invés disso fizessemos:

```cpp
/*
    Programa que recebe do usuário dois números e apresenta
    na tela o resultado da divisão entre eles.
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
```

> [!IMPORTANT]
> **OBS**: Tudo o que for colocado depois de `//` na mesma linha ou entre `/*` e `*/` em mais de uma linha será ignorado pelo compilador e serve para notinhas e informações relevantes sobre partes do código!

&emsp;Ambos esses códigos produzem exatamente o mesmo resultado, mas concordemos que no segundo exemplo é bem mais fácil entender o que está acontecendo. Comentários e nomes de variáveis descritivas são indispensáveis!<br><br>
&emsp;Um código bem indentado tem um espaçamento nos blocos de código, por exemplo, dentro de funções ou dentro de condicionais. Um exemplo disso:

```cpp
// código sem identação
int idade = 20;

if (idade < 18) {
printf("menor de idade\n");
} else {
if (idade > 60) {
printf("aposentado\n");
return 0;
}
printf("maior de idade\n");
}

// código identado
if (idade < 18) {
    printf("menor de idade\n");
} else {
    if (idade > 60) {
        printf("aposentado\n");
        return 0;
    }
    printf("maior de idade\n");
}
```

> [!IMPORTANT]
> Uma dica é: a linha que abre a chave "{" deve estar alinhada com a chave fechada "}" 

## 4. Tipos de variáveis
&emsp;Os números, caracteres e dados de um modo geral quando armazenados na memória do computador ocupam uma determinada quantidade de espaço. A depender do tipo de dado que vai ser guardado, ele pode ocupar mais ou menos espaço. Como podemos saber quanto espaço aquele dado deve ocupar? Para isso existem os _**tipos de dados**_.<br><br>
&emsp;Pela linguagem C ser estaticamente tipada, você é obrigado a sempre indicar o tipo de uma variável quando esta for declarada (algumas linguagens fazem isso automaticamente para você), informando o compilador quanto espaço aquela informação vai ocupar na memória.<br><br>
&emsp;Assim, existem diversos tipos de dados, mas os mais fundamentais que serão usados nesse primeiro período são:

Sintaxe | Nome | Descrição
--- | --- | ---
**int** | Inteiro | Guarda números inteiros, negativos e positivos (-4, 0, 2 etc).
**float** | Real | Guarda números reais (3.1415, 0.5, 10.00 etc).
**char** | Caractere | Guarda um único caractere ('a', 'b', 'c' etc).

&emsp;Para declarar variáveis de determinado tipo, deve-se escrever sua sintaxe primeiro seguido do nome[^4] pelo qual aquela variável vai ser referida posteriormente e opcionalmente atribuir um valor inicial.

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
A linguagem C utiliza os seguintes operadores para fazer cálculos:

Operador | Significado | Exemplo
--- | --- | ---
\+ | Soma | int x = 2 + 2; // x = 4
\- | Subtração | int x = 2 - 2; // x = 0
\* | Multiplicação | int x = 2 * 2; // x = 4
/ | Divisão | int x = 2 / 2; // x = 1
% | Módulo (Divide e pega o resto) | x = 3 % 2; // x receberá o valor 1
++ | Incremento (Soma 1) | x++;
-- | Decremento (Subtrai 1) | x--;

- É importante relembrar que um cálculo deve seja atribuido à uma variável, para que o seu resultado seja armazenado nela!

``` cpp
2 + 2; // o resultado 4 não estará guardado em nenhum lugar

int soma = 2 + 2; // o resultado será guardado na variável soma
printf("2 + 2 = %d", soma) // o programa irá imprimir: 2 + 2 = 4
```

## 6. Condicional
&emsp;Muito do fluxo de um programa envolve a tomada de decisão com base em determinadas situações. Pode-se dizer que é como se o programa fizesse perguntas ao longo de sua execução para saber o que fazer caso uma determinada situação se apresente. O usuário digitou a senha correta? Liberar acesso. Caso não, bloquear acesso.<br><br>
&emsp;Os próprios programadores devem indicar no programa os casos para essas decisões e o que acontece quando o programa se depara com elas. Isso é feito através da _estrutura condicional_, que tem a sintaxe `if(condição)`.<br><br>
&emsp;Quando se utiliza um `if`, temos que ter em mente que tudo o que acontece entre as parênteses é uma afirmação que pode ser evaluada como _verdadeira_ ou _falsa_ através de uma afirmação, chamamos isso de _proposição lógica_. Uma afirmação pode ser dos seguintes tipos:<br><br>

Tipo | Sitaxe
--- | ---
Igualdade | ==
Diferença | !=
Maior | >
Menor | <
Maior ou igual | >=
Menor ou Igual | <=

&emsp;Um exemplo prático poderia ser a verificação de uma senha inserida pelo usuário:

```cpp
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
```

&emsp;No fim de uma estrutura condicional, é possível também ligar um `else` para indicar um "caso contrário", assim não precisamos fazer dois blocos condicinais.

```cpp
// Variável que guarda uma senha numérica do usuário
int senha_usuario = 4096;
int senha_correta = 1234;

// compara a senha do usuário com a senha correta, caso sejam iguais, exibir mensagem de acesso liberado
if (senha_usuario == senha_correta) {
    printf("acesso liberado!\n");
} else { // caso contrário
    printf("acesso negado! usuario não existe\n");
}
```

&emsp;E esse caso contrário pode conter um `if` por si mesmo para cobrir casos mais específicos.

```cpp
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
```

&emsp;É possível ter  mais de uma proposição desde que estejam ligadas por conectivos que relacionam elas, e estes conectivos são:<br><br>

Conectivo | Sintaxe
--- | ---
e | &&
ou | \|\|

## 7. Repetição
&emsp;Estruturas de repetição, como o nome diz, são blocos de código de irão se repetir uma determinada quantidade de vezes ao longo de seu código.<br><br>
&emsp;Existem três repetição na linguagem C: `for`, `while` e `do while`. Na maioria dos casos elas são intercambiavéis mas algumas situações são resolvidas mais facilmente com uma repetição específica.

### Repetição `while`
&emsp;Essa repetição funciona com base numa condição de `verdadeiro` ou `falso` apenas. Sua sintaxe é: `while (condição)`:
```cpp
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
```
&emsp;Resultado:
```bash
0
1
2
```
&emsp;No exemplo acima, o código dentro do `while` é repetido fazendo a incrementação do contador até que ele chegue em `10`, fazendo com que a condição `contador < 10` se torne `falso` e interrompendo assim a repetição.

> [!IMPORTANT]
> Perceba que se essa condição nunca chegar em `falso` o bloco do `while` se repetirá infinitamente. Isso pode acontecer caso o `contador` não seja incrementado, por exemplo, assim seu valor nunca será maior que `10` e sim sempre `0`.

### Repetição `for`
&emsp;O `for` é muito similar ao `while` exceto que ele possibilita a criação de uma variável contadora e incrementação na prórpia sintaxe.

```cpp
for (int contador = 0; contador < 2; ++contador) {
    printf("%d\n", contador);
}
```
&emsp;Resultado:
```bash
0
1
2
```

&emsp;O código de exemplo acima produz exatamente o mesmo resultado do exemplo apresentado sobre o `while`.

### Repetição `do while`
&emsp;Ao contrário das repetições anteriores que avaliam a condição antes de executar o código dentro do bloco, o `do while` executa primeiro e depois faz a avaliação.

```cpp
int contador = 0;

do {
    // contador é incrementado
    contador += 1;

    // exibe na tela
    printf("%d\n", contador);
} while (contador < 2); // avalia condição no final
```
&emsp;Resultado:
```bash
1
2
```

<p align="center">
<img width="720" height="480" alt="calouros_final" src="https://github.com/user-attachments/assets/f2f26563-93cf-4e64-9889-6afb95bf6277" />
</p>

[^1]: O `.` em `git add .` inclui todos os arquivos a serem rastreados. O `.` pode ser modificado pelo nome de um arquivo. Exemplo: Queremos rastrear o `arquivo.txt`, o comando será: `git add arquivo.txt`
[^2]: O `-m` significa "menssagem", ele classifica que tudo que vem em seguida dentro de aspas duplas será uma menssagem descrevendo aquele commit.
[^3]: Branches podem ter o nome que descreve o que será feito nela
[^4]: Nomes de variáveis *não podem* começar com números ou símbolos de pontuação.
