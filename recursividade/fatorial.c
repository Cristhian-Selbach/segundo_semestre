#include <stdio.h>

int fatorial(int n) {
    // Caso base: fatorial de 1 é 1
    if (n == 1 || n == 0) {
        return 1;
    }
    // Chamada recursiva: n! = n * (n-1)!
    return n * fatorial(n - 1);
}

int main(){
  int result = fatorial(5);
  printf("%d", result);
}
