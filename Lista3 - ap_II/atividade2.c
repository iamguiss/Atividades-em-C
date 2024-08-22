//Escreva uma função recursiva que calcula a potência de um número inteiro x elevado a um número inteiro y.
#include <stdio.h>

int pot(int x, int y){
  if(y == 0){
    return 1;
  }else{
    return pot(x, y-1) * x;
  }
}

int main(void) {

  int resultado = pot(5,2);
  printf("%d", resultado);
  return 0;
}