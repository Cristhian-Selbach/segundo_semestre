#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int tam = 3;
  int *ptr = (int *)calloc(tam, (sizeof(int)));

  for (int i = 0; i < tam; i++)
  {
    printf("posicao 0%d: ", i);
    scanf("%d", &ptr[i]);
  }
  
  for (int i = 0; i < tam; i++)
  {
    printf("posicao: %d - valor: %d \n", i, ptr[i]);
  }
  
  free(ptr);
  return 0;
}