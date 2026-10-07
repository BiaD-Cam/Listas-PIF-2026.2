# Respostas Teóricas - Simulado 1ª Unidade (PIF 2026.2)

## Questão 01. Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C (Cap. 1)
A linguagem C diferencia rigorosamente letras maiúsculas e minúsculas na formação de nomes de identificadores e palavras-chave. Com base nessa premissa, analise os pares de identificadores abaixo e assinale a alternativa correta:
a) Os nomes de variáveis 'numero' e 'Numero' referenciam o mesmo endereço de memória.
b) A palavra-chave 'Main' com 'M' maiúsculo é reconhecida pelo compilador como ponto de entrada válido.
c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente distintos para o compilador.
d) A sensibilidade a caixa baixa/alta depende exclusivamente do sistema operacional utilizado na compilação.

R: Letra C). Por que a Linguagem C é nativamente case-sensitive. 'numero' e 'Numero' são duas variáveis diferentes na memória, e a função principal deve ser obrigatoriamente escrita em caixa baixa (main).

## Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)
Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com quebras de linha e tabulações, mas enfrentou erros de compilação. Identifique os três erros sintáticos/estruturais presentes no código:
#include <stdio.h>
#include <stdlib.h>;
int Main()
{
int idade = 20
printf( A idade do aluno eh: %d anos.., idade);
}
cout << endl;
system("PAUSE");
return 0;

R: Ponto e vírgula após include, int Main está com o M em maiúsculo e a chave de fechamento } foi colocada antes do final do programa, deixando comandos fora do bloco da função.

## Questão 03. Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2)
Os operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser combinados com operadores aritméticos. Determine os valores finais de a, b, c e d após a execução da sequência abaixo:
int a = 2, b = 4, c = 5, d = 10;
a += b + c; // Valor final de a = ?
b *= c = d - 2; // Valores finais de b e c = ?
d %= a + 3; // Valor final de d = ?
a += b += c += 5; // Valores finais de a, b e c = ?

R: 1. a += b + c; 
 a = 2 + (4 + 5) -> a = 11.

2. b *= c = d - 2;
c = d - 2 -> c = 10 - 2 -> c = 8.
b *= 8 -> b = 4 * 8 -> b = 32.

3. d %= a + 3;
d %= (11 + 3) -> 10 % 14 -> d = 10.

4. a += b += c += 5
c += 5 -> c = 8 + 5 -> c = 13.
b += 13 -> b = 32 + 13 -> b = 45.
a += 45 -> a = 11 + 45 -> a = 56.

Valor Final: a = 56 ; b = 45 ; c = 13 ; d = 10

## Questão 04. Avaliação de Expressões Lógicas, Relacionais e Precedência (Cap. 2)
Considere as variáveis inteiras i = 2, j = 3, k = 0 e as variáveis de ponto flutuante x = 2.5, y = 5.0. Avalie cada expressão abaixo e determine seu resultado lógico em C (1 para Verdadeiro, 0 para Falso):

a) i < j + 2
b) 2 * i - 5 <= j - 4
c) !k && (x + y >= 7.5)
d) !(i == j) || (y / x == 2.0)
e) i == 2 && j == -4 || k == 0

R: a) 2 < 3 + 2 -> 2 < 5 -> 1 (Verdadeiro)
b) 2*2 - 5 <= 3 - 4 -> -1 <= -1 -> 1 (Verdadeiro)
c) !0 && (2.5 + 5.0 >= 7.5) -> 1 && (7.5 >= 7.5) -> 1 && 1 -> 1 (Verdadeiro)
d) !(2 == 3) || (5.0 / 2.5 == 2.0) -> !0 || (2.0 == 2.0) -> 1 || 1 -> 1 (Verdadeiro)
e) (2 == 2 && 3 == -4) || 0 == 0 -> (1 && 0) || 1 -> 0 || 1 -> 1 (Verdadeiro)

## Questão 05. Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3) 
As estruturas de repetição permitem a execução iterativa de instruções em C. Analise as características de
for, while e do-while e responda fundamentadamente:
a) Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do
bloco de código e ao momento do teste condicional?
b) Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?
c) O trecho de código 'while (condicao);' (com ponto-e-vírgula ao final do cabeçalho) constitui um erro de
compilação ou de lógica? O que acontece se condicao for verdadeira?

R: a) O laço while realiza o condicional no início, podendo executar o bloco 0 ou mais vezes. Já o do-while realiza o teste ao final, garantindo que o bloco seja executado no mínimo 1 vez.
b) O laço for é preferível quando o número de iterações é previamente conhecido, pois agrupa a inicialização, a condição de parada e o incremento em uma única linha.
c) Constitui um erro de lógica. O ponto e vírgula representa um corpo nulo. Se condicao for verdadeira, o programa entrará em um laço infinito sem executar nenhum bloco posterior.

## Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3)
Analise o programa abaixo que calcula a soma acumulada de quadrados dentro de um laço for contendo um comando de desvio e controle de escopo interno:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

a) Por que o compilador emitirá um erro de compilação na instrução printf final?
b) Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e break no fluxo?
c) Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no console.

R: a) A variável soma foi declarada no escopo interno do bloco for. Ao tentar acessar ela fora desse bloco na instrução printf, o compilador gera erro de variável não declarada. Além disso, mesmo dentro do laço, ela estaria sendo reinicializada em 0 a cada iteração.

b) O laço iteraria para i = 1, 2, 3, 4, 5, 6, 7, 8:
i = 5: O continue pula o cálculo e vai para a próxima iteração (i = 6).
i = 8: O break interrompe e encerra precocemente a execução do laço for.
As iterações que efetivamente somam valores são: i = 1, 2, 3, 4, 6, 7.

c) #include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada fora do laço

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    return 0;
}

Resultado fica: 1^2 + 2^2 + 3^2 + 4^2 + 6^2 + 7^2 = 1 + 4 + 9 + 16 + 36 + 49 = 115
Soma final = 115