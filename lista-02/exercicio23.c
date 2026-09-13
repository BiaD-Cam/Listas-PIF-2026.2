/*Questão 23. Cálculo de Horário de Término de Experimento Biológico — Desenvolva um programa em C que auxilie na medição do tempo de experimentos científicos de laboratório. O programa deve receber do usuário: a) O horário de início do experimento no formato Horas, Minutos e Segundos de forma independente; b) A duração total da experiência expressa estritamente em segundos. O programa deve calcular e exibir na tela o horário exato de término do experimento no formato hh:mm:ss. Utilize os operadores de divisão (/) e resto da divisão (%) para obter os novos valores de tempo de forma estruturada. */

#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio, duracao_segundos;
    int total_segundos_inicio, total_segundos_fim;
    int h_fim, m_fim, s_fim;

    printf("Digite o horario de inicio (Horas Minutos Segundos): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);

    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao_segundos);

    /* Converte todo o horario inicial para segundos acumulados no dia */
    total_segundos_inicio = (h_inicio * 3600) + (m_inicio * 60) + s_inicio;
    
    total_segundos_fim = total_segundos_inicio + duracao_segundos;

    /* Garante que o horario nao passe de 24 horas no relogio (86400 segundos) */
    total_segundos_fim = total_segundos_fim % 86400;

    h_fim = total_segundos_fim / 3600;
    m_fim = (total_segundos_fim % 3600) / 60;
    s_fim = total_segundos_fim % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    return 0;
}