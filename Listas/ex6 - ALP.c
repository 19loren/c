#include <stdio.h>
#include <string.h>
#include <locale.h>

/*
Loren Tavolaro 21012402
Luiza Límoli 22016388
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    char palavra[30];
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    for (int i = 0; i < (tamanho / 2); i++) 
    {
        if (palavra[i] != palavra[(tamanho - 1) - i]) 
        {
            printf("\nA palavra %s não é um palíndromo", palavra);
            return 0;
        }
    }
    printf("\nA palavra %s é um palíndromo", palavra);
}