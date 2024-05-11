#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MoverBaixo(int arr[][10])
{
    int mover = arr[5][5];

    for (int i = 5; i > 0; i--)
    {
        arr[i][5] = arr[i - 1][5];
    }
    arr[6][5] = mover;
}

void MoverCima(int arr[][10])
{
    int mover = arr[0][5];

    for (int i = 0; i < 5; i++)
    {
        arr[i][5] = arr[i + 1][5];
    }
    arr[5][5] = mover;
}

int main()
{
    // 5 - Desafio JEDI MASTER ADVANCED PLUS II:
    // Crie uma matriz 10x10 de caracteres e preencha com zeros. Atribua um número 5 ao elemento 5,5.
    // Solicite que o usuário digite um dos seguintes comandos:
    // 8 - cima,
    // 2 - baixo,
    // 4 - esquerda,
    // 6 - direita,
    // 0 - sair

    int v[10][10];
    int i, j;
    int comando;

    printf(" ---------------------------\n");
    printf(" | Comando para mover o 5  |\n");
    printf(" ---------------------------\n");
    printf(" | mover para cima: 8      |\n");
    printf(" ---------------------------\n");
    printf(" |  mover para baixo: 2    |\n");
    printf(" ---------------------------\n");
    printf(" | mover para esquerda:4   |\n");
    printf(" ---------------------------\n");
    printf(" | mover para direita: 6   |\n");
    printf(" ---------------------------\n");
    printf(" | mover para sair: 0      |\n");
    printf(" ---------------------------\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            v[i][j] = 0;
        }
    }
    v[5][5] = 5;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ", v[i][j]);
        }
        printf("\n");
    }
    do
    {

        printf("\nDigite um número: ");
        scanf("%d", &comando);

        if (comando == 8)
        {
            MoverCima(v);

            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    printf(" %d ", v[i][j]);
                }
                printf("\n");
            }
        }

        else if (comando == 2)
        {
            MoverBaixo(v);

            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    printf(" %d ", v[i][j]);
                }
                printf("\n");
            }
        }
        
        else if (comando == 0)
        {
            printf("\nPrograma encerrado!");
            break;
        }

    } while (1);

    return 0;
}
