
//Escreva uma função que calcula o número fatorial de um número. Implementar uma versão recursiva e uma versão com laço de repetição.
#include <stdio.h>


int fat(int n){
  if(n == 0)
    return 1;
  else
    return fat(n-1)*n;
}

int main(void) {
  for(int i = 1; i < 6; i++){
    printf("%d\n", fat(i));
  }
  return 0;
}