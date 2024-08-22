#include <stdio.h>
//Crie uma função em linguagem C que receba 2 números e retorne o maior valor

int diferenca(int a, int b) {

    if( a > b){
        return a;
    }else{
        return b;
    }

}

int main() {

    int a,b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    int maior = diferenca(a, b);

    printf("valor maior: %d", maior);

   return 0; 
}
   
