# Respostas Teóricas - Lista do Capítulo 3 (PIF 2026.2)

## Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços
A linguagem C disponibiliza três estruturas de controle para execução iterativa de código: for, while e do-while. Analise o funcionamento dessas estruturas e responda:
a) Qual é a diferença essencial entre as estruturas while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento em que a condição de teste é avaliada?
b) Em que situações de programação cada uma das três estruturas (for, while e do-while) se apresenta como a escolha mais elegante, legível e adequada?
c) Análise de código: O trecho 'while (condicao);' (com ponto-e-vírgula ao final) é um erro de compilação ou um erro de lógica? Explique detalhadamente o que ocorre durante a execução se condicao for verdadeira.

R:
a) A diferença essencial está no momento de avaliação do teste condicional:
   - while: Estrutura com pré-teste. A condição é avaliada antes de qualquer execução do bloco. Se a condição for falsa na primeira verificação, o bloco não executa nenhuma vez (mínimo de 0 execuções).
   - do-while: Estrutura com pós-teste. O bloco de código é executado primeiro e a condição é testada no final. Assim, o bloco é executado pelo menos uma vez (mínimo de 1 vez).

b) Aplicações adequadas para cada estrutura:
   - for: É a escolha ideal para laços de repetição contada, nos quais o número de iterações é conhecido antes do início da execução (ex.: percorrer um intervalo de 1 a 100).
   - while: É ideal para repetições condicionais em que não se sabe previamente quantas iterações serão necessárias e existe a possibilidade do bloco nem precisar de ser executado (ex.: leitura de dados até encontrar um marcador sentinela).
   - do-while: É ideal quando a ação precisa de ser realizada obrigatoriamente pelo menos uma vez antes do teste de continuidade (ex.: menus de opção e validações de dados de entrada do utilizador).

c) É um erro de lógica (e não de compilação). O ponto e vírgula imediatamente após o while cria uma instrução nula como corpo do laço. Se condicao for verdadeira, o programa entrará num laço infinito a testar repetidamente a condição sem nunca executar o bloco subsequente ou avançar no programa.


## Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco
Um estudante escreveu o programa abaixo com o intuito de calcular a soma dos quadrados dos números inteiros de 1 a 9, mas encontrou falhas durante a compilação e execução:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    for (i = 1; i < 10; i++) {
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

a) Por que o compilador emitirá um erro de sintaxe/declaração na instrução printf final?
b) Mesmo que a instrução printf fosse movida para dentro do bloco do laço for, por que o valor impresso para soma estaria conceitualmente incorreto a cada iteração?
c) Apresente o código corrigido e explique o conceito de visibilidade, escopo de bloco e tempo de vida de variáveis na linguagem C.

R: a) A variável soma foi declarada no interior do bloco do laço for, possuindo escopo de bloco. Como a instrução printf está posicionada fora desse bloco, a variável soma já não está visível nem acessível nesse ponto, originando um erro de compilação por identificador não declarado.b) Porque a instrução int soma = 0; ficaria dentro do laço, fazendo com que a cada iteração a variável fosse recriada e reinicializada a zero. Dessa forma, a variável guardaria apenas o quadrado do número (i^2), perdendo o acumulado das iterações anteriores.c) Código corrigido:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; 

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    return 0;
}

## Questão 03. Flexibilidade do Laço for e Omissão de Expressões
A sintaxe do laço for em C consiste em três expressões separadas por ponto-e-vírgulas: inicialização, teste e incremento. Analise os três trechos de código abaixo:
// Trecho A: Incremento por divisão
for (a = 36; a > 0; a /= 2)
printf("%d\t", a);
// Trecho B: Omissão de inicialização e incremento
for (; (ch = getch()) != 'X' ;)
printf("%c", ch + 1);
// Trecho C: Omissão completa de expressões
for (;;)
printf("Laço Infinito\n");

a) Qual é a sequência exata de valores impressos no console ao executar o Trecho A?
b) Explique o comportamento do Trecho B. O que faz a operação 'ch + 1' e por que os
parênteses em '(ch = getch())' são estritamente necessários antes da comparação com 'X'?
c) Como o programa pode interromper a execução do laço infinito do Trecho C de forma
programática sem forçar o encerramento do processo pelo sistema operacional?

