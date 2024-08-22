#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial de números negativos não é definido.\n");
    } else {
        printf("Fatorial de %d é %d.\n", num, fatorial(num));
    }

    return 0;
}
