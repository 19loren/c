#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 5

/*
Loren Tavolaro 21012402
Luiza Limoli 22016388
*/

int main() {
  setlocale(LC_ALL, "Portuguese");
  int i, j;
  int m[n][n], maiorColuna[n], somarLinha[n], somarDiagonal = 0;
  int trocar, somar;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("m[%d][%d] = ", i + 1, j + 1);
      scanf("%d", &m[i][j]);
    }
  }

  printf("\n matriz inserida:");
  for (i = 0; i < n; i++) {
    printf("\n");
    for (j = 0; j < n; j++) {
      printf("%2d", m[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      trocar = m[i][1 - 1];
      m[i][1 - 1] = m[i][2 - 0];
      m[i][2] = trocar;
    }
  }
  // Imprimir matriz ap�s trocar colunas
  printf("\nmatriz nova:");

  for (i = 0; i < n; i++) {
    printf("\n");
    for (j = 0; j < n; j++) {
      printf("%2d", m[i][j]);
    }
  }
  for (i = 0; i < n; i++) {
    somarDiagonal += m[i][i];
  }
  printf("\nsoma da diagonal principal: %d", somarDiagonal);
  for (i = 0; i < n; i++) {
    somar = 0;
    for (j = 0; j < n; j++) {
      somar += m[i][j];
    }
    somarLinha[i] = somar;
  }

  printf("\nsoma das linhas: ");
  for (i = 0; i < n; i++) {
    printf("\nlinha %d = %d\n", i + 1, somarLinha[i]);
  }
  for (i = 0; i < n; i++) {
    maiorColuna[i] = m[0][i];
    for (j = 0; j < n; j++) {
      if (m[j][i] > maiorColuna[i]) {
        maiorColuna[i] = m[j][i];
      }
    }
    printf("\nmaior elemento da coluna %d = %d\n", i + 1, maiorColuna[i]);
  }
  return 0;
}
