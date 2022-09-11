/* Michel Zheng RA: 22014577
Loren Tavolaro RA: 21012402 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro número 
formado pelos dígitos invertidos do número lido.*/

int main() {
  setlocale(LC_ALL, "Portuguese");
  int num, num1, num2, num3;
  printf("Digite um número inteiro de 3 dígitos positivos: ");
  scanf("%d", &num);
  
  if (num >= 100 && num <= 999) {
    num1 = num%10;
    num = num/10;
    num2 = num%10;
    num = num/10;
    num3 = num%10;
    num = num/10;
  }
  else {
    printf("O número inteiro deve ser de 100 a 999. Tente novamente.");
  }
   printf("\n%d%d%d", num1, num2, num3);
   return 0;
}