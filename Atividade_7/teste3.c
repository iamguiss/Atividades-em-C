#include <stdio.h>

int main() {
    int numero = 25;
    int soma = 0;

    while (numero <= 200) {
        if (numero % 2 == 0) {
            soma += numero;
        }
        numero++;
    }

    printf("A soma dos números pares entre 25 e 200 é: %d", soma);

    return 0;
}
