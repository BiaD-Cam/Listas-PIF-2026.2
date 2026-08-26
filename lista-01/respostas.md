# Lista de Exercícios - Capítulo 1
---
### Questão 05
Analise o seguinte trecho de código em C. Sob a perspectiva do padrão ANSI C, o
programa está correto para compilação e execução imediata? Caso negativo, descreva quais elementos
cruciais e diretivas estão faltando no código abaixo:

main()
{
    printf("Linguagem C");
    system("pause");
}

Resposta: Não, o programa não está correto para compilação e execução imediata sob a perspectiva do padrão ANSI C.

1. **Diretivas de Cabeçalho (Headers):** Faltam as diretivas `#include <stdio.h>` (necessária para a função `printf`) e `#include <stdlib.h>` (necessária para a função `system`).
2. **Declaração do Tipo de Retorno:** No padrão ANSI C (e C99/C11 em diante), a função `main()` deve especificar explicitamente seu tipo de retorno, usando `int main()`.
3. **Instrução de Retorno:** O bloco da função deve conter a instrução `return 0;` ao final para indicar ao sistema operacional que a execução foi concluída com sucesso.

---

### Questão 06
Identifique e liste todos os erros de sintaxe (que violam as regras da linguagem C) e de
lógica contidos no programa abaixo:

main()
{
int a=1; b=2; c=3:
printf("0s números são: %d%d%d\n, a, b, c, d);
system("pause");
}

**Erros de Sintaxe:**
1. `int a=1; b=2; c=3:` — O ponto e vírgula `;` encerra a declaração do tipo `int` apenas para `a`, tornando `b` e `c` não declaradas. Além disso, a instrução termina com dois pontos `:` em vez de `;`.
2. `printf("0s números são: %d%d%d\n, a, b, c, d);` — Falta fechar as aspas duplas `"` da string de formato antes da vírgula.
3. Caractere ordinal incorreto: O texto utiliza o numeral `0` no lugar da letra `O` maiúscula em `"0s números"`.

**Erros de Lógica:**
1. **Variável não declarada:** A variável `d` é passada como argumento no `printf()`, mas nunca foi declarada na memória.
2. **Incompatibilidade de formatadores:** Existem 3 especificadores `%d%d%d` para 4 variáveis fornecidas (`a`, `b`, `c`, `d`).
3. **Falta de espaçamento visual:** Ausência de espaços entre os especificadores `%d`, o que fará com que os números sejam exibidos colados no terminal.

---

### Questão 07
Descreva a saída exata (incluindo quebras de linha e tabulações) que será impressa no
console por cada uma das seguintes instruções independentes do printf():

a) printf("\n\tBom dia! Shirley.");
b) printf("Você já tomou café? \n");
c) printf("\n\nA solução não existe!\nNão insista.");
d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
e) printf("%s\n%s\n%s\n", "um", "dois", "três");

**Saída exata produzida por cada instrução `printf()`:**

* **a)** `printf("\n\tBom dia! Shirley.");`
> &nbsp;  
> &nbsp;&nbsp;&nbsp;&nbsp;Bom dia! Shirley.  
*(Explicação: Pula uma linha inicial com `\n`, avança uma tabulação horizontal com `\t` e imprime a frase).*

* **b)** `printf("Você já tomou café? \n");`
> Você já tomou café?   
> &nbsp;  
*(Explicação: Imprime a frase mantendo o espaço final e salta para a linha seguinte com `\n`).*

* **c)** `printf("\n\nA solução não existe!\nNão insista.");`
> &nbsp;  
> &nbsp;  
> A solução não existe!  
> Não insista.  
*(Explicação: Insere duas quebras de linha `\n\n`, imprime a primeira frase, insere nova quebra `\n` e exibe a segunda frase).*

* **d)** `printf("Duas\tlinhas\tde\tsaída\nou\tuma?");`
> Duas&nbsp;&nbsp;&nbsp;&nbsp;linhas&nbsp;&nbsp;&nbsp;&nbsp;de&nbsp;&nbsp;&nbsp;&nbsp;saída  
> ou&nbsp;&nbsp;&nbsp;&nbsp;uma?  
*(Explicação: Imprime palavras separadas por tabulações `\t`, realiza a quebra de linha após `saída` e retoma a impressão tabulada na linha de baixo).*

* **e)** `printf("%s\n%s\n%s\n", "um", "dois", "três");`
> um  
> dois  
> três  
*(Explicação: Substitui cada `%s` pelo respectivo literal de texto e aplica a quebra de linha `\n` após cada elemento).*

---