R: a) Sequência impressa no consola: 36    18    9    4    2    1. (São realizadas divisões inteiras sucessivas por 2 até que 1/2 = 0, violando a condição a > 0).
b) O Trecho B realiza a leitura de caracteres do teclado até que a tecla 'X' seja premida:A expressão ch + 1 pega no valor numérico ASCII do caractere lido e imprime o caractere imediatamente seguinte da tabela ASCII.Os parênteses em (ch = getch()) são obrigatórios porque o operador != possui maior precedência do que o operador de atribuição =. Sem os parênteses, o programa avaliaria primeiro getch() != 'X', como resultado, um valor booleano (0 ou 1) que seria depois atribuído a ch.
c) A execução do laço for (;;) pode ser interrompida utilizando o comando break dentro do if, ou usando return ou exit().

## Questão 04. Comandos de Desvio de Fluxo: break vs. continue
Os comandos break e
continue são instruções de controle de desvio que alteram a execução normal de laços de
repetição:
a) Descreva a ação exata executada pelo programa quando o comando break é acionado
dentro de um laço for ou while.
b) Descreva a ação exata executada pelo programa quando o comando continue é acionado
dentro de um laço for. Qual das três expressões do cabeçalho do for é executada
imediatamente após o continue?
c) Em uma estrutura de laços aninhados (um laço for interno dentro de outro laço for externo),
qual laço é interrompido quando a instrução break é executada dentro do laço interno?

R:a) O comando break encerra a execução da estrutura de repetição onde está, e o fluxo de execução segue para a primeira instrução após o laço.

b) O comando continue ignora as restantes instruções do corpo do laço para a iteração atual e avança para a iteração seguinte. Num laço for, a expressão de incremento/atualização é executada imediatamente após o continue.

c) Apenas o laço onde o break está inserido é interrompido. O laço externo continua o seu processamento normal.

## Questão 05. Operador Vírgula e Múltiplas Variáveis de Controle
Operador Vírgula e Múltiplas Variáveis de Controle — O operador vírgula (,)
permite agrupar múltiplas expressões em um único comando, garantindo a avaliação da esquerda
para a direita. Observe o trecho abaixo:
int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
a) Exatamente quantas iterações o laço acima executará antes de ser encerrado?
b) Escreva a saída exata produzida pelo comando printf em cada uma das iterações
executadas.
c) Reescreva a lógica deste mesmo laço utilizando obrigatoriamente a estrutura while.

R: a) O laço executará exatamente 5 iterações.

b) Saída:
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c) Reescrita com a estrutura while:

#include <stdio.h
int main() {
    int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
return 0;
}

## Questão 06. Laço Sem Corpo e Incremento Pós-fixado
Analise o trecho de código abaixo que utiliza um laço de repetição com corpo vazio:
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);

a) Qual é o valor final da variável x que será impresso pela instrução printf?
b) Explique passo a passo a sequência de incrementos e comparações lógicas que ocorrem durante a execução do teste 'x++ < 5'.
c) Reescreva esse código de forma explícita e clara (sem corpo vazio), mantendo exatamente o mesmo resultado final de x.

R: a) O valor final de x será 6.

b) Passo a passo da execução:

1: x começa em 0. Avalia 0 < 5 (Verdadeiro). x é incrementado para 1.
2: Avalia 1 < 5 (Verdadeiro). x é incrementado para 2.
3: Avalia 2 < 5 (Verdadeiro). x é incrementado para 3.
4: Avalia 3 < 5 (Verdadeiro). x é incrementado para 4.
5: Avalia 4 < 5 (Verdadeiro). x é incrementado para 5.
6: Avalia 5 < 5 (Falso). Devido ao operador de pós-incremento ++, a variável x é incrementada para 6 e a condição falha, encerrando o laço.

c) CÓDIGO:

#include <stdio.h>
int main (){
int x = 0;
while (x < 5) {
    x++;
}
x++; 
printf("Valor final de x = %d\n", x);
return 0;
}