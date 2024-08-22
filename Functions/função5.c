#include <stdio.h>
//Crie uma função chamada somaIntervalo que recebe dois números inteiros (início e fim) e retorna a soma de todos os números inteiros entre esses dois valores, inclusive.

int somaIntervalo(int inicio, int fim) {

    int soma = 0;
    for(int i = inicio; i <= fim; i++ ){
      soma += i; 
    }

    return soma;

}

int main() {

    int inicio, fim;
    printf("Digite um número para inicio: ");
    scanf("%d", &inicio);
    printf("Digite um número para o fim: ");
    scanf("%d", &fim);

    int result = somaIntervalo(inicio,fim);

    printf("A soma dos valores é: ", result, inicio, fim);

   return 0;
}