#include <stdio.h>
//Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'


int delta(int a, int b, int c) {

    int delta = (b * b) - 4*a*c;

}

int main() {

    int a,b,c;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    int resultado = delta(a,b,c);

    printf("resultado de delta: %d", resultado,a,b,c);
    

   return 0;
}