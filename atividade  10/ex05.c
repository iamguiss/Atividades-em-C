#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



int main()
{

   /* 5.Escreva o conteúdo do vetor do exercício anterior na tela, colocando cada valor ao lado do anterior (na mesma linha).
     Se o valor do vetor for múltiplo de 10, então insira uma quebra de linha. */

    int vetor[100];
    int sorteio;
    int soma = 0;
    float media = 0;

    // Preenchendo o vetor com números aleatórios
    for (int i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 100 + 1;

        if (vetor[i] % 10 == 0)
        {
            printf("-\n");
        }
        printf("%d ", vetor[i]);
    }

    return 0;
}
