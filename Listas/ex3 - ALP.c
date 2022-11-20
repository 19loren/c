#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define max 20

/*
Loren Tavolaro 21012402
Luiza Límoli 22016388
*/

int main() 
{
  setlocale(LC_ALL,"Portuguese");
  
  int qtd = 0;
  char str[max], caractere;
  
  printf("Digite uma string de no máximo 20 caracteres:\n");
  fgets(str, 19, stdin);
  
  printf("Digite o caractere que deseja contar:\n");
  scanf("%c", &caractere);

  for (int i = 0; str[i] != 0; i++) 
  {
    if (str[i] == caractere) qtd++;
  }
  printf("\nA string tem %d caracteres", qtd);
  return 0;
}
