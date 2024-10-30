#include <stdio.h>
#include <stdlib.h>

void readArchive(FILE *file){
  printf("\n\ncontent of archive:\n");
  rewind(file); // move o ponteiro de leitura/escrita do arquivo de volta para o início

  char ch;

  while ((ch = fgetc(file)) != EOF) {
    putchar(ch);  // Assim como o putS, o put(char) imprime um caractere no terminal
  }
}

void choiceOption(FILE *file){
  int opt;

  do {
    printf("\n\nMENU:\n");
    printf("1. read the archive.\n");
    printf("2. write on the archive.\n");
    printf("3. go out.\n");
    printf("why you wanna do? (1, 2 or 3): ");

    scanf("%d", &opt);

    if(opt == 1){
      readArchive(file);
    }
    else if(opt == 2){
      // writeArchive();
    }

  } while( opt > 0 && opt < 3 );

}

int main(){
  
  FILE *file = fopen("file.txt", "a+");

  if(file == NULL){
    printf("error to open the archive");
    return 1;
  }

  choiceOption(file);

  printf("\n\ncompile with succefull");
  return 0;
}