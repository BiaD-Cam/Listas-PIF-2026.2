/*
Questao 19. Validacao de Condicao de Existencia e Tipo de Triangulo -- Crie um programa em C que leia tres valores reais A, B e C representando os lados de um triangulo. O programa deve primeiramente verificar a condicao de existencia: cada lado deve ser menor que a soma dos outros dois (A < B + C e B < A + C e C < A + B). Caso seja um triangulo valido, classifique-o em:
* Equilatero: todos os tres lados iguais;
* Isosceles: quaisquer dois lados iguais;
* Escaleno: todos os tres lados diferentes.
Se os lados nao formarem um triangulo, exiba 'Erro: Os lados fornecidos nao formam um triangulo!'.
*/

#include <stdio.h> 

int main() {
    float a, b, c; 

    printf("Digite os tres lados do triangulo (A B C): "); 
    scanf("%f %f %f", &a, &b, &c); 

    if ((a < b + c) && (b < a + c) && (c < a + b)) { 
        printf("Os lados informados formam um triangulo valido.\n"); 

        if (a == b && b == c) { 
            printf("Classificacao: Triângulo Equilatero\n");        
        } else if (a == b || a == c || b == c) { 
            printf("Classificacao: Triângulo Isosceles\n");        
        } else { 
            printf("Classificacao: Triângulo Escaleno\n");        
        }
    } else { 
        printf("Erro: Os lados fornecidos nao formam um triângulo!\n"); 
    }

    return 0; 
}