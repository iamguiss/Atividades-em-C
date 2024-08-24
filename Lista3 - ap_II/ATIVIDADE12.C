#include <stdio.h>

// Função recursiva para calcular a representação binária de um número inteiro
int binario(int m, int n) {

    if(m > n){
        printf("A equipe A venceu a partida!\n");
        return;
    }else if(m < n){
         printf("A equipe B venceu a partida!\n");
         return;
    }else if(m == n){
        printf("A duas equipe empataram\n");
        return;
    }
}

int main() {
    int m, n;

    // Solicita o número de gols marcados pela equipe A e B
    printf("Digite o número de gols marcados pela equipe A: ");
    scanf("%d", &m);

    printf("Digite o número de gols marcados pela equipe B: ");
    scanf("%d", &n);

    return 0;
}

