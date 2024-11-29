#include <stdio.h>

int main(){

  char conteudo[100];
  FILE *file = fopen("escrever.txt", "r+");

  if(file == NULL){
    return 0;
  }

  printf("conteudo: \n");
  while (fgets(conteudo, sizeof(conteudo), file) != NULL) {
      printf("%s", conteudo);
  }

  printf("\n\ndigite o novo conteudo: \n");
  fgets(conteudo, sizeof(conteudo), stdin);

  rewind(file);
  //ESCREVENDO
  fprintf(file, "%s", conteudo);

  rewind(file);
  printf("\n\nnovo conteudo: \n");
  while (fgets(conteudo, sizeof(conteudo), file) != NULL) {
    printf("%s", conteudo);
  }

  fclose(file);

  return 1;
}