/*
Questao 18. Conversor Multidirecional de Escalas Termometricas -- Desenvolva um programa que apresente um menu de opcoes de conversao de temperatura:
1. Celsius para Fahrenheit (F = C * 1.8 + 32)
2. Celsius para Kelvin (K = C + 273.15)
3. Fahrenheit para Celsius (C = (F - 32) / 1.8)
4. Kelvin para Celsius (C = K - 273.15)
O programa deve ler a escolha do usuario via switch-case, solicitar a temperatura de entrada e exibir o valor convertido com duas casas decimais.
*/

#include <stdio.h> 

int main() {
    int opcao; 
    float temp_entrada, temp_convertida; 

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: "); 
    scanf("%d", &opcao); 

    switch (opcao) {
        case 1: 
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp_entrada); 
            temp_convertida = (temp_entrada * 1.8) + 32.0;       
            printf("%.2f Celsius = %.2f Fahrenheit\n", temp_entrada, temp_convertida);      
            break;     
        case 2: 
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp_entrada); 
            temp_convertida = temp_entrada + 273.15;       
            printf("%.2f Celsius = %.2f Kelvin\n", temp_entrada, temp_convertida);      
            break;     
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp_entrada); 
            temp_convertida = (temp_entrada - 32.0) / 1.8;       
            printf("%.2f Fahrenheit = %.2f Celsius\n", temp_entrada, temp_convertida);      
            break;     
        case 4: 
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temp_entrada); 
            temp_convertida = temp_entrada - 273.15;       
            printf("%.2f Kelvin = %.2f Celsius\n", temp_entrada, temp_convertida);      
            break;     
        default: 
            printf("Erro: Opção de conversão inválida!\n"); 
            break;    
    }

    return 0; 
}