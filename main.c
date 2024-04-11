/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float lado1, lado2, lado3; 
    
    printf("digite o comprimento do primeiro lado do triangulo:");
    scanf("%f",&lado1);
    
    printf("digite o comprimento do segundo lado do triangulo:");
    scanf("%f",&lado2);
    
    printf("digite o comprimento do terceiro lado do triangulo:");
    scanf("%f",&lado3);
    
    if (lado1 == lado2 && lado2 == lado3){
        printf("o triangulo é equilatero.\n");
    }else if (lado1 == lado2 || lado1  == lado3 || lado2 == lado3 ){
        printf("o triangulo é isósceles.\n");
    }else{
        printf("o triaqngulo é escaleno.\n");
    }
    
    return 0;
    
}

