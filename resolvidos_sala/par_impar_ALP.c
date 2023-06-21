#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um programa que possua uma função que recebe um valor inteiro e verifica se o valor é par. 
A função deve retornar 1 se o número for par, e retornar 0 se o número for ímpar.
O resultado deverá ser impresso no programa principal.*/

int checkPar(num)
{
    if (num%2==0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, res;

    printf("Digite um valor: ");
    scanf("%d", &num);

    if (checkPar(num))
    {
        printf("O número digitado é par.");
    }
    else
    {
        printf("O número digitado é ímpar.");
    }
}