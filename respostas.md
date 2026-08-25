# Lista de Exercícios - Capítulo 1
**Disciplina:** Programação Imperativa e Funcional (PIF)  
**Semestre:** 2026.2

---

### Questão 04
**Erros identificados:**
1. `#include <stdlib.h>;` — Ponto e vírgula indevido após a diretiva de pré-processador.
2. `int Main{}` — `main` com 'M' maiúsculo (C é case-sensitive) e chaves `{}` no lugar de parênteses `()`.
3. `(` e `)` delimitando o corpo da função em vez de `{` e `}`.
4. `printf( Existem %d semanas no ano.,52);` — String de formato sem aspas duplas.
5. `cout << endl;` — Comando de C++, incompatível com o compilador C.

---

### Questão 05
**Resposta:** Não.
**Justificativa:** No padrão ANSI C/C modernizado, a função `main` exige o tipo de retorno explícito (`int main()`) e o comando `return 0;`. Além disso, o código usa `printf()` e `system()` sem incluir `<stdio.h>` e `<stdlib.h>`.

---

### Questão 06
**Erros de Sintaxe:**
1. `int a=1; b=2; c=3:` — Uso de `;` entre as variáveis na declaração e `:` ao final em vez de `;`.
2. `printf("0s números são: %d%d%d\n, a, b, c, d);` — Falta fechar as aspas duplas da string.
3. `0s` utiliza o número zero no lugar da letra O.

**Erros de Lógica:**
1. A variável `d` foi passada para o `printf`, mas não foi declarada.
2. Há 3 especificadores `%d` para 4 variáveis, e falta espaçamento entre os valores exibidos.

---

### Questão 07
* **a)** Pula uma linha, aplica uma tabulação e imprime `Bom dia! Shirley.`.
* **b)** Imprime `Você já tomou café? ` e pula para a linha seguinte.
* **c)** Pula duas linhas, imprime `A solução não existe!`, quebra a linha e imprime `Não insista.`.
* **d)** Imprime `Duas`, `linhas`, `de`, `saída` separadas por TAB, quebra a linha e imprime `ou`, `uma?` separadas por TAB.
* **e)** Imprime `um`, `dois` e `três`, cada um em sua própria linha.

---

### Questão 08
**Comportamento:** A sequência `\"` imprime aspas duplas sem fechar a string. `\n` insere quebra de linha e `\t` avança um TAB.
**Saída Exata:**