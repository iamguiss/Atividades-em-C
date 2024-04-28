#include <stdio.h>
//5a - Escreva um programa que solicita o código (um número inteiro)
// e a altura de 5 atletas. Ao final da entrada de dados, informe O CÓDIGO do atleta mais alto. 
int main() {
    int contador = 1;
    int codigo_mais_alto;
    float altura_mais_alta = 0.0;
    int codigo, atleta_atual;
    float altura;

    // Solicita o código e a altura de cada atleta
    while (contador <= 5) {
        printf("Digite o código do atleta %d: ", contador);
        scanf("%d", &codigo);
        printf("Digite a altura do atleta %d (em metros): ", contador);
        scanf("%f", &altura);

        // Verifica se a altura atual é a maior
        if (altura > altura_mais_alta) {
            altura_mais_alta = altura;
            codigo_mais_alto = codigo;
            atleta_atual = contador;
            
        }

        contador++; // Incrementa o contador
    }

    // Imprime o código do atleta mais alto
    printf("O código do atleta mais alto (atleta %d) é: %d\n", atleta_atual, codigo_mais_alto);

    return 0;
}
