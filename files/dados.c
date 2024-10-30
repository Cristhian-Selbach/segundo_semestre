#include <stdio.h>

int main() {
  FILE *arquivo;
  int idade;
  float altura;
  char nome[50];

  // Abre o arquivo para leitura
  arquivo = fopen("dados.txt", "r");

  // Lê dados formatados do arquivo
  fscanf(arquivo, "%s %d %f", nome, &idade, &altura);

  // Imprime os dados lidos
  printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, idade, altura);

  // Fecha o arquivo
  fclose(arquivo);

  return 0;
}

