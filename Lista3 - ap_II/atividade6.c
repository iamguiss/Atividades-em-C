
//Escreva a função para cálculo do N-ésimo termo da sequência de Fibonacci utilizando recursividade.

#include <stdio.h>

int fibonacci(int n){
  if(n <= 1){
    return n;
  }
  else{
    return fibonacci(n-1) * fibonacci(n-2);
  }
}

int main(void) {

  int resultado = fibonacci(4);
  printf("%d", resultado);
  
  return 0;
}