#include <stdio.h>
#include <stdbool.h>
//Escreva uma função chamada EhPrimo( ), que recebe um número inteiro e retorna um valor booleano indicando se o número é primo.
bool EhPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int numero = 17;
    
    if (EhPrimo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }
    
    return 0;
}