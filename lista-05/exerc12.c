/*
Questão 12. Procedimento de Menu - Crie um procedimento void exibeMenu(void) que
imprima um menu com as opções 1 - Cadastrar, 2 - Listar, 3 - Remover e 0 - Sair. Na main(),
chame o procedimento, leia a opção do usuário e exiba uma mensagem correspondente com
switch-case.
*/

#include <stdio.h>

void exibeMenu(void);

int main(void) {
    int opcao;

    exibeMenu();
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Opção selecionada: Cadastrar.\n");
            break;
        case 2:
            printf("Opção selecionada: Listar.\n");
            break;
        case 3:
            printf("Opção selecionada: Remover.\n");
            break;
        case 0:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

void exibeMenu(void) {
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}
