/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int idade;
    int contador = 0;
    int i = 1;

    // Loop para receber a idade de 5 pessoas
    while (i <= 5) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        // Verifica se a idade é maior que 18
        if (idade > 18) {
            contador++;
        }

        i++; // Incrementa o contador de pessoas
    }

    // Imprime a quantidade de pessoas maiores que 18 anos
    printf("O número de pessoas maiores que 18 anos é: %d\n", contador);

    return 0;
}


