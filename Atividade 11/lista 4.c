// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//4 - Utilizando a mesma matriz, exiba a soma dos elementos da diagonal principal.

int main() {
    int matriz[20][20];
    int diagonal[20][20] = {2},{4},{8},{10},{12},{14},{16},{18},{20}
    int somaLinhas[20] = {0};
    int maiorSoma = 0;
    int linhaMaiorSoma = 0;

    srand(time(0));

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            matriz[i][j] = rand() % 90 + 10;
            somaLinhas[i] += matriz[i][j];
            if (i != j) {
                matriz[i][j] = 0;
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
}