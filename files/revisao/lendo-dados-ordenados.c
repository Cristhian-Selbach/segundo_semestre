#include <stdio.h>

int main(){
  int id, idade;
  float altura;
  char nome[100];

  FILE *arquivo = fopen("file.txt", "r");

  if(arquivo == NULL){
    return 1; //erro
  }

  fscanf(arquivo, "%d - %s - %d - %f", &id, nome ,&idade, &altura);
  printf("%d - %s - %d - %.2f", id,nome,idade,altura);

  fclose(arquivo);

  return 0;
}