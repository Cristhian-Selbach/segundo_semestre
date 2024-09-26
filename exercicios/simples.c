#include <stdio.h>
#include <stdlib.h>

int defValor(){
  int x = 0;

  while (x < 1)
  {
    printf("digite o tamanho do vetor ");
    scanf("%d", &x);
  }
  return x;
}

void preencherVet(int *vet, int tam){

  for(int i = 0; i < tam; i++){

    do{
      printf("valor na posicao %d: ", i);
      scanf("%d", &vet[i]);
    }
    while (vet[i] < 2);
  }
}

int main(){
  
  int tam = defValor();
  int *vet = (int *)calloc(tam, sizeof(int));
  
  preencherVet(vet, tam);

  for(int i = 0; i < tam; i++){
    printf("valor na posicao %d: %d \n", i, vet[i]);
  }


  return 0;
}