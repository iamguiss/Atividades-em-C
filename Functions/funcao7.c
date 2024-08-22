#include <stdio.h>
// Usando as 3 funções acima, crie um aplicativo que calcula as raízes de uma equação do 2o grau: ax² + bx + c=0 Para ela existir, o coeficiente 'a' deve ser diferente de zero. Caso o delta seja maior ou igual a zero, as raízes serão reais. Caso o delta seja negativo, as reais serão complexas e da forma: x + iy

int delta(int a, int b, int c) {

    int delta = (b * b) - 4*a*c;

    if(a != 0){
        printf("valor é diferente de 0\n");
    }else{
        printf("a é igual a 0\n");
    }
        
    

    if(delta >= 0){
        printf("as raizes são reais\n");
    }else{
        printf("as raizes de delta são negativos\n");
    }
    return delta;

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