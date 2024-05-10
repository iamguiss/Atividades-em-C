//1 - Crie uma matriz 3x3 de números inteiros, associe o valor 9 ao elemento central desta matriz. Exiba a matriz na tela de forma adequada.
// #include <stdio.h>
int main(void) {

  int matriz[3][3];
  int i, j;

    printf("matriz 3x3\n");
  for(int i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      matriz[i][j] = 0;
    }
  } 
  matriz[1][1] = 9;
  
   for(int i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
  
  return 0;
}