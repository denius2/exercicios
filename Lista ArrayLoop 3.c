/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    // Definindo os vetores de entrada e o vetor de saída
    int vetor1[5], vetor2[5], vetor3[10];

    // Solicitando os elementos dos dois vetores
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Intercalando os elementos dos dois vetores no terceiro vetor
    int j = 0;
    for (int i = 0; i < 5; i++) {
        vetor3[j++] = vetor1[i];
        vetor3[j++] = vetor2[i];
    }

    // Imprimindo o vetor resultante
    printf("\nO terceiro vetor intercalado é:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}

