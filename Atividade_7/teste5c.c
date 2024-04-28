#include <stdio.h>

int main() {
    int contador = 0;
    int codigo_mais_alto;
    float altura_mais_alta = 0.0;
    float altura_total = 0.0;
    float altura_media;
    int codigo, atleta_atual;
    float altura;
    int continuar = 1; // Variável para controlar se o usuário deseja continuar adicionando atletas

    while (continuar == 1) {
        contador++; // Incrementa o contador de atletas

        // Solicita o código e a altura do novo atleta
        printf("Digite o código do atleta %d: ", contador);
        scanf("%d", &codigo);
        printf("Digite a altura do atleta %d (em metros): ", contador);
        scanf("%f", &altura);

        // Calcula a altura total para calcular a média
        altura_total += altura;

        // Verifica se a altura do novo atleta é a maior até agora
        if (altura > altura_mais_alta) {
            altura_mais_alta = altura;
            codigo_mais_alto = codigo;
            atleta_atual = contador;
        }

        // Pergunta ao usuário se deseja adicionar outro atleta
        printf("Deseja incluir outro atleta? (1 - Sim, 2 - Não): ");
        scanf("%d", &continuar);
    }

    // Calcula a altura média
    altura_media = altura_total / contador;

    // Imprime o código do atleta mais alto
    printf("O código do atleta mais alto (atleta %d) é: %d\n", atleta_atual, codigo_mais_alto);

    // Imprime a altura média dos atletas
    printf("A altura média dos atletas é: %.2f metros\n", altura_media);

    return 0;
}
