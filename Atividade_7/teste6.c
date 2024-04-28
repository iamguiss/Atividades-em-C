#include <stdio.h>

// Solicite que seja digitado um número que seja par e maior que 200 e múltiplo de 4.

int main()
{

    int num;

    printf("Digite um numero maior que 200 e multiplo de 4: ");
    scanf("%d", &num);

    while (num % 2 != 0 || num <= 200 || num % 4 != 0)
    {
        printf("Valor é INVALIDO, Tente novamente:");
        scanf("%d",num);
    }

     printf("Número válido inserido: %d", num);


    return 0;
}
