#include <stdio.h>
#include <string.h>
#define N 100

char *aux;

char* auxiliar(int tamanho,char texto[], int i){
  for(int j = 0 ;j<tamanho;j++){
    aux[j] = texto[i];
    i++;
  }
  return aux;
}
char replaceAll(char texto[], char novoPadrao[], char padraoProcurado[]){
  char textoNovo[N];
  aux = (char*)malloc(strlen(padraoProcurado)*sizeof(char));
  int j = 0, i = 0;
  while(i<strlen(texto)){
    char *intermediaria = auxiliar(strlen(padraoProcurado),texto, i);
    if(strcmp(intermediaria ,padraoProcurado) != 0){
      textoNovo[j] = texto[i];
      j++;
      i++;
    }
    else{
      for(int k=0; k<strlen(novoPadrao);k++){
        textoNovo[j] = novoPadrao[k];
        j++;
      }  
      i += strlen(padraoProcurado);
      while(texto[i] == ' '){
        i++;
      }
    }  
  }
  strcpy(texto, textoNovo);
}

int main(void) {
  char texto[N] = "Monitoria,, Hoje, 14/09/2020,, CI, ";
  replaceAll(texto, "..", ",,");
  printf("\n%s", texto);
  return 0;
}











#include <stdio.h>
#include <string.h>
#define N 100

char *aux;

char* auxiliar(int tamanho,char texto[], int i){
  for(int j = 0 ;j<tamanho;j++){
    aux[j] = texto[i];
    i++;
  }
  return aux;
}
char replaceAll(char texto[], char padraoProcurado[],char novoPadrao[]){
  char textoNovo[N];
  aux = (char*)malloc(strlen(padraoProcurado)*sizeof(char));
  int j = 0, i = 0;
  while(i<strlen(texto)){
    char *intermediaria = auxiliar(strlen(padraoProcurado),texto, i);
    if(strcmp(intermediaria ,padraoProcurado) != 0){
      textoNovo[j] = texto[i];
      j++;
      i++;
    }
    else{
      for(int k=0; k<strlen(novoPadrao);k++){
        textoNovo[j] = novoPadrao[k];
        j++;
      }  
      i += strlen(padraoProcurado);
      while(texto[i] == ' '){
        i++;
      }
    }  
  }
  strcpy(texto, textoNovo);
}

int main(void) {
  char texto[N] = "Monitoria,, Hoje, 14/09/2020,, CI,";
  replaceAll(texto, "..", ",,");
  

  for(int i = 0; i<strlen(texto)-1;i++){
    if(texto[i] == ',' && texto[i+1] == ','){
      replaceAll(texto, ",,", ",nao informado,");
    }
  }
  if(texto[strlen(texto)-1] == ','){ /// CASO ULTIMA ,
    strcat(texto, "nao informado"); 
  }

  printf("\n%s", texto);
  return 0;
}