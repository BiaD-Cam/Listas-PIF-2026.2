# Lista de Exercícios – Capítulo 5: Funções (Parte I: Questões Teóricas e Analíticas)

---

Questão 01

### Anatomia de uma Função e o Papel do Protótipo Observe o programa abaixo:

#include <stdio.h>
float celsius (float);
int main() {
    float c, f = 100.0;
    c = celsius(f);
    printf("Celsius = %.2f \n", c);
    return 0;
}
float celsius (float fahr) {
    return (fahr - 32.0)*5.0/9.0;
}


a) Identifique no código o protótipo, a chamada e a definição da função celsius(). Explique o papel de cada uma dessas três etapas.
b) Qual é a função do protótipo para o compilador? O que aconteceria, em termos de verificação de parâmetros, se ele fosse omitido e a função fosse definida depois da main()?
c) Qual é o tipo da função celsius()? Explique por que o tipo de uma função é determinado pelo valor retornado e não pelos parâmetros recebidos.

R:

a)

Protótipo: float celsius (float); (linha 2). Papel: informa antecipadamente ao compilador a assinatura da função (nome, tipo de retorno e tipos dos parâmetros) antes que ela seja utilizada.

Chamada: c = celsius(f); (linha 5). Papel: invoca a execução da função passando o argumento f e atribui o valor retornado à variável c.

Definição: float celsius (float fahr) { return (fahr - 32.0)*5.0/9.0; } (linhas 9 a 11). Papel: contém o bloco de implementação real com as instruções que a função executará quando for chamada.

b) O protótipo permite que o compilador valide a compatibilidade de tipos entre os argumentos passados na chamada e os parâmetros esperados, além de garantir que o valor de retorno seja tratado corretamente (neste caso, como float). Se o protótipo fosse omitido e a função definida após a main(), o compilador não conheceria a assinatura no momento da chamada: em padrões antigos (C89) ele assumiria retorno implícito int (causando erro de compilação ou conflito de tipos ao encontrar a definição float depois) e não faria a checagem de tipos nem conversões implícitas corretas dos argumentos; em padrões modernos (C99/C11+), emitiria aviso ou erro de declaração implícita.

c) O tipo da função celsius() é float. O tipo de uma função é determinado pelo valor retornado porque, em uma expressão (como c = celsius(f);), a chamada da função é avaliada e substituída pelo resultado que ela devolve. Assim, o compilador precisa saber o tipo desse resultado para alocar registradores/memória adequados e validar atribuições ou operações matemáticas onde a chamada está inserida.

---

Questão 02

### O Comando return e suas Limitações
Analise os trechos a seguir:

int calcular(int a, int b, int c) {
    int soma = a + b + c;
    int media = soma / 3;
    return soma, media;
}
void imprime_mensagem(int erro) {
    if (erro < 0) {
        printf("Erro invalido\n");
        return;
    }
    printf("Codigo processado: %d\n", erro);
}


a) Quantos valores uma função em C pode devolver por meio do comando return? O que o programador pretendia fazer na função calcular() e por que a abordagem não cumpre esse objetivo?
b) Qual é o efeito do comando return; dentro da função void imprime_mensagem()? Ele é obrigatório no final de uma função void? Justifique.
c) Reescreva a função calcular() para que ela retorne apenas a média dos três valores. Em seguida, crie uma segunda função, separada, que retorne apenas a soma. Explique por que, em C, precisamos de duas funções para devolver dois resultados diferentes quando usamos apenas o comando return.

R:

a) Uma função em C pode devolver apenas um único valor por meio do comando return. Na função calcular(), o programador pretendia retornar dois valores simultaneamente (soma e media). A abordagem falha porque, em C, a vírgula atua como o operador vírgula (comma operator), que avalia a primeira expressão (soma), descarta seu resultado, avalia a segunda expressão (media) e retorna apenas o valor desta última.

b) O comando return; dentro de imprime_mensagem() encerra imediatamente a execução da função e devolve o controle para a função chamadora, evitando que o segundo printf seja executado quando erro < 0. Ele não é obrigatório no final de uma função void, pois, ao atingir a chave de fechamento }, a função void encerra sua execução automaticamente sem precisar devolver nenhum valor.

c) Código reescrito:

int calcular(int a, int b, int c) {
    int soma = a + b + c;
    int media = soma / 3;
    return media;
}

int somar(int a, int b, int c) {
    return a + b + c;
}


