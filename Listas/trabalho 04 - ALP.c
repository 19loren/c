#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define n 30

/*
Loren Tavolaro 21012402
Luiza Limoli 22016388
*/

typedef struct aluno
{
    char nome[60];
    int idade;
    float peso, altura;
}aluno;

float alturaMaior(aluno aluno[])
{
    int i=0, y=0;
    float maAltura = aluno[0].altura;
    for (i=0; i<n; i++)
    {
        if (aluno[i].altura > maAltura)
        {
            y=i;
        }
    }
    return y;
}

int imcMaior(aluno aluno[])
{

    int i=0, y=0;
    float maIMC = aluno[0].peso / (aluno[0].altura*aluno[0].altura);
    for (i=0; i<max; i++)
    {
        if (aluno[i].peso / (aluno[i].altura * aluno[i].altura) > maIMC)
        {
            maIMC = aluno[i].peso / (aluno[i].altura*aluno[i].altura);
            y=i;
        }
    }
    return y;
}

int imcMenor(aluno aluno[])
{
    int i=0, y=0;
    float meIMC = aluno[0].peso / (aluno[0].altura * aluno[0].altura);
    for (i=0; i<n; i++)
    {
        if (aluno[i].peso / (aluno[i].altura*aluno[i].altura) < meIMC)
        {
            meIMC = aluno[i].peso / (aluno[i].altura * aluno[i].altura);
            y=i;
        }
    }
    return y;
}

float media(aluno aluno[])
{
    int i=0;
    float media=0;

    for (i=0; i<n; i++)
    {
        media =+ aluno[i].peso / (aluno[i].altura * aluno[i].altura);
    }

    return media / max;
}

float maiorIdade(aluno aluno[])
{
    int i=0, y=0;
    int maIdade = aluno[0].idade;
    for (i=0; i<n; i++)
    {
        if (aluno[i].idade > maIdade)
        {
            maIdade = aluno[i].idade;
            y=i;
        }
    }
    return y;
}

float menorIdade(aluno aluno[])
{
    int i=0, y=0;
    int meIdade = aluno[0].idade;
    for (i=0; i<n; i++)
    {
        if (aluno[i].idade < meIdade)
        {
            meIdade=aluno[i].idade;
            y=i;
        }
    }
    return y;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    aluno aluno[n];

    int maiorAltura, maiorImc, menorImc, idadeMaior, idadeMenor, i=0;
    float mediaImc;
    printf("\tPreencha abaixo:\n");

    for (i=0; i<n; i++)
    {
        printf("\tDigite o nome:");
        fflush(stdin);
        gets(aluno[i].nome);
        printf("\tDigite a idade:");
        scanf("%i", &aluno[i].idade);
        printf("\tDigite o peso:");
        scanf("%f", &aluno[i].peso);
        printf("\tDigite a altura:");
        scanf("%f", &aluno[i].altura);
    }

    maiorAltura = alturaMaior(aluno);
    printf("\tA pessoa mais alta: %s mede %.2f\n", aluno[maiorAltura].nome, aluno[maiorAltura].altura);
    maiorImc = imcMaior(aluno);
    printf("\tA pessoa com o maior IMC: %s tem o IMC: %.2f\n", aluno[maiorImc].nome, aluno[maiorImc].peso / (aluno[maiorImc].altura * aluno[maiorImc].altura));
    menorImc = imcMenor(aluno);
    printf("\tA pessoa com o menor IMC: %s tem o IMC: %.2f\n", aluno[menorImc].nome, aluno[c].peso / (aluno[menorImc].altura * aluno[menorImc].altura));
    mediaImc = media(aluno);
    printf("\tA media dos IMCs é: %.2f\n", mediaImc);
    idadeMaior = maiorIdade(aluno);
    printf("\tA pessoa mais velha: %s tem %i anos\n", aluno[idadeMaior].nome, aluno[idadeMaior].idade);
    idadeMenor = menorIdade(aluno);
    printf("\tA pessoa mais nova: %s tem %i anos\n", aluno[idadeMenor].nome, aluno[idadeMenor].idade);
}
