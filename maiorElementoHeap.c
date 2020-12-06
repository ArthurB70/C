#include <stdio.h>
#define MAX 31
int acha_maior_heap(int vetor[], int i, int maior){
  if(i >= MAX || vetor[i] == NULL)
    return maior;
  if(maior < vetor[i]){
    maior = vetor[i];
  }
  printf("\nvalor array[%d]: %d", i, vetor[i]);
  
  acha_maior_heap(vetor, 2*i, maior);
  return acha_maior_heap(vetor, (2*i)+1, maior);
}


/*
  if(i<=MAX){
    if(maior < vetor[i]){
      maior = vetor[i];
    }
  maior = acha_maior_heap(vetor, 2*i, maior);
  maior = acha_maior_heap(vetor, (2*i)+1, maior);
  }
  return maior;

*/



int main(void) {
  int vetor[MAX];
  int j = MAX;
  for(int i = 1;i<=MAX;i++,j--)
    vetor[i] = j;
  
  int maior = 0;
  maior = acha_maior_heap(vetor, 1, maior);
  printf("\nmaior:%d", maior);
  return 0;
}