#include <stdio.h>

// 1 - Solicite um número e então diga se este é um número perfeito.

int main(void)
{

    int num, soma = 0;
    int i = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            soma += i;
        }
        i++;
    }

    if (soma == num)
    {
        printf("%d é um número perfeito.\n", num);
    }
    else
    {
        printf("%d não é um número perfeito.\n", num);
    }

    return 0;
}
