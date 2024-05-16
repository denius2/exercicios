/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int numeros[5];
    int i, busca;
    bool encontrado = false;

    // Leitura dos 5 números fornecidos pelo usuário
    printf("Digite 5 números:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Solicitação de um número para buscar no vetor
    printf("\nDigite um número para buscar no vetor: ");
    scanf("%d", &busca);

    // Verifica se o número de busca está presente no vetor
    for (i = 0; i < 5; i++) {
        if (numeros[i] == busca) {
            encontrado = true;
            break;
        }
    }

    // Exibe o resultado da busca
    if (encontrado) {
        printf("O número %d foi encontrado no vetor.\n", busca);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", busca);
    }

    return 0;
}

