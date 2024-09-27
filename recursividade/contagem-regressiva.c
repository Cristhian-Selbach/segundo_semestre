#include <stdio.h>

void regress(int x){

  if (x == 0){
    return;
  }
  printf("%d ", x);
  regress(x-1);

}

int main(){
  regress(5);
}