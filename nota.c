#include <stdio.h>
int main()
{
  float av1=0, av2=0, media=0;
  
  printf("Informe a nota da Av1:");
  scanf("%f", &av1);
  printf("Informe a nota da Av2:");
  scanf("%f", &av2);
  media = (av1+av2)/2;
  printf("A media e igual a %.2f", media);
   if(media >= 6)
   {
    printf("aprovado");
   }
   else
    printf("Reprovado");
    

 return 0;

    
}