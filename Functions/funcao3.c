#include <stdio.h>
//Crie uma função chamada calculaAreaCirculo que recebe o raio de um círculo (um número do tipo float) e retorna a área desse círculo.


float calculaAreaCirculo(float raio){
    float pi = 3.14;  
    return pi * (raio * raio);
}


int main(void) {

  float raio;
  printf("Digite o valor do raio: ");
  scanf("%f", &raio);
  
  float area = calculaAreaCirculo(raio);
  printf("O valor de area é: %f", area);
  return 0;
  
}

