#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main()
{
    int vetor[100];
    int i, j;

    int vetor[100];
    int i, j;

    
    for (i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 100 + 1;
    }

    
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("Valores iguais encontrados: %d e %d\n", vetor[i], vetor[j]);
            }
        }
    }

    return 0;
}
