#include <stdio.h>
#include <stdbool.h>
//2 - Escreva uma função chamada EhPar( ), que recebe um número inteiro e retorna um valor booleano indicando se o número é par. 
bool EhPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (EhPar(num)) {
        printf("%d é um número par.\n", num);
    } else {
        printf("%d não é um número par.\n", num);
    }
    
    return 0;
}
