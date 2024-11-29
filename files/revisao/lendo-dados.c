#include <stdio.h>

int main(){

  FILE *arquivo = fopen("file.txt", "r");

  if(arquivo == NULL){
    return 1;
  }

  char conteudo[100];

  printf("conteudo do arquivo: \n\n");
  while(fgets(conteudo, sizeof(conteudo), arquivo) != NULL){
    printf("%s", conteudo);
  }

  return 0;
}