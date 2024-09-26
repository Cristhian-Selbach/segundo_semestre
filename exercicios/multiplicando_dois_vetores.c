#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *multiplica(int *A, int *B, int tam){

  int *C = (int *)calloc(tam, sizeof(int));

  for(int i = 0; i < tam; i++){
    C[i] = (A[i] * B[i]);
  }

  if ( C == NULL) return 0;

  return C;
}

void preencher(int *vet, int tam){
  for (int i = 0; i < tam; i++)
  {
    vet[i] = (rand() % 10) + 1;
    printf("%d - ", vet[i]);
  }
  
}

int main(){
  srand(time(NULL));

  int tam = 0;
  printf("determine o tamanho dos vetores: ");
  scanf("%d", &tam);

  int *A = (int *)calloc(tam, sizeof(int));
  int *B = (int *)calloc(tam, sizeof(int));

  if (A == NULL || B == NULL){
    return 1;
  }

  printf("valores de a:\n");
  preencher(A, tam);

  printf("\nvalores de b:\n");
  preencher(B, tam);

  printf("\nvalores de c:\n");
  int *C = multiplica(A, B, tam);

  for (int i = 0; i < tam; i++)
  {
    printf("%d - ", C[i]);
  }

  return 0;

}