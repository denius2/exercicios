/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int mes;
  printf ("digitar um numero inteiro entre 1 e 12: ");
  scanf ("%d", &mes);
  
 switch(mes){
     
     case 1:
     printf("janeiro ");
     break;
     
     case 2:
     printf("fevereiro ");
     break;
     
     case 3:
     printf("março ");
     break;
     
     case 4:
     printf("abril ");
     break;
     
     case 5:
     printf("maio ");
     break;
     
     case 6:
     printf("junho ");
     break;
     
     case 7:
     printf("julho ");
     break;
     
     case 8:
     printf("agosto ");
     break;
     
     case 9:
     printf("setembro ");
     break;
     
     case 10:
     printf("outubro ");
     break;
     
     case 11:
     printf("novembro ");
     break;
     
     case 12:
     printf("dezembro ");
     break;
     
     default:
     printf("não existe essse mes com esse numero /n");
     break;
 }
 
	return 0;

}





