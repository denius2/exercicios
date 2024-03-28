/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigo;
    float preco, total;
    int quantidade;
    
    printf("digite o codigo do produto 100,101,102,103,104,105: ");
    scanf ("%d", &codigo);
    
    
    switch (codigo) {
        case 100:
        preco = 1.20;
        printf("cachorrao quente de osasco");
        break;
        
        
        case 101:
        preco = 1.50;
        printf("bauru");
        break;
        
        
        case 102:
        preco = 2.50;
        printf("bauru");
        break;
        
        case 103:
        preco = 3.50;
        printf("americano");
        break;
        
        case 105:
        preco = 6.50;
        printf(" mini pizza 4 queijos");
        break;
        
        default:
         printf("codigo do produto invalido.\n");
         return 100;
         
    }
    printf("digite a quantidade desejada: ");
    scanf("%d", &quantidade);
    
    total = preco * quantidade;
    printf("total a ser pago : R$ %.2f\n",total );
    return 0;
}

