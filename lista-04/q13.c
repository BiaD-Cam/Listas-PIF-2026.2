/*
Questao 13. Calculadora Aritmetica e Cientifica com Menu switch -- Crie um programa em C que apresente um menu para o usuario escolher entre as operacoes: + (Soma), - (Subtracao), * (Multiplicacao), / (Divisao) e ^ (Potenciacao usando pow()). Em seguida, o programa le os dois operandos reais, realiza o calculo selecionado via switch-case e exibe o resultado formatado. Caso a operacao seja divisao, valide para impedir divisao por zero.
*/

#include <stdio.h> 
#include <math.h>  

int main() {
    char operacao; 
    double num1, num2, resultado; 

    printf("Escolha a operacao (+, -, *, /, ^): "); // Exibe o menu de opções
    scanf(" %c", &operacao); 

    printf("Digite o primeiro operando: "); 
    scanf("%lf", &num1); 

    printf("Digite o segundo operando: ");
    scanf("%lf", &num2); 

    switch (operacao) {
        case '+': 
            resultado = num1 + num2; 
            printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado); 
            break;   
        case '-': 
            resultado = num1 - num2;
            printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);    
            break;   
        case '*': 
            resultado = num1 * num2; 
            printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);    
            break;   
        case '/': 
            if (num2 != 0.0) { // Valida se o divisor é diferente de zero
                resultado = num1 / num2; 
                printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);    
            } else { 
                printf("Erro: Divisao por zero não é permitida!\n"); 
            }
            break;   
        case '^': 
            resultado = pow(num1, num2); 
            printf("Resultado: %.2lf ^ %.2lf = %.2lf\n", num1, num2, resultado);    
            break;   
        default: 
            printf("Erro: Operacao inválida!\n"); 
            break;   
    }

    return 0; 
}