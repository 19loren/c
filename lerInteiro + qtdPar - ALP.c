#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um programa que leia um número e construa os seguintes procedimentos:
    int lerInteiro() - ler um número do tipo inteiro e retornar o valor lido;
    int qtdPar(int a, int b, int c) - retornar quantos números são múltiplos de 3.
Os resultados deverão ser impressos no programa principal.*/

int lerInteiro() {
    int aux;

    printf("Digite um valor: ");
    scanf("%d", &aux);

    return aux;
}

int qtdPar(int x, int y, int k) {
    int cont=0;
    
    if (x%3==0){cont++;}
    if (y%3==0){cont++;}
    if (k%3==0){cont++;}

    return cont;
}

void imprime(int x, int y, int k, int res){
    printf("Foram lidos os valores %d, %d e %d.", x, y, k);
    printf("Sendo que %d são múltiplos de 3.", res);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, c, Q3;

    a = lerInteiro();
    b = lerInteiro();
    c = lerInteiro();
    Q3 = qtdPar(a, b, c);

    imprime(a, b, c, Q3);

    return 0;
}