// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//3 - Crie uma matriz 20 x 20 de inteiros. Preencha com números aleatórios entre 10 e 99. Exiba então a soma dos valores de todas as linhas desta matriz, e informe qual linha possui o maior valor.

int main() {
    int matriz[20][20];
    int somaLinhas[20] = {0};
    int maiorSoma = 0;
    int linhaMaiorSoma = 0;

    srand(time(0));

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            matriz[i][j] = rand() % 90 + 10;
            somaLinhas[i] += matriz[i][j];
            printf("%d ", matriz[i][j]);
        }
        if (somaLinhas[i] > maiorSoma) {
            maiorSoma = somaLinhas[i];
            linhaMaiorSoma = i;
        }
        printf("\n");
    }

    printf("\n\nSoma de cada linha:\n");
    for (int i = 0; i < 20; i++) {
        printf("Linha %d: %d\n", i, somaLinhas[i]);
    }

    printf("A linha com a maior soma é a linha %d com soma %d.\n", linhaMaiorSoma, maiorSoma);

    return 0;
}