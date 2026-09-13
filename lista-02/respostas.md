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

R: 2

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?

R: A atribuição da variável do tipo int faz o programa retornar um valor inteiro, o que significa que o programa ignora o valor .97

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo
programador caso ele necessite arredondar o valor ou manter a precisão?

R: Ao invés de usar int, utilizar float ou double.

---

### Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas — 
Historicamente,literaturas de C utilizam funções unbuffered de entrada definidas na biblioteca legada e não-padrão <conio.h>, tais como getch() e getche(), para ler caracteres imediatamente sem exigir que o usuário pressione [ENTER]. Sob a perspectiva da portabilidade moderna da linguagem e do padrão
ANSI C:

a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos
(Linux, macOS, servidores)?

R: A biblioteca <conio.h> nao faz parte do padrao ANSI C. Ela e uma biblioteca legada criada especificamente para os sistemas de Windows antigo.

b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h>
para entrada e saída de caracteres?

R: Para entrada de caracteres, pode-se utilizar getchar() e para saída putchar(). 

c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira
robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.

R: 

#include <stdio.h>

int main() {
    char b:

    printf("Digite um caractere: ");
    scanf(" %c", &b);

    printf("Caractere escolhido: %c\n", b);
    return 0;
}

---

### Questão 03. Formatação de Saída em Bases Numéricas e ASCII — 
A função de saída printf() oferece controle total sobre a representação dos dados na tela através de especificadores de
formato de base numérica. Desenvolva as instruções em C necessárias para realizar a seguinte tarefa:

Leia um único número inteiro fornecido pelo usuário e exiba uma única mensagem no console que mostre esse mesmo valor nas seguintes representações simultâneas: base decimal (%d), base
hexadecimal em caixa baixa (%x), base octal (%o) e o caractere correspondente à tabela ASCII (%c).

R: 

#include <stdio.h>

int main() {
    int numero;

    printf("Escolha seu número inteiro: " );

    scanf(" %d, %x, %o, %c ", &numero);

    printf("Seu número na base decimal: %d\nSeu número na base hexadecimal: %x\nSeu número na base octal: %o\nSeu número de acordo com a tabela ASCII: %c\n", numero, numero, numero, numero);

    return 0;
}

---

### Questão 04. Operadores de Atribuição Composta e Precedência — 
Os operadores de atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma atribuição
simultaneamente. Determine quais serão os valores das variáveis a, b, c e d após a execução sequencial completa das seguintes instruções de inicialização e atribuição em C. Justifique seus
cálculos apresentando a ordem de avaliação passo a passo:

int a = 1, b = 2, c = 3, d = 4;

a += b + c; // Valor final de a = 6, pois o programa irá somar os valores de b e c e somente após o resultado ser somado com o valor de a 

b *= c = d + 2; // Valores finais de b e c são: b = 12, c = 6, pois primeiro irá realizar o d + 2, que com a igualdade faz o c virar 6, e com o c = 6, se multiplica com o valor antigo de b e vira b = 12 e o a = 6 e o d = 4

d %= a + a + a; // Valor final de d = 4, pois o somatório de a = 18 e dividido pelo d sendo 4 anteriormente, o d =4

d -= c -= b -= a; // Valor final de d, c e b são: a = 6, b = 6, c = 0, d = 4, pois contando com os valores anteriores e diminuindo cada fator da direta para esquerda, viram os valores acima

a += b += c += 7; // Valor final de a, b e c são: a =  19, b =  13, c =  7, d =  4, pois o d continua no valor na equação de cima, o c acresce 7, o b acresce do novo valor de c, e o a aumenta mais o valor atual de b.

---

### Questão 05. Avaliação de Expressões Lógicas e Relacionais — 
Determine o resultado lógico (1 para verdadeiro, 0 para falso) de cada uma das expressões relacionais e lógicas a seguir,
assumindo que as variáveis foram inicializadas como: int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y= 4.4;. Consulte a tabela de precedência do Capítulo 2 de Viviane.

a) i < j + 3 => Cálculo: 1 < 5
Resultado: 1 

b) 2 * i - 7 <= j - 8 => Cálculo: -5 <= -6
Resultado: 0

c) -x + y >= 2.0 * y => Cálculo: 1.1 >= 8.8
Resultado: 0

d) x == y => Cálculo: 3.3 == 4.4
Resultado: 0

e) !(n - j) => Cálculo: !0 => !0
Resultado: 1

f) !n - j => Cálculo: -2 => -2
Resultado: 1

g) i && j && k => Cálculo: 1 && 2 $$ 3
Resultado: 1

h) i || j - 3 && k => Cálculo: 1 || ((2 - 3) && 3)
Resultado: 1

i) i < j && 2 >= k => Cálculo: 1 && 0
Resultado: 0

j) i == 2 || j == 4 || k == 5 => Cálculo: 0 || 0 || 0
Resultado: 0

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

a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?

R: No operador prefixado (++n), o incremento da variavel acontece antes de o seu valor ser usado na expressao ou atribuicao. No Trecho A, n vira 6 e depois esse valor 6 e atribuido a x.
No operador pos-fixado (m++), o valor atual da variavel e usado na expressao primeiro e o incremento so ocorre depois. No Trecho B, o valor original 5 e atribuido a y e depois a variavel m passa a valer 6. Trecho A: n = 6, x = 6 e Trecho B: m = 6, y = 5

b) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do
compilador adotado (comportamento indefinido).

R: Em C, alguns compiladores avaliam os argumentos da esquerda para a direita, enquanto outros avaliam da direita para a esquerda. Alterar a mesma variavel com n++ ao mesmo tempo em que ela é lida em outros argumentos gera resultados que mudam dependendo do compilador ou da plataforma utilizada.