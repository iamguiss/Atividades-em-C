
//Escreva a função para cálculo do N-ésimo termo da sequência de Fibonacci utilizando recursividade.

#include <stdio.h>

int lucas(int n){
  if(n == 0){
    return 2;
  }else if(n == 1){
    return 1;
  }
  else{
    return lucas(n-1) + lucas(n-2);
  }
}

int main(void) {

  int resultado = lucas(8);
  printf("%d", resultado);
  
  return 0;
}