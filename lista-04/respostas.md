# Lista de Exercicios - Capitulo 4: Comandos de decisão

### Questao 01 Avaliacao de Expressoes Condicionais e atribuição vs. Igualdade 
Em relacao a sintaxe e semantica do comando if na Linguagem C, responda analiticamente:
a) Qual e o efeito pratico de escrever if (x = 0) em vez de if (x == 0)? Explique o que acontece com a variavel x e qual bloco de codigo será executado.
b) Como a Linguagem C interpreta valores numericos inteiros ou reais dentro da condição do comando if? O que significa um resultado ser avaliado como 'falso' ou 'verdadeiro'?
c) Analise a instrução if (x = -5) e determine se o bloco de codigo associado será executado ou ignorado. Justifique sua resposta com base no padrao ANSI C.

R:
a) Escrever if (x = 0) faz com que ocorra uma atribuição em vez de uma comparação. O valor 0 é atribuido a variavel x, alterando o seu conteudo na memoria. Como o resultado dessa expressão de atribuição é o proprio valor atribuido (0), a Linguagem C interpreta 0 como o booleano falso. Com isso, o bloco condicional do if é ignorado e nunca é executado. Já no caso de if (x == 0), é realizada uma comparação relacional: se o valor de x for igual a 0, a condição resulta em 'verdadeiro' (1) e o bloco do if é executado sem alterar x.

b) Na Linguagem C não existe um tipo booleano nativo no padrao ANSI C original. O compilador interpreta o valor numerico 0 como 'falso'. Qualquer valor numerico diferente de zero, seja ele positivo ou negativo, é avaliado e interpretado como 'verdadeiro'.

c) No caso de if (x = -5), primeiro o valor -5 é atribuido a variavel x. Em seguida, o resultado dessa atribuição (-5) é avaliado pela estrutura condicional. Como -5 é um valor numerico diferente de zero, a Linguagem C o interpreta como 'verdadeiro'e o bloco de codigo do if será executado.

---

### Questao 02 Associacao do Comando else e Aninhamento de Decisoes 
Analise o trecho de codigo C abaixo que contem estruturas condicionais aninhadas:
int x = 15, y = 5;
if (x > 10)
    if (y > 10)
        printf("Opção A\n");
else
    printf("Opção B\n");

a) Qual mensagem será impressa no console ao executar o codigo acima? Justifique por que a Opção B e ou não exibida.
b) Qual é a regra oficial da Linguagem C para associar uma clausula else a um comando if em codigos sem chaves de bloco?
c) Reescreva o codigo acima utilizando chaves {} para garantir explicitamente que a Opção B seJá impressa apenas quando x <= 10.

R:
a) Nenhuma mensagem será impressa, pois o valor de x é 15, e como o primeiro if (x > 10) é verdadeiro, a execução entra no seu bloco. Porém, o segundo if (y > 10) é falso (pois y é 5). Como o else no codigo está associado ao segundo if, a "Opção B" não e executada.

b) A regra oficial da Linguagem C estabelece que, na ausencia de chaves {}, o else é sempre associada ao comando if mais proximo que esteja sem um else.

c) Reescrita do codigo com chaves {}:
#include <stdio.h>
int main() {
    int x = 15, y = 5;
    if (x > 10) {
        if (y > 10) {
            printf("Opção A\n");
        }
    } else {
        printf("Opção B\n");
    }
    return 0;
}


### Questao 03 Operador Condicional Ternario vs. Estrutura if-else 
O operador condicional ternario (?:) e uma forma concisa de tomada de decisão. Observe a instrução abaixo:
media = (nota1 + nota2) / 2.0;
situacao = (media >= 7.0) ? 'A' : 'R';

a) Explique detalhadamente o funcionamento da segunda linha de codigo e qual valor será armazenado na variavel situacao se media = 6.8.
b) Reescreva o trecho de codigo acima utilizando obrigatoriamente a estrutura tradicional if-else.
c) O operador ternario pode substituir qualquer estrutura if-else na Linguagem C? Explique as limitações do operador ternario em relacao a blocos com multiplos comandos.

R:
a) A segunda linha avalia a expressão media >= 7.0. Se o resultado for verdadeiro, o operador retorna o caractere 'A' , caso contrario, retorna somente 'R'. Como media é igual a 6.8, a condição é falsa e a variavel situacao recebe o caractere 'R'.

b) Reescrita com if-else tradicional:
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}

c) O operador ternario não pode substituir qualquer estrutura if-else. Ele é um operador de expressão projetado para retornar um unico valor diretamente. Ele possui limitações quando o fluxo de decisão exige a execução de blocos com vários comandos, instruções de controle complexas ou chamadas de funções com retorno void.

