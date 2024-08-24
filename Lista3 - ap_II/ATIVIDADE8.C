
//Escreva a função para cálculo do N-ésimo termo da sequência de Padovan utilizando recursividade.

#include <stdio.h>

int Padovan(int n){
   if (n == 0 || n == 1 || n == 2){
    return 2;
  }
  else{
    return Padovan(n-2) + Padovan(n-3);
  }
}

int main(void) {

  int resultado = Padovan(10);
  printf("%d", resultado);
  
  return 0;
}