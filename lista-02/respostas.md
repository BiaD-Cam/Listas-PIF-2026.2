# Lista de Exercícios - Capítulo 2

---

### Questão 01. Truncamento de Tipos e Coerção Implícita — 
Um estudante do curso de ADS escreveu o programa em C abaixo visando entender o comportamento de variáveis e atribuições
de tipos incompatíveis. Analise o código, compile mentalmente ou em seu ambiente de desenvolvimento e responda às questões indicadas.

#include <stdio.h>

#include <stdlib.h>

int main() {

int valor_inteiro;

valor_inteiro = 2.97;

printf("O valor armazenado eh: %d\n", valor_inteiro);

system("PAUSE");

return 0;

}

a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse
programa?

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo
programador caso ele necessite arredondar o valor ou manter a precisão?

---

### Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas — 
Historicamente,literaturas de C utilizam funções unbuffered de entrada definidas na biblioteca legada e não-padrão <conio.h>, tais como getch() e getche(), para ler caracteres imediatamente sem exigir que o usuário pressione [ENTER]. Sob a perspectiva da portabilidade moderna da linguagem e do padrão
ANSI C:

a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos
(Linux, macOS, servidores)?

b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h>
para entrada e saída de caracteres?

c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira
robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.

---

### Questão 03. Formatação de Saída em Bases Numéricas e ASCII — 
A função de saída printf() oferece controle total sobre a representação dos dados na tela através de especificadores de
formato de base numérica. Desenvolva as instruções em C necessárias para realizar a seguinte tarefa:

Leia um único número inteiro fornecido pelo usuário e exiba uma única mensagem no console que mostre esse mesmo valor nas seguintes representações simultâneas: base decimal (%d), base
hexadecimal em caixa baixa (%x), base octal (%o) e o caractere correspondente à tabela ASCII (%c).

---

### Questão 04. Operadores de Atribuição Composta e Precedência — 
Os operadores de atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma atribuição
simultaneamente. Determine quais serão os valores das variáveis a, b, c e d após a execução sequencial completa das seguintes instruções de inicialização e atribuição em C. Justifique seus
cálculos apresentando a ordem de avaliação passo a passo:

int a = 1, b = 2, c = 3, d = 4;

a += b + c; // Valor final de a = ?

b *= c = d + 2; // Valores finais de b e c = ?

d %= a + a + a; // Valor final de d = ?

d -= c -= b -= a; // Valor final de d, c e b = ?

a += b += c += 7; // Valor final de a, b e c = ?

---

### Questão 05. Avaliação de Expressões Lógicas e Relacionais — 
Determine o resultado lógico (1 para verdadeiro, 0 para falso) de cada uma das expressões relacionais e lógicas a seguir,
assumindo que as variáveis foram inicializadas como: int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y= 4.4;. Consulte a tabela de precedência do Capítulo 2 de Viviane.

a) i < j + 3 => Resultado: ?

b) 2 * i - 7 <= j - 8 => Resultado: ?

c) -x + y >= 2.0 * y => Resultado: ?

d) x == y => Resultado: ?

e) !(n - j) => Resultado: ?

f) !n - j => Resultado: ?

g) i && j && k => Resultado: ?

h) i || j - 3 && k => Resultado: ?

i) i < j && 2 >= k => Resultado: ?

j) i == 2 || j == 4 || k == 5 => Resultado: ?

---

### Questão 06. Comportamento e Precedência dos Incrementos — 
O comportamento de incrementos prefixados e pós-fixados (++x e x++) é uma fonte frequente de erros sutis na Linguagem C. Analise os dois trechos de código independentes abaixo e responda:

// Trecho A

int n = 5;

int x = ++n;

printf("Trecho A: n = %d, x = %d\n", n, x);

// Trecho B

int m = 5;

int y = m++;

printf("Trecho B: m = %d, y = %d\n", m, y);

a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o
pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?

b) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas
vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique
por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do
compilador adotado (comportamento indefinido).