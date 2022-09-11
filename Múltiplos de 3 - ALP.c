#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Mostrar os valores lidos e quantos são múltiplos de 3*/

int main {
    setlocale(LC_ALL, "Portuguese");
    int a, b, c, qtd=0;

    printf("Digite um valor: ")
    scanf("%d",&a);    
    printf("Digite um valor: ")
    scanf("%d",&b);    
    printf("Digite um valor: ")
    scanf("%d",&c);

    if (a%3==0) {qtd++;}
    if (b%3==0) {qtd++;}
    if (c%3==0) {qtd++;}

    printf("Foram lidos os valores %d, %d e %d.", a, b, c);
    printf("Sendo que %d são múltiplos de 3.", qtd);

    return 0;
}