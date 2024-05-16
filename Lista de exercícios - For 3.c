/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0;
    int i;

    // Loop para ler as notas e armazená-las no vetor
    printf("Digite as 4 notas:\n");
    for (i = 0; i < 4; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // Soma as notas para calcular a média posteriormente
    }

    // Exibe as notas lidas
    printf("Notas digitadas:\n");
    for (i = 0; i < 4; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    // Calcula e exibe a média das notas
    float media = soma / 4;
    printf("Média: %.2f\n", media);

    return 0;
}

