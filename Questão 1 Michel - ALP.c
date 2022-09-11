/* Michel Zheng RA: 22014577
Loren Tavolaro RA: 21012402 */

#include <stdio.h>
#include <stdlib.h>

/*Programa de contador de cédulas para caixa eletrônico com notas de 100,50,20,10,5,2,1 real*/

int main() {
  int valor, n100, n50, n20, n10, n5, n2, n1;
  
  printf("Insira o valor desejado: ");
  scanf("%d",&valor);
  
  n100 = valor/100;
  valor = valor%100;
  n50 = valor/50;
  valor = valor%50;
  n20 = valor/20;
  valor = valor%20;
  n10 = valor/10;
  valor = valor%10;
  n5 = valor/5;
  valor = valor%5;
  n2 = valor/2;
  valor = valor%2;
  n1 = valor/1;
  valor = valor%1;
    
printf("%d Nota de 100\n %d Nota de 50\n %d Nota de 20\n %d Nota de 10\n %d Nota de 5\n%d Nota de 2\n%d Nota de 1", n100, n50, n20, n10, n5, n2,  n1);
  return 0;
}