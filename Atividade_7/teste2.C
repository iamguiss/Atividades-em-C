#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Inclua esta biblioteca para inicializar o gerador de números aleatórios

// 2a - (já pode ter sido feito anteriormente) Adivinhe o número - Crie um programa que solicita um número ao usuário entre 1 e 10,
// sorteia um outro número dentro desta faixa de valores, e então diz se os dois números são iguais.

int main(void)
{

    int num, sorteio;

    srand(time(NULL));
    sorteio = rand() % 10 + 1;

    printf("Digite um numero de 1 a 10: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 10)
    {
        if(sorteio == num){
            printf("acerto\n");
        }else{
            printf("erro");
        }
    }
    else
    {
        printf("Numero Invalido", num);
    }

    return 0;
}
