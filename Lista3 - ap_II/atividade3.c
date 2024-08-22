
//Escreva uma função recursiva que recebe um array de inteiros e retorna a soma dos elementos do array.
#include <stdio.h>

int SomaArray(int n,int arr[]){


if(n == 0){
  return 0;
}
else{
  return arr[0] + SomaArray(n -1, arr + 1);
}
}

int main(void) {

  int arr[] = {1,2,3,4,5};

  int n = sizeof(arr) / sizeof(arr[0]);

  printf("%d", SomaArray(n, arr));
  return 0;
}