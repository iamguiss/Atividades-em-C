#include <stdio.h>

int main() {
    float altura, altura_mais_alto = 0;
    int contador = 0;

    while (contador < 5) {
        printf("Digite a altura do atleta %d: ", contador + 1);
        scanf("%f", &altura);

        if (altura > altura_mais_alto) {
            altura_mais_alto = altura;
        }

        contador++;
    }

    printf("A altura do atleta mais alto é: %.2f\n", altura_mais_alto);

    return 0;
}
