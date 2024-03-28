/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char converterNota(int nota){
       char resultado;
       
       switch (nota){
           case 0 ... 20:
           resultado = "E";
           break;
           
           case 21 ... 40:
           resultado = "D";
           break;
           
           case 41 ... 60:
           resultado = "C";
           break;
           
           case 61 ... 80:
           resultado = "B";
           break;
           
           case 81 ... 100:
           resultado = "A";
           break;
           
           default:
           resultado = "N"; //caso não atinja a nota necessaria
           break;
       }
       return resultado;
   }
   int main (){
       int nota; 
       printf("digite a nota(de 0 a 100)");
       scanf("%d", &nota);
       
       if (nota < 0 || nota > 100) {
           printf("nota invalida! \n");
           return 1;
       }
       
       char letra = converterNota(nota);
       printf("a letra correspondente a nota %d é: %c \n " , nota, letra);
       
       return 0;
   }
   
   
   
   
}

