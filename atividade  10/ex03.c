#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



int main()
{

   //3.
     int vetor[100];
     int i;
     int sorteio;
     int soma = 0;

    srand(time(0));

    for (i = 0; i < 100; i++)
    {
        sorteio = rand() % 100 + 1;
        vetor[i] += sorteio;
        soma += vetor[i];
        printf("Posição: %d e %d\n", i, sorteio);
    }

    float media = soma / 100.0;

    printf("A média dos números é: %f\n",media);

    return 0;
}
