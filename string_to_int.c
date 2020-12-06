#include <stdio.h>
#include <string.h>
#include <math.h>

int string_to_int(char *numero){
  int numeroSoma = 0;
  for(int i = 0 ; i<strlen(numero) ;i++){
    int intermediario = (int)numero[i] - 48;
    numeroSoma += intermediario * (pow(10, strlen(numero)-1-i));
  }
  return numeroSoma;
}

int main(void) {
  char numero[4] = "1528";
  char texto[10] = "";
  
  printf("numero: %d",string_int(numero));

  return 0;
}