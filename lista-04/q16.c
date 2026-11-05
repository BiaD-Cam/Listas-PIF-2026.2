/*
Questao 16. Classificacao de Eficiencia de Consumo de Combustivel -- Faca um programa que leia a distancia percorrida por um veiculo em km (float) e a quantidade de litros de gasolina consumidos (float). Calcule o consumo em km/l e exiba a mensagem apropriada:
* Consumo < 8.0 km/l: 'Venda o carro!'
* Consumo entre 8.0 e 14.0 km/l: 'Economico!'
* Consumo > 14.0 km/l: 'Super economico!'
*/

#include <stdio.h> 

int main() {
    float distancia_km, litros_consumidos, consumo_kml; 

    printf("Digite a distancia percorrida em km: "); 
    scanf("%f", &distancia_km); 

    printf("Digite a quantidade de litros consumidos: "); 
    scanf("%f", &litros_consumidos); 

    if (litros_consumidos <= 0.0) { 
        printf("Erro: A quantidade de litros deve ser maior que zero!\n"); 
        return 0; 
    }

    consumo_kml = distancia_km / litros_consumidos; 

    printf("Consumo médio: %.2f km/l\n", consumo_kml); 

    if (consumo_kml < 8.0) { 
        printf("Classificação: Venda o carro!\n");    
    } else if (consumo_kml <= 14.0) { 
        printf("Classificação: Econômico!\n");    
    } else { 
        printf("Classificação: Super econômico!\n");    
    }

    return 0; 
}