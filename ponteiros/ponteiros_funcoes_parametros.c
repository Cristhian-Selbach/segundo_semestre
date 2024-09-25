#include <stdio.h>

void alterarValor(int *ptr){

  printf("Digite valor para alterar: ");
  scanf("%d", ptr);
  // mesmo que usar - scanf("%d", &*ptr);

}


int main(){

  int valor = 0;

  printf("Valor antes: %d \n", valor);
  alterarValor(&valor);
  printf("Valor alterado para: %d", valor);

  return 0;
}