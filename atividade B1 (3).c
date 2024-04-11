/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float fahrenheit, celcius;
     
      printf ("digite a temperatura em fahrenheit:");
      scanf ("%f", &fahrenheit);
      
    celcius= (fahrenheit - 32) *5/ 9;
    printf("a temperatura em celcius é:%.2f\n", celcius);
    
    return 0;
}

