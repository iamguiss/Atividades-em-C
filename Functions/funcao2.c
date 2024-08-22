#include <stdio.h>
//Crie uma função chamada maiorNumero que recebe três números inteiros e retorna o maior deles.

int maiorNumero(int a, int b, int c){

  if(a > b){
    return a;
  } else{
    if(b > c){
     return b;
    }
    else{
        return c;
    }
  }
}


int main(void) {

  int result = maiorNumero(4,5,1);
  printf("reusltado do mair  é: %d", result);
  return 0;
  
}