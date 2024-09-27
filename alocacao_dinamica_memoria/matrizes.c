#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int linhas = 4, colunas =  3;

  int* matriz = (int*) malloc(linhas * colunas * sizeof(int));

  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      matriz[i * colunas + j] = i + j;
    }
    
  }

  for (int i = 0; i < linhas; i++) {

    for (int j = 0; j < colunas; j++) {

      printf("%d ", matriz[i * colunas + j]);
    }

    printf("\n");
  }

  free(matriz);
}