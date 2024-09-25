#include <stdio.h>
#include <stdlib.h>

int main(){

  int tam = 3;
  int *ptr = (int *)malloc(tam * sizeof(int));

  for (int i = 0; i < tam; i++){
    printf("digite ptr na posicao 0%d: ", i);
    scanf("%d", &ptr[i]);
  }

  printf("\n");
  for (int i = 0; i < tam; i++){
    printf("posicao: 0%d - endereco: %p - valor: %d \n", i, &ptr[i], ptr[i]);
  }
  printf("endereco de ptr: %p \n", &ptr);

  free(ptr);
  return 0;
}