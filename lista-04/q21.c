/*
Questao 21. Calculo de Reajuste Salarial com Base em Categorias -- Uma empresa concedera aumentos salariais diferenciados de acordo com o cargo e o tempo de servico. Crie um programa que leia o salario atual e o codigo do cargo (1 = Tecnico; 2 = Gerente; 3 = Demais Cargos). Calcule o novo salario segundo os percentuais:
* Tecnico (Codigo 1): 15% de aumento se salario <= 3000; 10% se salario > 3000.
* Gerente (Codigo 2): 10% de aumento se salario <= 5000; 5% se salario > 5000.
* Demais Cargos (Codigo 3): 8% de aumento fixo.
Exiba o valor do aumento em reais e o novo salario reajustado.
*/

#include <stdio.h> 

int main() {
    float salario_atual, aumento, novo_salario; 
    int codigo_cargo; 

    printf("Digite o salario atual do funcionario (R$): "); 
    scanf("%f", &salario_atual); 

    printf("Códigos de cargo:\n1 - Técnico\n2 - Gerente\n3 - Demais Cargos\nDigite o código do cargo: "); 
    scanf("%d", &codigo_cargo); 

    switch (codigo_cargo) {
        case 1: 
            if (salario_atual <= 3000.0) { 
                aumento = salario_atual * 0.15; 
            } else { 
                aumento = salario_atual * 0.10;      
            }
            break;      
        case 2: // Gerente
            if (salario_atual <= 5000.0) {
                aumento = salario_atual * 0.10;      
            } else { 
                aumento = salario_atual * 0.05; 
            }
            break;      
        case 3: 
            aumento = salario_atual * 0.08; 
            break;      
        default: 
            printf("Erro: Código de cargo inválido!\n"); 
            return 0;         
    }

    novo_salario = salario_atual + aumento; 

    printf("\nValor do aumento concedido: R$ %.2f\n", aumento); 
    printf("Novo salario reajustado: R$ %.2f\n", novo_salario);

    return 0;         
}