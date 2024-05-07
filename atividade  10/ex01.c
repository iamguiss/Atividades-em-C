#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



int main()
{

    //1.
     
     // Criando um vetor de inteiros de 10 posições
     int vetor[10];
     int i;

    // Inserindo o número 5 em todas as posições do vetor
    for(i = 0; i < 10; i++) {
        vetor[i] = 5;
    }

    // Imprimindo o vetor
    printf("Vetor com o número 5 em todas as posições:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
