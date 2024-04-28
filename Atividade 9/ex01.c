#include <stdio.h>

int MAX(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite outro valor: ");
    scanf("%d", &num2);

    int maior = MAX(num1, num2);
    
    printf("O maior número entre %d e %d é: %d", num1, num2, maior);
    
    return 0;
}
