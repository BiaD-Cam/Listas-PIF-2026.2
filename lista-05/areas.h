/*
Questão 22. Biblioteca de Áreas com Arquivo de Cabeçalho - Crie um arquivo areas.h
contendo a constante PI e as macros A_CIRC(raio), A_RET (base, alt) e A_TRI(base, alt), todas
com parênteses de proteção. Em um programa principal que utilize #include "areas.h", leia os
dados do usuário e exiba as áreas calculadas.
*/

#ifndef AREAS_H
#define AREAS_H

#define PI 3.14159f
#define A_CIRC(raio) (PI * (raio) * (raio))
#define A_RET(base, alt) ((base) * (alt))
#define A_TRI(base, alt) (((base) * (alt)) / 2.0f)

#endif