### Questão 08
Explique detalhadamente o comportamento do programa abaixo quando executado no
console. Apresente qual será a saída exata gerada pelas sequências de escape utilizadas no formato de
controle:

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n\t\"Primeiro programa\"");
system("PAUSE");
return 0;
}

**Comportamento e Saída Exata:**  
O programa utiliza a sequência de escape `\"` para informar ao compilador que o caractere de aspas duplas deve ser exibido visualmente no console, sem que isso represente o fechamento da string. 

> &nbsp;  
> &nbsp;&nbsp;&nbsp;&nbsp;"Primeiro programa"  
*(Explicação: O caractere `\n` pula para a linha seguinte, `\t` aplica a tabulação e `\"` envolve a frase em aspas duplas).*

---

### Questão 09
Determine a saída exata do programa a seguir e explique como o compilador C
interpreta os argumentos do tipo caractere simples ('\n', '\t', '\"') passados para o modificador %c:

#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
}

**Saída Exata:**
> &nbsp;  
> &nbsp;&nbsp;&nbsp;&nbsp;"Primeiro programa"  

**Interpretação do Compilador:**  
O compilador C interpreta delimitadores com aspas simples (como `'\n'`, `'\t'`, `'\"'`) como constantes do tipo caractere (`char`), representadas por seus respectivos códigos numéricos na tabela ASCII. Quando o modificador `%c` é utilizado, o `printf()` converte esse valor numérico e envia ao console a instrução gráfica correspondente (quebra de linha para `'\n'`, tabulação para `'\t'` e o caractere visual para `'\"'`).

---

### Questão 10
A Linguagem C é conhecida por ser sensível a caixa alta e baixa (case sensitive). Explique
o significado prático desse conceito. Identificadores como 'peso', 'Peso' e 'PESO' representam a mesma
variável na memória? Assinale a alternativa correta e complemente com sua justificativa:
a) Depende exclusivamente da implementação do compilador utilizado no sistema.
b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).
c) Falso (letras maiúsculas e minúsculas são interpretadas como equivalentes pelo compilador).

**Resposta:** **b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).**

**Justificativa:** Ser *case-sensitive* significa que o compilador diferencia caracteres maiúsculos de minúsculos durante a análise léxica, pois eles possuem códigos ASCII distintos. Dessa forma, as identificadores `peso`, `Peso` e `PESO` são tratados pelo sistema como três variáveis completamente diferentes, alocadas em endereços de memória separados.

---

### Questão 11
Para cada um dos valores constantes descritos na tabela abaixo, indique a classificação
correta (por exemplo: constante inteira decimal, constante de ponto flutuante, constante de caractere,
constante string ou sequência de escape) e o tipo de dado base correspondente em C (como char, int,
float, double):

Constante Classificação (Tipo de Constante) Tipo Base em C
\r [ Preencher ] [ Preencher ]
2130 [ Preencher ] [ Preencher ]
-123 [ Preencher ] [ Preencher ]
33.28 [ Preencher ] [ Preencher ]
0XFA [ Preencher ] [ Preencher ]
0101 [ Preencher ] [ Preencher ]
2.0e30 [ Preencher ] [ Preencher ]
\xDC [ Preencher ] [ Preencher ]
'\"' [ Preencher ] [ Preencher ]
'\\' [ Preencher ] [ Preencher ]
'F' [ Preencher ] [ Preencher ]
0 [ Preencher ] [ Preencher ]
'\0' [ Preencher ] [ Preencher ]
"F" [ Preencher ] [ Preencher ]
-4567.89 [ Preencher ] [ Preencher ]

| Constante | Classificação (Tipo de Constante) | Tipo Base em C |
| :--- | :--- | :--- |
| `\r` | Sequência de escape (Caractere de controle) | `char` |
| `2130` | Constante inteira decimal | `int` |
| `-123` | Constante inteira decimal negativa | `int` |
| `33.28` | Constante de ponto flutuante | `double` |
| `0XFA` | Constante inteira hexadecimal | `int` |
| `0101` | Constante inteira octal | `int` |
| `2.0e30` | Constante de ponto flutuante em notação científica | `double` |
| `\xDC` | Sequência de escape hexadecimal | `char` |
| `'\"'` | Constante de caractere simples | `char` |
| `'\\'` | Constante de caractere simples | `char` |
| `'F'` | Constante de caractere simples | `char` |
| `0` | Constante inteira decimal | `int` |
| `'\0'` | Sequência de escape (Caractere nulo) | `char` |
| `"F"` | Constante de string (cadeia de caracteres) | `char[]` / `char *` |
| `-4567.89` | Constante de ponto flutuante negativa | `double` |

---