### Questao 04 Selecao Multipla com switch-case e Efeito Fall-Through 
O comando switch e utilizado para selecao entre multiplas alternativas. Observe o programa a seguir:
#include <stdio.h>
int main() {
    int codigo = 2;
    switch (codigo) {
        case 1:
            printf("Bronze\n");
        case 2:
            printf("Prata\n");
        case 3:
            printf("Ouro\n");
        default:
            printf("Sem Medalha\n");
            break;
    }
    return 0;
}

a) Escreva a saida exata gerada no terminal ao executar este programa. Explique por que ocorreu mais de uma impressão.
b) Qual e o papel da instrução break dentro de um bloco switch-case e qual e o nome do fenomeno que ocorre quando ela é omitida?
c) Quais tipos de dados de variaveis ou expressoes podem ser utilizados como argumento no comando switch (expressão)? E permitido usar float ou double? Justifique.

R:
a) Saida exata gerada no terminal:
Prata
Ouro
Sem Medalha

Ocorreu mais de uma impressão porque o codigo entra no case 2, e como não há break ao final dos blocos case 2 e case 3, o programa continua executando todas as instruções seguintes em sequencia ate encontrar um break no default.

b) A instrução break serve para interromper a execução da estrutura switch-case assim que um caso é concluido, saltando para fora do bloco. Quando o break é omitido, ocorre o fenômeno chamado fall-through.

c) O comando switch aceita apenas tipos de dados inteiros ou compativeis com valores inteiros (int, char, short, long, enum). Não é permitido utilizar float ou double, pois valores reais possuem imprecisão de valor binario e não representam valores exatos.

### Questao 05 Avaliacao de Curto-Circuito em Operadores Logicos 
Os operadores logicos (&& e ||) realizam a avaliacao de curto-circuito (short-circuit evaluation). Considere as variaveis inteiras a = 0, b = 5, c = 10 e analise o codigo:
if (a != 0 && ++b > 5)
    c += 10;
else
    c -= 2;
printf("a = %d, b = %d, c = %d\n", a, b, c);

a) Qual será a saida exata impressa pelo comando printf? Observe se o incremento ++b foi executado ou ignorado.
b) Explique o conceito de avaliacao de curto-circuito para o operador logico E (&&) e para o operador logico OU (||).
c) Qual seria o valor final de b e c se a condição fosse alterada para if (a == 0 || ++b > 5)?

R:
a) Saida:
a = 0, b = 5, c = 8

O incremento ++b foi ignorado devido ao curto-circuito. Como a != 0 e falso (pois a é 0), a segunda parte do operador && não é avaliada.

b) No operador logico E (&&), se o primeiro case for avaliado como falso (0), a expressão inteira é garantida como falsa, fazendo com que o segundo operando nem seja avaliado. No operador logico OU (||), se o primeiro operando for avaliado como verdadeiro (diferente de 0), a expressão inteira e garantida como verdadeira, fazendo com que o segundo operando tambem não seja avaliado.

c) Se a condição fosse alterada para if (a == 0 || ++b > 5), como a == 0 e verdadeiro (1), o curto-circuito do || impediria considerar o ++b. Com isso, b permaneceria valendo 5. O bloco do if seria executado (c += 10), fazendo c passar de 10 para 20. Os valores finais seriam b = 5 e c = 20.

### Questao 06 Construcoes else-if e Analise Logica de Intervalos 
Um programador escreveu o codigo abaixo para classificar a faixa etaria de um individuo, mas o programa apresenta comportamento inconsistente para certas idades:
int idade = 65;
if (idade >= 60)
    printf("Idoso\n");
if (idade >= 18)
    printf("Adulto\n");
if (idade >= 12)
    printf("Jovem\n");
else
    printf("Criança\n");

a) Qual será a saida do programa para idade = 65? Explique por que multiplas mensagens são exibidas.
b) Qual e a diferenca fundamental de execução entre uma sequencia de comandos if independentes e uma cadeia else-if?
c) Reescreva o programa utilizando a estrutura elegante e correta else-if para garantir que apenas uma categoria seja impressa.

R:
a) Saida do programa para idade = 65:
Idoso
Adulto
Jovem

Multiplas mensagens são exibidas porque os tres comandos if foram escritos de forma independente. Como 65 é maior ou igual a 60, 18 e 12, as três condicoes aparecem.

b) Em comandos if independentes, o programa é obrigado a testar todas as condicoes de forma individual. Em uma cadeia else-if, assim que a primeira condição e verdadeira, o seu bloco é executado e todas as demais condicoes seguintes são descartadas.

c) Reescrita do programa utilizando a estrutura else-if:
#include <stdio.h>
int main() {
    int idade = 65;
    if (idade >= 60) {
        printf("Idoso\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    } else if (idade >= 12) {
        printf("Jovem\n");
    } else {
        printf("Criança\n");
    }
    return 0;
}