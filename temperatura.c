#include <stdio.h>
int main ()
{
  float far, cel;
  
  printf("Informe a temperatura em celsius: ");
  scanf("%f", &cel);
  far = 1.8 * cel + 32;
   printf("A temperatura e igual a %f", far);
  system("pause");
}  