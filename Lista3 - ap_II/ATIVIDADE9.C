
//Escreva a função para cálculo do N-ésimo termo da sequência de Catalan utilizando recursividade.
#include <stdio.h>

// Função recursiva para calcular o N-ésimo número de Catalan
unsigned long int catalan(unsigned int n) {
    // Caso base
    if (n <= 1)
        return 1;

    // Catalan(n) = sum(Catalan(i) * Catalan(n-i-1)) for i=0 to n-1
    unsigned long int res = 0;
    for (int i = 0; i < n; i++) {
        res += catalan(i) * catalan(n - i - 1);
    }
    
    return res;
}

int main() {
    int n = 5; // Exemplo: calcular o 5º número de Catalan
    printf("Catalan(%d) = %lu\n", n, catalan(n));
    return 0;
}
