/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[5];
    int par[5], impar[5];
    int i, indice_par = 0, indice_impar = 0;

    // Leitura dos 5 números inteiros
    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verifica se o número é par ou ímpar e armazena no vetor correspondente
        if (numeros[i] % 2 == 0) {
            par[indice_par] = numeros[i];
            indice_par++;
        } else {
            impar[indice_impar] = numeros[i];
            indice_impar++;
        }
    }

    // Impressão dos vetores
    printf("\nNúmeros digitados:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nNúmeros pares:\n");
    for (i = 0; i < indice_par; i++) {
        printf("%d ", par[i]);
    }

    printf("\nNúmeros ímpares:\n");
    for (i = 0; i < indice_impar; i++) {
        printf("%d ", impar[i]);
    }

    return 0;
}

