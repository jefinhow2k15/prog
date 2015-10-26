#include <stdio.h>
  int main()
   {
     float peso=0, altura=0;
     int imc=0;
       printf("Informe o seu peso:");
         scanf("%f", &peso);
       printf("Informe sua altura:");
        scanf("%f", &altura);
        imc = peso/(altura*altura);
          if(imc <= 19)
           {
              printf("Você está magro!");
           }
           
          if(imc >=20 && imc <= 25)
           {
              printf("Você está no peso ideal!");
           }
          
          if(imc >= 26 && imc <= 30)
           {
              printf("Você está acima do peso!");
           }
          
          if(imc > 31)
           {
              printf("Você está obeso(a)!");
           }
      
      
      
      
       return 0;
   }