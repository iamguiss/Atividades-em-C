#include <stdio.h>
//Crie uma função chamada multiplica que recebe dois números inteiros e retorna o produto deles.

int multiplica(int a, int b){
  return a * b;
}


int main(void) {

  int result = multiplica(2,2);
  printf("reusltado dá multiplica é: %d", result);
  return 0;
}