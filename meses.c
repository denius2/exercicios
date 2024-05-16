/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main() {
    // Array para armazenar os nomes dos meses
    const char *meses[12] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho",
                              "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    int numero_mes;
    bool valido = false;

    // Loop para garantir que o usuário insira um número de mês válido
    while (!valido) {
        // Solicita ao usuário que insira um número de mês
        printf("Digite um número de mês (entre 1 e 12): ");
        scanf("%d", &numero_mes);

        // Verifica se o número do mês está dentro do intervalo válido (1 a 12)
        if (numero_mes >= 1 && numero_mes <= 12) {
            valido = true; // Marca como válido para sair do loop
        } else {
            printf("Número de mês inválido. Por favor, tente novamente.\n");
        }
    }

    // Imprime o número e o nome do mês correspondente
    printf("%d - %s\n", numero_mes, meses[numero_mes - 1]);

    return 0;
}