Explicação: Como a linguagem C suporta apenas um tipo de retorno escalar (ou estrutura) por função através do return, não possuindo retorno múltiplo nativo como tuplas em Python, ao utilizar exclusivamente passagem por valor e return, cada resultado independente precisa ser calculado e devolvido por sua própria função.\

---

Questão 03

### Funções void, Parâmetros e Assinaturas - Considere os três protótipos abaixo:

void exibe_mensagem (char* msg);
int obter_codigo(void);
void limpar_tela(void);


a) Classifique cada protótipo quanto à existência de parâmetros de entrada e de valor de retorno.
b) Qual é a diferença prática entre uma função com retorno e um procedimento (função void)? Dê um exemplo de situação em que cada um é a escolha mais adequada.
c) Uma chamada como x = limpar_tela(); é válida? Justifique com base no tipo da função.

R:

a)

void exibe_mensagem (char* msg);: Possui parâmetro de entrada (um ponteiro para caractere / string char* msg) e não possui valor de retorno (void).

int obter_codigo(void);: Não possui parâmetros de entrada (void na lista de parâmetros) e possui valor de retorno (do tipo int).

void limpar_tela(void);: Não possui parâmetros de entrada (void) e não possui valor de retorno (void).

b) Na prática, uma função com retorno produz um dado calculado ou obtido que será usado posteriormente pelo código chamador (em atribuições, condicionais ou cálculos), enquanto um procedimento (void) executa apenas uma ação ou efeito colateral (como imprimir na tela ou alterar um estado externo) sem devolver um dado.

Exemplo com retorno: Calcular o imposto de um salário (float calcula_imposto(float salario)), pois o valor resultante precisa ser subtraído do salário bruto.

Exemplo void: Exibir um cabeçalho ou relatório formatado na tela (void imprime_relatorio(void)), pois o objetivo é apenas a saída visual.

c) Não, a chamada x = limpar_tela(); é inválida e gerará um erro de compilação. Como o tipo de retorno de limpar_tela() é void (ausência de valor), a função não produz nenhum dado que possa ser avaliado e armazenado na variável x.

---

Questão 04

### Recursão: Caso Base, Passo Recursivo e Pilha de Execução Analise a função recursiva:

long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}


a) Identifique o caso base e o passo recursivo. O que aconteceria se o caso base fosse removido?
b) Faça o rastreamento completo da chamada fatorial (4), mostrando a fase de empilhamento e a fase de desempilhamento, com o valor devolvido por cada chamada.
c) Explique, em termos de pilha de execução, o que acontece na memória a cada chamada recursiva e por que uma recursão sem caso base pode causar falha no programa.

R:

a)

Caso base: (n == 0) ? (long)1 (quando n é igual a 0, a função retorna 1 diretamente sem chamar a si mesma).

Passo recursivo: (long)n * fatorial(n - 1) (quando n != 0, a função multiplica n pelo resultado da chamada recursiva para n - 1).

Se o caso base fosse removido: A função entraria em recursão infinita (fatorial(0) chamaria fatorial(-1), fatorial(-2), e assim sucessivamente), nunca parando de realizar chamadas até esgotar a memória da pilha de execução (Stack Overflow), causando o encerramento abrupto do programa.

b) Rastreamento de fatorial(4):

Fase de Empilhamento (ida):

fatorial(4) aguarda 4 * fatorial(3)

fatorial(3) aguarda 3 * fatorial(2)

fatorial(2) aguarda 2 * fatorial(1)

fatorial(1) aguarda 1 * fatorial(0)

fatorial(0) atinge o caso base

Fase de Desempilhamento (volta):

fatorial(0) devolve 1

fatorial(1) calcula 1 * 1 e devolve 1

fatorial(2) calcula 2 * 1 e devolve 2

fatorial(3) calcula 3 * 2 e devolve 6

fatorial(4) calcula 4 * 6 e devolve 24

c) A cada chamada recursiva, o sistema operacional aloca um novo stack frame (quadro de pilha) na região de memória chamada Call Stack (pilha de execução), armazenando os parâmetros locais, variáveis daquela instância e o endereço de retorno para onde o programa deve voltar após o término da chamada. Como o espaço reservado para a pilha de execução é finito, uma recursão sem caso base empilha stack frames indefinidamente sem nunca desempilhá-los, ultrapassando o limite de memória da pilha (Stack Overflow) e provocando uma falha de segmentação (Segmentation Fault) que encerra o processo.

--- 

Questão 05

### Diretiva #define, Constantes e Macros com Argumentos - Analise o código:

#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2
int main() {
    printf("%d\n", SQR(2+3));
    printf("%d\n", DOBRO(2+3));
    return 0;
}


