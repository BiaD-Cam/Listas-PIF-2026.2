/*
Questão 27. Simulador de Caixa Eletrônico (Decomposição de Cédulas) - Escreva um programa
que simule o saque de um caixa eletrônico. O usuário informa o valor do saque em reais (número
inteiro positivo). O programa deve calcular e exibir a menor quantidade de cédulas de R$ 100, R$ 50,
R$ 20, R$ 10, R$ 5 e R$ 2 necessárias para compor o valor. Utilize laços de repetição para efetuar as
subtrações sucessivas.
*/

#include <stdio.h>

int main() {
    int valor, temp;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do levantamento/saque em R$: ");
    if (scanf("%d", &valor) != 1 || valor <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    temp = valor;

    while (temp >= 100) { temp -= 100; c100++; }
    while (temp >= 50)  { temp -= 50;  c50++;  }
    while (temp >= 20)  { temp -= 20;  c20++;  }
    while (temp >= 10)  { temp -= 10;  c10++;  }
    while (temp >= 5)   { temp -= 5;   c5++;   }
    while (temp >= 2)   { temp -= 2;   c2++;   }

    if (c100 > 0) printf("Notas de R$ 100: %d\n", c100);
    if (c50 > 0)  printf("Notas de R$  50: %d\n", c50);
    if (c20 > 0)  printf("Notas de R$  20: %d\n", c20);
    if (c10 > 0)  printf("Notas de R$  10: %d\n", c10);
    if (c5 > 0)   printf("Notas de R$   5: %d\n", c5);
    if (c2 > 0)   printf("Notas de R$   2: %d\n", c2);

    if (temp > 0) {
        printf("Valor restante inacessivel com as notas disponiveis: R$ %d\n", temp);
    }

    return 0;
}