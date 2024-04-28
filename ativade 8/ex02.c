#include <stdio.h>

// 2 - Crie um programa que recebe números inteiros até que o usuário digite 0 e então exiba o maior e o menor.

int main()
{
    int contador = 1;
    int numero, menor, maior = 0;



    while (numero != 0)
    {
        printf("Insira o %dº número: ", contador + 1);
        scanf("%d", &numero);

        if (numero < menor && numero != 0)
        {
            menor = numero;
        }
        if (numero > maior)
        {
            maior = numero;
        }

        contador++;
    }
    printf("O numero maior é: %d e numero menor é: %d", maior, menor);
    return 0;
}
