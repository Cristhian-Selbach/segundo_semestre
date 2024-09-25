#include <stdio.h>

void preencherVetor(int *vet, int tam){
  
  for (int i = 0; i < tam; i++){
    scanf("%d", &vet[i]);  
  }
 
}

int main(){

  int tam = 3;
  int vet[tam];

  // mesmo valor nos 3 printfs (vet = &vet[0] = &vet)
  printf("endereco de memoria do primeiro valor do vetor: %p ou %p ou %p \n", vet, &vet[0], &vet); 

  preencherVetor(vet, tam);

  for (int i = 0; i < tam; i++)
  {
    printf("Posicao %d - Valor: %d \n", i, vet[i]);
  }
  


}