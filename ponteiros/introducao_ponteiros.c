#include <stdio.h>

int main(){

  // & endereço 
  // * conteudo da variavel que o ponteiro aponta

  int x = 10;

  //iniciando uma variavel do tipo ponteiro
  int *ptr;

  //variavel do tipo ponteiro recebendo o valor do endereço de memória de x
  ptr = &x;

  printf("Valor do Ponteiro: %p.\n", ptr);
  printf("Endereco de memoria da variavel: %p.\n", &x);
  printf("Valor da variavel: %d.\n", x);
  printf("Valor Apontado pelo Ponteiro: %d.\n", *ptr);


  printf("Mudando o valor da variavel via ponteiro...\n\n");

  *ptr = 11;
  printf("novo valor da variavel: %d.\n", x);
  
}