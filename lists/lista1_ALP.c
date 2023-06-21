/* Exercício 1:*/
#include <stdio.h>

/*Dobro de um número inteiro*/

int main()
{
 int numero; 
 printf("\n Informe um número inteiro: ");
 scanf("%d",&numero); 

 while (numero <= 0)  //numero digitado tem que ser positivo
{
  printf("\n O número digitado não deve ser negativo, digite um número positivo: "); 
  scanf("%d",&numero);   
}

 printf("\n Dobro de %d = %d", numero,numero*2); //resultado
 return 0;
}

/*Exercício2:*/
#include <stdio.h>

/*Informar um número e mostrar o antecessor, o número informado e sucessor dele. */

int main() 
{
  int n, antecessor, sucessor;

  printf("Informe um número inteiro: ");
  scanf("%d", &numero);

  antecessor = numero - 1;
  sucessor = numero + 1;
  
  printf("\n");
  printf("%d (antecessor)\n", antecessor);
  printf("%d (valor)\n", numero);
  printf("%d (sucessor)\n", sucessor);
  
  return(0);
}