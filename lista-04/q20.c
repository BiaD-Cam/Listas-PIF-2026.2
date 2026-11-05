/*
Questao 20. Resolucao da Equacao do Segundo Grau (Formula de Bhaskara) -- Desenvolva um programa em C para calcular as raizes de uma equacao do segundo grau ax^2 + bx + c = 0. O programa le os coeficientes a, b e c (garantindo a != 0). Calcule o delta (Delta = b^2 - 4ac) e exiba o resultado apropriado:
* Se Delta < 0: 'A equacao nao possui raizes reais.'
* Se Delta == 0: Calcule e exiba a raiz unica x = -b / (2a).
* Se Delta > 0: Calcule e exiba as duas raizes reais distintas x1 e x2 usando sqrt().
*/

#include <stdio.h> 
#include <math.h>  // Inclui a biblioteca matematica para utilizar sqrt()

int main() {
    float a, b, c, delta, x1, x2; 

    printf("Digite o coeficiente a (diferente de zero): "); 
    scanf("%f", &a); 

    if (a == 0.0) { 
        printf("Erro: O coeficiente 'a' deve ser diferente de zero em uma equacao do 2o grau!\n"); 
        return 0; 
    }

    printf("Digite o coeficiente b: "); 
    scanf("%f", &b); 

    printf("Digite o coeficiente c: "); 
    scanf("%f", &c); 

    delta = (b * b) - (4.0 * a * c); 

    printf("Valor de Delta: %.2f\n", delta); 

    if (delta < 0.0) { 
        printf("A equacao nao possui raizes reais.\n"); 
    } else if (delta == 0.0) { 
        x1 = -b / (2.0 * a); 
        printf("A equacao possui uma raiz real unica: x = %.2f\n", x1); 
    } else { 
        x1 = (-b + sqrt(delta)) / (2.0 * a); 
        x2 = (-b - sqrt(delta)) / (2.0 * a); 
        printf("A equacao possui duas raizes reais distintas:\n");
        printf("x1 = %.2f\n", x1); 
        printf("x2 = %.2f\n", x2); 
    }

    return 0; 
}