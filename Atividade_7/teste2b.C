#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Inclua esta biblioteca para inicializar o gerador de números aleatórios

// 2b - Faça um aprimoramento do programa anterior. Desta vez, seu programa deverá dar dicas, dizendo se o numero sorteado é maior ou menor,
//  e permitir um novo palpite do usuário, ATÉ ELE ACERTAR. Mostrar quantas tentativas foram efetuadas (ele não irá sortear o número novamente).

int main(void)
{

    srand(time(NULL));

    int num;
    int cont = 0;
    int c1 = rand() % 10 + 1;

    printf("Digite um numero entre (1 a 10):  ");
    scanf("%d", &num);


    if (num >= 1 && num <= 10)
    {
        while (num != c1)
        {
            printf("numero não é igual \n");

            if (num < c1)
            {
                printf("O valor é maior");
            }
            else
            {
                printf("O valor é menor");
            }
            printf("\nTente novamente:  ");
            scanf("%d", &num);
            cont++;
        }
        
        printf("voce acerto\n");
        printf("numero de tentativas: %d",cont);
    }
    else
    {
        printf("Numero Invalido", num);
    }

    return 0;
}
