// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//2 - Crie uma matriz 10x10. Atribua o número 8 a todos os elementos da matriz. Atribua então o número 0 a um elemento randômico da matriz. Exiba a matriz na tela.

int main(void) {

  int matriz[10][10];
  int i, j;
  srand(time(0));

    printf("matriz 10x10\n");
  for(int i = 0; i < 10; i++){
    for(j = 0; j < 10; j++){
      matriz[i][j] = 8;
    }
  } 

   int linha_aleatoria = rand() % 10;
   int coluna_aleatoria = rand() % 10;
    
  matriz[linha_aleatoria][coluna_aleatoria] = rand() % 10;
  
   for(int i = 0; i < 10; i++){
    for(j = 0; j < 10; j++){
      printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
  
  return 0;
}