a) Qual será a saída de cada printf? Explique por que SQR e DOBRO se comportam de maneira diferente, relacionando o resultado ao uso de parênteses de proteção.
b) Por que a diretiva #define não termina com ponto e vírgula? Por que, por convenção, usamos identificadores em maiúsculas?
c) Explique por que #define PRN (n) printf("%d", n) está incorreto e qual é a forma correta. Aponte também uma diferença entre uma macro com argumentos e uma função comum.

R:

a)

Saída de SQR(2+3): 25

Saída de DOBRO(2+3): 8

Explicação: O pré-processador faz substituição textual literal antes da compilação. Em SQR(2+3), os parênteses de proteção ao redor de x garantem a expansão ((2+3)*(2+3)) = 5 * 5 = 25. Já em DOBRO(2+3), a ausência de parênteses ao redor do parâmetro gera a expansão textual 2+3*2. Pela precedência de operadores em C, a multiplicação ocorre antes da soma (2 + 6), resultando em 8 em vez de 10.

b) O #define não termina com ponto e vírgula porque o pré-processador substitui literalmente tudo o que vem após o identificador no código-fonte; se houvesse um ;, ele seria colado no meio de expressões (ex.: int x = PI * 2; viraria int x = 3.14; * 2;), gerando erro de sintaxe. Usamos identificadores em maiúsculas por convenção para diferenciá-los visualmente de variáveis e funções comuns, alertando o programador de que se trata de uma substituição textual do pré-processador (sujeita a efeitos colaterais).

c) O trecho #define PRN (n) printf("%d", n) está incorreto porque existe um espaço em branco entre o nome da macro PRN e o parêntese de abertura (n). Para o pré-processador, esse espaço faz com que PRN seja interpretado como uma macro sem argumentos cujo corpo começa com (n) printf(...), causando erro de sintaxe ao ser chamado. A forma correta (sem espaço) é:

#define PRN(n) printf("%d", n)


Diferença entre macro e função: Uma macro realiza substituição textual direta no código-fonte durante o pré-processamento (não possui verificação de tipos de parâmetros, não gera chamada na pilha de execução e pode avaliar argumentos mais de uma vez se repetidos no corpo), enquanto uma função comum é compilada como um bloco de código único em memória, possui tipagem estrita e avalia seus argumentos apenas uma vez antes de passá-los por valor.

---

Questão 06

### Diretivas #include, #undef e Compilação Condicional - Considere o trecho:

#include <stdio.h>
#include "areas.h"
#define SOMA(x,y) ((x)+(y))
#undef SOMA
#ifdef DEBUG
    printf("Modo de depuracao\n");
#else
    printf("Modo normal\n");
#endif


a) Qual é a diferença entre #include <stdio.h> e #include "areas.h"? Em que situação usamos cada sintaxe?
b) Qual é o efeito de #undef SOMA? Por que a forma #undef SOMA(x,y) está incorreta?
c) Se DEBUG não foi definido, qual mensagem será impressa? Explique em que momento (pré-processamento ou execução) essa decisão é tomada e por que as diretivas não aparecem no executável final.

R:

a) A diferença está nos diretórios onde o pré-processador busca o arquivo de cabeçalho:

#include <stdio.h> (com sinais de menor e maior): instrui o pré-processador a buscar o arquivo apenas nos diretórios padrão do sistema/compilador. Usamos para bibliotecas padrão da linguagem C ou bibliotecas instaladas no sistema.

#include "areas.h" (com aspas duplas): instrui o pré-processador a buscar o arquivo primeiramente no diretório atual do projeto (onde está o arquivo .c) e, caso não encontre, recorrer aos diretórios padrão do sistema. Usamos para cabeçalhos criados pelo próprio programador dentro do projeto.

b) O comando #undef SOMA remove (cancela) a definição da macro SOMA da tabela do pré-processador a partir daquela linha, tornando-a indefinida dali em diante. A forma #undef SOMA(x,y) está incorreta porque a sintaxe da diretiva #undef exige apenas o identificador (nome) da macro a ser removida, não aceitando lista de parâmetros.

c) Se DEBUG não foi definido, será impressa a mensagem Modo normal. Essa decisão é tomada na fase de pré-processamento (antes mesmo da compilação propriamente dita). As diretivas não aparecem no executável final porque o pré-processador atua como um filtro de texto que processa todas as linhas iniciadas com #, inclui/exclui os trechos condicionais (#ifdef/#else/#endif) e entrega ao compilador apenas o código C puro resultante, o qual será traduzido para código de máquina.