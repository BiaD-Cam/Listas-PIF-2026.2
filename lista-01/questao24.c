#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("ALUNO                NOTA\n");
    printf("-------------------------\n");
    printf("%-20s %4.1f\n", "ALINE", 9.0);
    printf("%-20s %4.1f\n", "MARIO", 10.0);
    printf("%-20s %4.1f\n", "SERGIO", 4.5);
    printf("%-20s %4.1f\n", "SHIRLEY", 7.0);
    return 0;
}