### Questão 12
A declaração de variáveis define o tipo e o identificador de cada espaço reservado na
memória. Analise cada uma das declarações na tabela a seguir, preencha o seu status (Correto ou
Incorreto) e, caso seja incorreto, justifique detalhadamente o erro sintático:

Instrução Status (C/I) Justificativa Teórica
a) int a; [ Correto / Incorreto ] [ Preencher ]
b) float b; [ Correto / Incorreto ] [ Preencher ]
c) double float c; [ Correto / Incorreto ] [ Preencher ]
d) unsigned char d; [ Correto / Incorreto ] [ Preencher ]
e) unsigned e; [ Correto / Incorreto ] [ Preencher ]
f) long float f; [ Correto / Incorreto ] [ Preencher ]
g) long g; [ Correto / Incorreto ] [ Preencher ]
h) long double h; [ Correto / Incorreto ] [ Preencher ]

| Instrução | Status (C/I) | Justificativa Teórica |
| :--- | :--- | :--- |
| **a) `int a;`** | **Correto** | Declaração válida para tipo inteiro simples. |
| **b) `float b;`** | **Correto** | Declaração válida para ponto flutuante de precisão simples. |
| **c) `double float c;`** | **Incorreto** | Combinação inválida. `double` e `float` são tipos primitivos concorrentes. |
| **d) `unsigned char d;`** | **Correto** | Declaração válida de caractere sem sinal (faixa de 0 a 255). |
| **e) `unsigned e;`** | **Correto** | Sintaxe válida. O compilador assume o tipo `int` por omissão (`unsigned int`). |
| **f) `long float f;`** | **Incorreto** | Combinação obsoleta/inválida no padrão C moderno (deve-se utilizar `double`). |
| **g) `long g;`** | **Correto** | Sintaxe válida. O compilador assume o tipo `int` por omissão (`long int`). |
| **h) `long double h;`** | **Correto** | Declaração válida para ponto flutuante de precisão estendida. |

---

### Questão 13
No desenvolvimento de programas em C, o que são conceitualmente os arquivos de
inclusão (headers com extensão .h)?
a) São bibliotecas pré-compiladas em formato binário contendo funções estruturadas.
b) São utilitários do sistema que realizam a linkedição dos programas.
c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e
tipos.
d) São módulos de controle executados diretamente pelo microprocessador em tempo de execução.

**Resposta:** **c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.**

---

### Questão 14
Qual é o papel e o objetivo principal do programador ao incluir arquivos de cabeçalho
(como <stdio.h>)?
a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o
código-fonte.
b) Linkeditar os arquivos binários do projeto automaticamente.
c) Executar e testar as saídas de vídeo diretamente no console de depuração.
d) Converter automaticamente o código-fonte C em arquivos executáveis (.EXE).

**Resposta:** **a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.**

---

### Questão 15
A diretiva #include, amplamente utilizada no topo dos arquivos C, é classificada como:
a) Uma instrução C nativa (compilada diretamente em linguagem de máquina).
b) Uma instrução específica de linguagens de programação orientadas a objetos.
c) Uma diretiva especial para o pré-processador C, executada antes da compilação.
d) Um objeto de classe de armazenamento dinâmico na memória heap.

**Resposta:** **c) Uma diretiva especial para o pré-processador C, executada antes da compilação.**

---

### Questão 16
As diretivas de pré-processador em C (todas iniciadas com o caractere #) são lidas e
interpretadas pelo:
a) Linkeditor do sistema no momento de montagem do arquivo executável final.
b) Microprocessador diretamente em tempo de execução.
c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).
d) Depurador integrado da IDE durante os testes de execução.

**Resposta:** **c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).**

---

### Questão 17
Dentre as instruções de escrita abaixo, quais estão sintaticamente corretas? O que essas
variações demonstram sobre a flexibilidade de espaçamento e formatação do compilador C?
a) printf ( "Primeiro programa" );
b) printf( "Primeiro programa" );
c) printf("Primeiro programa");
d) printf "Primeiro programa" ;

**Análise das Instruções:**
* **a)** `printf ( "Primeiro programa" );` — **Correta.**
* **b)** `printf( "Primeiro programa" );` — **Correta.**
* **c)** `printf("Primeiro programa");` — **Correta.**
* **d)** `printf "Primeiro programa" ;` — **Incorreta.** A chamada de função em C exige obrigatoriamente a utilização de parênteses `()` envolvendo os argumentos.

**Conclusão:**  
Essa variação demonstra que a Linguagem C é de **formato livre (*free-form*)**. O compilador ignora caracteres de espaço em branco adicionais (espaços, tabulações, quebras de linha) inseridos entre identificadores, operadores e parênteses, desde que a estrutura sintática básica da instrução seja respeitada.