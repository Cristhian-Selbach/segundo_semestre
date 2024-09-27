#include <stdio.h>

int fibonatti(int x){

  if (x == 0) return 0;

  return fibonatti(x - 1) + fibonatti(x - 2);

}

int main(){
  int result = fibonacci(5);
  printf("\nRESULTADO: %d", result);
}