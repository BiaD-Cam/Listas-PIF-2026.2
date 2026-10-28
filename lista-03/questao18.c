/*
Questão 18. Inversão de Digitos de um Número Inteiro (Algoritmo Numérico) Elabore um
programa que solicite ao usuário um número inteiro positivo (ex: 12345) e construa um novo
número inteiro com os dígitos em ordem inversa (ex: 54321). Dica: utilize um laço enquanto o número for maior que zero, extraindo o último dígito com o operador resto (%) e reduzindo o número com a divisão inteira (/).
*/

#include <stdio.h>

int main() {
    int numero, temp, digito;
    long long int numero_invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &numero) != 1 || numero < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    temp = numero;
    while (temp > 0) {
        digito = temp % 10;
        numero_invertido = (numero_invertido * 10) + digito;
        temp /= 10;
    }

    printf("Numero original: %d\n", numero);
    printf("Numero invertido: %lld\n", numero_invertido);

    return 0;
}