#include <stdio.h>
#include <stdlib.h>

int main() {
    int totalSegundos, horas, minutos, segundos, resto;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    resto = totalSegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d segundos equivalem a: %d hora(s), %d minuto(s) e %d segundo(s).\n", 
           totalSegundos, horas, minutos, segundos);

    return 0;
}