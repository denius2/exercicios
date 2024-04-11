/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1, num2, num3; 
    
    printf("digite o primeiro número");
    scanf("%f",&num1);
    
    printf("digite o segundo número");
    scanf ("%f",&num2);
    
    printf("digite o terceiro número");
    scanf ("%f",&num3);
    
  if (num1 <= num2&& num2 <= num3){
      printf("o menor número é:%.2f\n",num1);
      
  } else if (num2 <= num1 && num2 <=num3){
      printf("o menor numero é:%.2f\n", num2);
  } else {
      printf("o menor numero é:%.2f\n",num3);
  }
  return 0;
    
    
}

