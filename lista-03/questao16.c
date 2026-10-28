/*
Questão 16. Autenticação de Senha com Limite Finito de Tentativas Desenvolva um sistema de
autenticação que defina uma senha numérica secreta (ex: 2026). O programa deve permitir que o usuário tente digitar a senha no máximo 3 vezes. Se o usuário acertar a senha, o programa deve imprimir 'Acesso Concedido!' e o número de tentativas utilizadas, encerrando a execução. Se errar as 3 tentativas, o programa deve exibir 'Conta Bloqueada por Segurança!".
*/

#include <stdio.h>

int main() {
    const int SENHA_SECRETA = 2026;
    int senha_digitada, tentativas = 0;
    int acesso_concedido = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);
        tentativas++;

        if (senha_digitada == SENHA_SECRETA) {
            printf("Acesso Concedido! Tentativas utilizadas: %d\n", tentativas);
            acesso_concedido = 1;
            break;
        } else {
            if (tentativas < 3) {
                printf("Senha incorreta. Tentativas restantes: %d\n", 3 - tentativas);
            }
        }
    }

    if (!acesso_concedido) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}