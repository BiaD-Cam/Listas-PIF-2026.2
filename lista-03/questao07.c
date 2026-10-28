/*
Questão 07. Contagem Progressiva em Três Versões (for, while, do-while) — Desenvolva três  mprogramas independentes (ou três funções no mesmo arquivo) que mostrem na tela os números  inteiros de 0 a 100 em ordem crescente. A primeira versão deve utilizar obrigatoriamente o laço for, a  segunda versão a estrutura while, e a terceira versão a estrutura do-while. Em comentário ao final do 
código, responda: qual das três estruturas é a mais adequada para este caso e por quê?
*/

/* #include <stdio.h>

1. for() {
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
}

2. while() {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

3. do-while() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

return 0;
}

/*
A estrutura 'for' é a mais adequada, pois o programa tem iteração contada e conhecidos à partida (de 0 a 100 com passo 1).
*/