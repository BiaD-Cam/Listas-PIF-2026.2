/*
Questão 10. Resto da Divisão (%) e Decomposição do Tempo - Desenvolva um programa
em C que receba uma quantidade inteira de segundos informada pelo usuário. O programa
deve calcular e exibir o tempo equivalente decomposto em Horas, Minutos e Segundos
restantes (Exemplo: 3665 segundos correspondem a 1 hora, 1 minuto e 5 segundos).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_segundos, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    if (scanf("%d", &total_segundos) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n", 
           total_segundos, horas, minutos, segundos);

    return 0;
}