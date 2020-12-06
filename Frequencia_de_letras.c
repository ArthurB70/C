#include <stdio.h>
void inicializa (int vetor[]){
  for(int i = 0; i< 26;i++){
      vetor[i] = 0;
  }
}
int main(void) {
  int vetor[26];
  char palavra[200] = "PALAVRA";
  int cont = 0;
  inicializa(vetor);

  for(int i = 0; i<strlen(palavra); i++){
    for(int j = 0; j< strlen(palavra); j++){
      if(palavra[i] == palavra[j])
        cont++;
    }
    vetor[(int)palavra[i] - 65] = cont;
    cont  = 0;
  }
  for(int i = 0; i<26; i++){
    if(vetor[i] != 0)
      printf("\nCaractere: %c \t Contador: %d ", (char)i+65, vetor[i]);
  }
  


  return 0;
}