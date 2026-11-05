/*
Questao 11. Ordenacao Crescente de Tres Valores Numericos -- Escreva um programa em C que leia tres numeros inteiros fornecidos pelo usuario e os exiba em ordem estritamente crescente (do menor para o maior). Utilize estruturas de decisao para comparar e ordenar os valores sem usar vetores.
*/

#include <stdio.h> 

int main() {
    int a, b, c, temp; 

    printf("Digite tres numeros inteiros separados por espacos: "); 
    scanf("%d %d %d", &a, &b, &c); 

    if (a > b) { // Se 'a' for maior que 'b', realiza a troca de valores
        temp = a; // Guarda 'a' 
        a = b; // Atribui 'b' a 'a'
        b = temp; // Restaura o valor para 'b'
    }

    if (a > c) { // Se o novo 'a' for maior que 'c', realiza a troca
        temp = a; // Guarda 'a' temporariamente
        a = c; // Atribui 'c' a 'a'
        c = temp; // Restaura o valor para 'c'
    }

    if (b > c) { // Se 'b' for maior que 'c', realiza a troca
        temp = b; // Guarda 'b' temporariamente
        b = c; // Atribui 'c' a 'b'
        c = temp; // Restaura o valor guardado para 'c'
    }

    printf("Valores em ordem crescente: %d, %d, %d\n", a, b, c); 

    return 0; 
}