#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

/*
Loren Tavolaro 21012402
Luiza Limoli 22016388
*/

int main() 
{
  char nome[max];
  printf("Digite o nome completo:\n");
  fgets(nome, 98, stdin);
  for (int i = 0; nome[i] != 0; i++) 
  {
    if (nome[i] != ' ' && (i == 0 || nome[i - 1] == ' ')) printf("%c", nome[i]);
  }
  return 0;
}