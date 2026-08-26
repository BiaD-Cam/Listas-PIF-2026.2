# Lista de Exercicios - Capitulo 1

---

### Questao 04
Enunciado: O programa abaixo contem diversos erros de sintaxe e de compilacao. Identifique e explique cada um dos erros presentes no codigo:
#include <stdlib.h>;
int Main{}
(
  printf( Existem %d semanas no ano.,52);
  cout << endl;
)

Erros no codigo:
1. #include <stdlib.h>; 
Tem um ponto e virgula no final da linha do include. Nao se usa ponto e virgula em linhas que comecam com hashtag.

2. int Main{}
A palavra Main esta com M maiusculo e a linguagem C diferencia maiusculas de minusculas. O correto e main com m minusculo. Tambem usaram chaves {} no lugar de parenteses () para os parametros.

3. ( e )
Usaram parenteses para abrir e fechar o bloco do programa. O certo em C e usar chaves { e }.

4. printf( Existem %d semanas no ano.,52);
O texto dentro do printf precisa estar entre aspas duplas, assim: "Existem %d semanas no ano.".

5. cout << endl;
O comando cout e da linguagem C++, nao da linguagem C. Para pular linha em C se usa \n dentro do printf.

---

### Questao 05
Enunciado: O programa a seguir esta correto segundo o padrao ANSI C? Justifique sua resposta indicando os elementos ausentes:
main()
{
  printf("Testando um programa C\n");
}

Resposta: Nao esta correto.

Elementos ausentes:
1. Falta colocar a biblioteca #include <stdio.h> no comeco do arquivo para o comando printf funcionar direito.
2. Falta colocar o tipo int antes do main(), ficando int main().
3. Falta colocar o return 0; no final do programa para avisar o sistema que o programa deu certo.

---

### Questao 06
Enunciado: Identifique os erros de sintaxe e os erros de logica presentes no trecho de codigo a seguir:
int a=1; b=2; c=3:
printf("0s numeros sao: %d%d%d\n, a, b, c, d);

Erros de Sintaxe:
1. Na linha int a=1; b=2; c=3: o ponto e virgula depois do a=1 fez com que o b e o c nao fossem declarados como int. No final da linha usaram dois pontos : em vez de ponto e virgula ;.
2. No printf faltou fechar as aspas duplas depois do \n.
3. Escreveram 0s numeros usando o numero zero no lugar da letra O maiuscula.

Erros de Logica:
1. A variavel d foi colocada dentro do printf, mas ela nunca foi criada ou declarada no programa.
2. Tem 3 especificadores %d%d%d para 4 variaveis (a, b, c, d).
3. Nao colocaram espacos entre os %d, entao os numeros tao saindo todos colados no terminal.

---

### Questao 07
Enunciado: O que sera impresso na tela por cada uma das seguintes instrucoes printf?

a) printf("\n\tBom dia! Shirley.");
>   
>     Bom dia! Shirley.  
(Explicacao: O \n pula uma linha e o \t da um espaco de tabulacao antes de mostrar o texto).

b) printf("Voce ja tomou cafe? \n");
> Voce ja tomou cafe?   
>   
(Explicacao: Mostra a frase normal e o \n no final faz o cursor ir para a linha de baixo).

c) printf("\n\nA solucao nao existe!\nNao insista.");
>   
>   
> A solucao nao existe!  
> Nao insista.  
(Explicacao: O \n\n pula duas linhas, imprime a primeira frase, pula outra linha com \n e imprime a segunda frase).

d) printf("Duas\tlinhas\tde\tsaida\nou\tuma?");
> Duas    linhas    de    saida  
> ou    uma?  
(Explicacao: O \t da espacos entre as palavras da primeira linha. O \n quebra a linha depois de saida e o resto continua na linha de baixo com espacos \t).

e) printf("%s\n%s\n%s\n", "um", "dois", "tres");
> um  
> dois  
> tres  
(Explicacao: O %s troca pela palavra correspondente e o \n faz cada palavra ficar em uma linha separada).

---

### Questao 08
Enunciado: Qual e o resultado impresso na tela ao executar o seguinte trecho de codigo?
printf("\n\t\"Primeiro programa\"");

Saida na tela:
>   
>     "Primeiro programa"  

(Explicacao: O \n pula a linha, o \t empurra o texto para a direita e a barra com aspas \" serve para conseguir mostrar as aspas duplas na tela sem fechar o printf).

---

### Questao 09
Enunciado: O que acontece quando executamos o comando a seguir? Explique como o compilador interpreta os caracteres passados com %c:
printf("%c%c%cPrimeiro programa%c", '\n', '\t', '\"', '\"');

Saida na tela:
>   
>     "Primeiro programa"  

(Explicacao: O compilador le os caracteres entre aspas simples como codigos da tabela ASCII. O %c transforma esses codigos nas suas acoes ou simbolos no terminal, pulando linha com \n, dando espaco com \t e desenhando as aspas com \").

---

### Questao 10
Enunciado: A linguagem C e case-sensitive? O que isso significa na pratica para variaveis como peso, Peso e PESO?
a) Falso
b) Verdadeiro

