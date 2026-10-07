/*
Questão 14. Autenticação de Senha com Limite Finito de Tentativas - Desenvolva um
sistema de autenticação que defina uma senha numérica secreta (ex: 2026). O programa
deve permitir que o usuário tente digitar a senha no máximo 3 vezes usando um laço
while ou 'for'. Se acertar, exiba 'Acesso Concedido!' e encerre; se errar as 3 vezes,
exiba 'Conta Bloqueada por Segurança!'.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    const int SENHA_CORRETA = 2026;
    int senha_digitada;
    int tentativas = 0;
    int acesso_concedido = 0;

    while (tentativas < 3) {
        printf("Digite a senha secreta: ");
        if (scanf("%d", &senha_digitada) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        tentativas++;

        if (senha_digitada == SENHA_CORRETA) {
            printf("Acesso Concedido!\n");
            acesso_concedido = 1;
            break;
        } else {
            if (tentativas < 3) {
                printf("Senha incorreta! Tentativas restantes: %d\n", 3 - tentativas);
            }
        }
    }

    if (!acesso_concedido) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}