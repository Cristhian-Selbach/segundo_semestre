#include <stdio.h>
#include <stdlib.h>

int main(){

  int tam = 5;
  int *ptr = (int*)malloc(tam * sizeof(int));

  for (int i = 0; i < tam; i++)
  {
    ptr[i] = i * i;
  }

  printf("\n");
  for (int i = 0; i < tam; i++)
  {
    printf("posicao: 0%d - valor: %d - endereco %p \n", i, *(ptr+i), ptr+i);
  }

  int novoTam;
  printf("novo tamanho: ");
  scanf("%d", &novoTam);

  ptr = (int *)realloc(ptr, novoTam * sizeof(int));

  for (int i = tam; i < novoTam; i++)
  {
    ptr[i] = i * 2;
  }

  for (int i = 0; i < novoTam; i++)
  {
    printf("posicao: %d - valor: %d - endereco %p \n", i, *(ptr+i), ptr+i);
  }
  
  
  free(ptr);

}