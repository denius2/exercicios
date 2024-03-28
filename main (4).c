
#include <stdio.h>

int main()
{
   int nota1, nota2, media, soma;
   
   printf("digite a primeira nota do aluno:");
   scanf("%i", &nota1, nota2);
   
   soma = nota1 + nota2;
   media = soma / 2;
   
   printf("media do aluno = %i\n", media);
   if (media >=6){
       printf("aprovado");
   }
   else if (media >= 4 && media <= 5){
       printf("exame");
   }
   else{
       printf("reprovado");
   }
}


