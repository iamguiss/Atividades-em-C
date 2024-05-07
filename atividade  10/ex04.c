#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



int main()
{

   // 4.
     int vetor[100];
     int sorteio;
     int soma = 0;
     float media = 0;

    // Preenchendo o vetor com números aleatórios
    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 100 + 1;
    }

    // Calculando a média dos últimos 10 números
    for (int i = 90; i < 100; i++) {
        media += vetor[i];
    }
    media /= 10;

    // Calculando a soma dos números menores que a média dos últimos 10
    for (int i = 0; i < 100; i++) {
        if (vetor[i] < media) {
            soma += vetor[i];
        }
    }

    printf("A soma dos números menores que a média dos últimos 10 é: %d\n", soma);

}
