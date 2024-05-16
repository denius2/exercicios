/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h> // Biblioteca para funções de manipulação de caracteres

int main() {
    char caracteres[10];
    int i, contador = 0;

    // Solicita ao usuário que insira os 10 caracteres
    printf("Digite 10 caracteres:\n");
    for (i = 0; i < 10; i++) {
        printf("Caractere %d: ", i + 1);
        scanf(" %c", &caracteres[i]); // Adiciona um espaço antes de %c para evitar problemas com o buffer
    }

    // Verifica cada caractere para contar as consoantes e as imprime
    printf("\nConsoantes lidas:\n");
    for (i = 0; i < 10; i++) {
        // Verifica se o caractere é uma letra do alfabeto
        if (isalpha(caracteres[i])) {
            // Converte o caractere para minúsculo para facilitar a verificação
            char letra_minuscula = tolower(caracteres[i]);
            // Verifica se o caractere é uma consoante
            if (letra_minuscula != 'a' && letra_minuscula != 'e' && letra_minuscula != 'i' && 
                letra_minuscula != 'o' && letra_minuscula != 'u') {
                printf("%c ", caracteres[i]); // Imprime a consoante
                contador++; // Incrementa o contador de consoantes
            }
        }
    }

    // Imprime o número total de consoantes lidas
    printf("\nTotal de consoantes lidas: %d\n", contador);

    return 0;
}

