#include <stdio.h>

int soma(int n){
  if (n == 0) {
    return 0;
  }
  return (n % 10) + soma(n/10);
}

int main(){
  int result = soma(2865);
  printf("\nRESULTADO: %d", result);
}