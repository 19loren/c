#include <stdio.h>
#include <string.h>
#include <locale.h>
#define max 10

/*
Loren Tavolaro 2102402
Luiza Límoli 22016388
*/

int main()
{
  setlocale(LC_ALL, "Portuguese");
  char str[max];
  int cont = 0;
  printf("Digite uma string de no máximo 10 caracteres:\n");
  scanf("%s", str);

  while(str[cont] != NULL)
  {
    if(str[cont] != 'a' && str[cont] != 'A' && str[cont] != 'e' && str[cont] != 'E' && str[cont] != 'i' && str[cont] != 'I' && str[cont] != 'o' && str[cont] != 'O' && str[cont] != 'u' && str[cont] != 'U') 
      printf("%c", str[cont]);
      cont++;
  }
  return 0;
}