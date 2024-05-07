#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>



int main()
{

    //2.
     int numeros[5];
      int soma = 0;

     printf("Insira 5 números:\n");

     for (int i = 0; i < 5; i++) {
         scanf("%d", &numeros[i]);
         soma += numeros[i];
     }

     float media = (float)soma / 5;

     printf("Números acima da média:\n");
     for (int i = 0; i < 5; i++) {
         if (numeros[i] > media) {
             printf("%d\n", numeros[i]);
         }
     }
    return 0;
}
