/*
Questão 27. Conversor de Temperaturas Modular - Crie as funções celsiusParaFahrenheit,
celsiusParaKelvin, fahrenheitParaCelsius e kelvinParaCelsius, todas com parâmetro e retorno
float. Na main(), apresente um menu, leia a escolha e a temperatura e exiba o valor convertido
com duas casas decimais usando a função correspondente.
*/

#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(void) {
    int opcao;
    float temp;

    printf("CONVERSOR DE TEMPERATURAS\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f F\n", celsiusParaFahrenheit(temp));
            break;
        case 2:
            printf("Resultado: %.2f K\n", celsiusParaKelvin(temp));
            break;
        case 3:
            printf("Resultado: %.2f C\n", fahrenheitParaCelsius(temp));
            break;
        case 4:
            printf("Resultado: %.2f C\n", kelvinParaCelsius(temp));
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

float celsiusParaFahrenheit(float c) {
    return (c * 9.0f / 5.0f) + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}
