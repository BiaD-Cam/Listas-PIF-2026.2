/*
Questão 12. Tabela de Conversão de Temperaturas (Celsius, Fahrenheit e Kelvin) Crie um
programa que imprima uma tabela de conversão de temperaturas de 0°C a 100°C com variação de 5
em 5 graus Celsius. Para cada valor em Celsius, o programa deve calcular e exibir os valores
equivalentes em Fahrenheit (F=(9*C)/5+32) e Kelvin (K=C+273.15) utilizando formatação
alinhada com duas casas decimais.
*/

#include <stdio.h>

int main() {
    int C;
    double F, K;

    printf(" CELSIUS (°C) | FAHRENHEIT (°F) | KELVIN (K)\n");

    for (C = 0; C <= 100; C += 5) {
        F = (9.0 * C) / 5.0 + 32.0;
        K = C + 273.15;
        printf("   %d °C     |   %.2f °F     |  %.2f K\n", C, F, K);
    }

    return 0;
}