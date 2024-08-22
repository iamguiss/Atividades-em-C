#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6.

int Dado(){
    return = rand() % 6 + 1;

}
    

int main(void){

    srand(time(NULL));
    int sorte = Dado();

    printf("Sorteio entre 1 e 6: %d", sorte);


    return 0;
}