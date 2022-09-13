#include <stdio.h>
#include <stdlib.h>

float ler()
{
    float aux;
    printf("Valor: ");
    scanf("%f",&aux);
    return aux;
}


/*
void teste(float x, float y, float k, float *ma, float *me)
{
    if (x>y)
    {
        (*ma) = x;
        (*me) = y;
    }
    else
    {
        (*ma) = y;
        (*me) = x;
    }
    if (k>(*ma))
    {
        (*ma) = k;
    }
    else
    {
        if(k<(*me))
        {
            (*me) = k;
        }
    }
}
*/

//Jeito 2:
float teste(float x, float y, float k, float *ma, float *me)
{
    float maior;
    
    if(x>y)
    {
        maior = x;
        (*me) = y;
    }
    else
    {
        maior = y;
        (*me) = x;
    }

    if(k>maior)
    {
        maior = k;
    }
    else
    {
        if(k<(*me))
        {
            (*me) = k;
        }
    }

    return 0;
}

int main()
{
    float a, b, c, maior, menor;

    a = ler();
    b = ler();
    c = ler();

    teste(a, b, c, *maior, *menor);
    printf("Maior = %f", maior);
    printf("Menor = %f", menor);

    return 0;
}


