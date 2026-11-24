/*
Questão 23. Macro versus Função - Defina a macro #define DOBRO(x) x*2 e a função int
dobro(int x). Na main(), chame ambas com o argumento 2+3 imprima os resultados e
explique em comentário por que eles diferem. Em seguida, corrija a macro com parênteses
de proteção e teste novamente.
*/

#include <stdio.h>

#define DOBRO(x) x * 2

int dobro(int x);

int main(void) {
    /*Explicação: Sem parenteses de proteção, DOBRO(2 + 3) sofre substituição textual direta para 2 + 3 * 2. Pela precedencia de operadores, a multiplicação see dá antes da soma: 2 + 6 = 8. Já a funcao dobro(2 + 3) avalia o argumento primeiro (5) e depois multiplica por 2, retornando 10.
     */
    printf("Macro DOBRO(2 + 3) sem parenteses: %d\n", DOBRO(2 + 3));
    printf("Funcao dobro(2 + 3): %d\n", dobro(2 + 3));

    /* Redefinindo a macro com parenteses de protecao */
    #undef DOBRO
    #define DOBRO(x) ((x) * 2)

    printf("Macro DOBRO(2 + 3) corrigida com parenteses: %d\n", DOBRO(2 + 3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
