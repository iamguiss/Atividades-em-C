#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool verificarOrdemCrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return false;
        }
    }
    return true;
}

void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Números aleatórios de 0 a 99
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main()
{

    // 6 - Crie uma função que declara e preenche um vetor de 5 números aleatórios. A função deve exibir o vetor na tela e retornar TRUE
    //  caso este vetor esteja em ordem crescente. No seu programa, chame esta função até ela retornar True.

    int vetor[5];
    bool ordemCrescente = false;

    while (!ordemCrescente) {
        preencherVetor(vetor, 5);
        ordemCrescente = verificarOrdemCrescente(vetor, 5);
    }

    printf("Vetor em ordem crescente!\n");
    return 0;
}
