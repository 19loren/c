#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define n 5
// n 5 define matriz = 5x5

/*
Loren Tavolaro 2101402
Luiza Limoli 22016388
*/

int main() {
  setlocale(LC_ALL, "Portuguese");
  int m[n][n];
  int s = 0, simetrica = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("Digite o valor[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &m[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (simetrica == 1) {
        if (m[i][j] != m[j][i]) {
          simetrica = 0;
        }
      }
    }
  }
  printf("\nmatriz inserida:"); //terminal matriz
  for (int i = 0; i < n; i++) {
    printf("\n|");
    for (int j = 0; j < n; j++) {
      printf("%2d", m[i][j]);
    }
    printf(" |\n");
  }
  if (simetrica == 1) { //resultado
    printf("\t\nA matriz é simetrica");
  } else {
    printf("\t\nA matriz não é simetrica");
  }
  return 0;
}
