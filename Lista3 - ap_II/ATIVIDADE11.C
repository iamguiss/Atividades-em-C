#include <stdio.h>

// Função recursiva para calcular a representação binária de um número inteiro
void binario(int n) {
    if (n > 1) {
        // Chama a função recursivamente com a parte inteira da divisão por 2
        binario(n / 2);
    }
    // Imprime o resto da divisão por 2 (0 ou 1)
    printf("%d", n % 2);
}

int main() {
    int n = 120; // Exemplo de valor inteiro
    printf("O número %d em binário é: ", n);
    binario(n);
    printf("\n");

    return 0;
}

