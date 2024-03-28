/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float numero, resultado;
     printf("digitar o numero: ");
     scanf("%f", &numero);
     resultado = sqrt(numero);
     printf("o resultado da raiz quadrada é: %.3f",resultado);
     return 0; 
   printf("numero digitado pelo usuario = %f\n", numero);
   if (numero >0){
       printf("positivo");
   }
   else if (numero <0){
       printf("numero invalido");
   }
    
}




