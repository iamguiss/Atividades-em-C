#include <stdio.h>
//1 - Crie um programa que recebe 5 números inteiros e exiba o menor.
int main() {
    int contador = 1;
    int numero, menor;

    printf("Insira o 1º número: ");
    scanf("%d", &menor);

    while (contador < 5) {
        printf("Insira o %dº número: ", contador + 1);
        scanf("%d", &numero);

        if (numero < menor) {
            menor = numero;
        }
        contador++;
    }

    printf("O menor número inserido é: %d", menor);

    return 0;
}
