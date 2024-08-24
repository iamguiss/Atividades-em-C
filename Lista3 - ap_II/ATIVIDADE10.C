#include <stdio.h>

// Função recursiva para calcular o N-ésimo termo da sequência de Collatz
int collatz(unsigned int n, unsigned int step) {
    // Caso base: Se step é 1, retornamos o número atual
    if (step == 1) {
        return n;
    }
    
    // Aplicar a regra da sequência de Collatz
    if (n % 2 == 0) {
        return collatz(n / 2, step - 1);
    } else {
        return collatz(3 * n + 1, step - 1);
    }
}

int main() {
    unsigned int n = 6; // Número inicial
    unsigned int step = 10; // Qual termo na sequência de Collatz você quer calcular
    
    printf("O %d-ésimo termo da sequência de Collatz, começando com %d, é %d\n", step, n, collatz(n, step));
    return 0;
}
