#include <stdio.h>
#include <string.h>
int tamanhoString(char texto[]){
  int contador = 0, i = 0;
  while(texto[i]!= NULL){
    contador++;
    i++;
  }
  return contador;
}
int main(void) {
  char texto[100] = "Esse eh o meu texto";
  int tamanho = tamanhoString(texto);

  printf("tamanhoARTESANAL: %d\t Stlen: %d", tamanho, strlen(texto));
  
  return 0;
}