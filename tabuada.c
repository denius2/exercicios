/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;

    // Solicita um número entre 1 e 10 ao usuário
    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &numero);

    // Valida se o número está dentro do intervalo desejado
    while (numero < 1 || numero > 10) {
        printf("Número inválido. Por favor, digite um número entre 1 e 10: ");
        scanf("%d", &numero);
    }

    // Imprime a tabuada do número
    int i = 1;
    while (i <= 10) {
        printf("%d X %d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
}

