/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    // Loop para ler os números e armazená-los no vetor
    printf("Digite 5 números:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Loop para exibir os números do vetor na ordem inversa
    printf("Os números digitados em ordem inversa são:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}