Resposta: b) Verdadeiro

(Explicacao: A linguagem C diferencia letras maiusculas de minusculas. Isso significa que peso, Peso e PESO sao tres variaveis totalmente diferentes para o programa).

---

### Questao 11
Enunciado: Classifique cada uma das constantes a seguir indicando o seu tipo base em C (int, double, char, etc.):

| Constante | Classificacao | Tipo Base em C |
| :--- | :--- | :--- |
| \r | Caractere de controle | char |
| 2130 | Numero inteiro decimal | int |
| -123 | Numero inteiro negativo | int |
| 33.28 | Numero com ponto decimal | double |
| 0XFA | Numero hexadecimal | int |
| 0101 | Numero octal | int |
| 2.0e30 | Notacao cientifica | double |
| \xDC | Caractere hexadecimal | char |
| '\"' | Caractere de aspas | char |
| '\\' | Caractere de barra | char |
| 'F' | Caractere simples | char |
| 0 | Numero inteiro zero | int |
| '\0' | Caractere nulo | char |
| "F" | Texto ou String | char[] |
| -4567.89 | Numero decimal negativo | double |

---

### Questao 12
Enunciado: Indique se as seguintes declaracoes de variaveis em C estao corretas (C) ou incorretas (I). Justifique as incorretas:

| Instrucao | Status | Justificativa |
| :--- | :--- | :--- |
| a) int a; | Correto | Esta certo, declara um numero inteiro. |
| b) float b; | Correto | Esta certo, declara um numero decimal. |
| c) double float c; | Incorreto | Nao pode usar double e float juntos na mesma variavel. |
| d) unsigned char d; | Correto | Esta certo, declara um caractere sem sinal. |
| e) unsigned e; | Correto | Esta certo, o C entende que e um unsigned int. |
| f) long float f; | Incorreto | Nao se usa long float em C moderno, usa-se double. |
| g) long g; | Correto | Esta certo, o C entende que e um long int. |
| h) long double h; | Correto | Esta certo, declara um decimal com muita precisao. |

---

### Questao 13
Enunciado: O que sao arquivos de cabecalho (header files) com extensao .h na linguagem C?
a) Arquivos executaveis compilados previamente.
b) Arquivos de imagem usados na interface grafica.
c) Arquivos de texto contendo declaracoes de funcoes e constantes de bibliotecas.
d) Arquivos do sistema operacional.

Resposta: c) Arquivos de texto contendo declaracoes de funcoes e constantes de bibliotecas.

---

### Questao 14
Enunciado: Qual e a principal funcao da inclusao do arquivo <stdio.h> em um programa C?
a) Permitir o uso de funcoes de entrada e saida como printf e scanf.
b) Alocar memoria dinamicamente para o programa.
c) Limpar a tela do console automaticamente.
d) Definir os tipos basicos de dados da linguagem.

Resposta: a) Permitir o uso de funcoes de entrada e saida como printf e scanf.

---

### Questao 15
Enunciado: O que e a instrucao #include em um codigo escrito em C?
a) Uma funcao da biblioteca padrao.
b) Uma variavel global do sistema.
c) Uma diretiva lida pelo pre-processador antes de compilar o codigo.
d) Um operador logico da linguagem.

Resposta: c) Uma diretiva lida pelo pre-processador antes de compilar o codigo.

---

### Questao 16
Enunciado: Qual componente do compilador e responsavel por processar as diretivas iniciadas pelo caractere # antes da traducao do programa?
a) Linker (Ligador)
b) Assembler
c) Pre-processador
d) Interpretador

Resposta: c) Pre-processador

---

### Questao 17
Enunciado: Analise as instrucoes a seguir e explique o conceito de formato livre (free-form) da linguagem C:
a) printf ( "Primeiro programa" );
b) printf( "Primeiro programa" );
c) printf("Primeiro programa");
d) printf "Primeiro programa" ;

Analise das opcoes:
As opcoes a, b e c estao corretas. A opcao d esta errada porque falta colocar os parenteses na chamada do printf.

Conclusão:
Isso mostra que C e uma linguagem de formato livre. O compilador nao se importa com espacos em branco extras entre as palavras e parenteses, desde que as regras basicas como usar parenteses e fechar com ponto e virgula sejam cumpridas.